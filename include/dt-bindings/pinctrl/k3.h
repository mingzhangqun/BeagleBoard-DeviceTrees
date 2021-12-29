/* SPDX-License-Identifier: GPL-2.0 */
/*
 * This header provides constants for pinctrl bindings for TI's K3 SoC
 * family.
 *
 * Copyright (C) 2018-2021 Texas Instruments Incorporated - https://www.ti.com/
 */
#ifndef _DT_BINDINGS_PINCTRL_TI_K3_H
#define _DT_BINDINGS_PINCTRL_TI_K3_H

#define PULLUDEN_SHIFT		(16)
#define PULLTYPESEL_SHIFT	(17)
#define RXACTIVE_SHIFT		(18)

#define PULL_DISABLE		(1 << PULLUDEN_SHIFT)
#define PULL_ENABLE		(0 << PULLUDEN_SHIFT)

#define PULL_UP			(1 << PULLTYPESEL_SHIFT | PULL_ENABLE)
#define PULL_DOWN		(0 << PULLTYPESEL_SHIFT | PULL_ENABLE)

#define INPUT_EN		(1 << RXACTIVE_SHIFT)
#define INPUT_DISABLE		(0 << RXACTIVE_SHIFT)

/* Only these macros are expected be used directly in device tree files */
#define PIN_OUTPUT		(INPUT_DISABLE | PULL_DISABLE)
#define PIN_OUTPUT_PULLUP	(INPUT_DISABLE | PULL_UP)
#define PIN_OUTPUT_PULLDOWN	(INPUT_DISABLE | PULL_DOWN)
#define PIN_INPUT		(INPUT_EN | PULL_DISABLE)
#define PIN_INPUT_PULLUP	(INPUT_EN | PULL_UP)
#define PIN_INPUT_PULLDOWN	(INPUT_EN | PULL_DOWN)

#define AM65X_IOPAD(pa, val, muxmode)		(((pa) & 0x1fff)) ((val) | (muxmode))
#define AM65X_WKUP_IOPAD(pa, val, muxmode)	(((pa) & 0x1fff)) ((val) | (muxmode))

#define J721E_IOPAD(pa, val, muxmode)		(((pa) & 0x1fff)) ((val) | (muxmode))
#define J721E_WKUP_IOPAD(pa, val, muxmode)	(((pa) & 0x1fff)) ((val) | (muxmode))

#define AM64X_IOPAD(pa, val, muxmode)		(((pa) & 0x1fff)) ((val) | (muxmode))
#define AM64X_MCU_IOPAD(pa, val, muxmode)	(((pa) & 0x1fff)) ((val) | (muxmode))

#define J721S2_IOPAD(pa, val, muxmode)		(((pa) & 0x1fff)) ((val) | (muxmode))
#define J721S2_WKUP_IOPAD(pa, val, muxmode)	(((pa) & 0x1fff)) ((val) | (muxmode))

/* RCN-EE: sysconfig_1.10.0: This file was auto-generated by TI PinMux on 10/20/2021. */
#define J721E_PIN_EXTINTN		0x0
#define J721E_PIN_PRG1_PRU0_GPO0	0x4
#define J721E_PIN_PRG1_PRU0_GPO1	0x8
#define J721E_PIN_PRG1_PRU0_GPO2	0xC
#define J721E_PIN_PRG1_PRU0_GPO3	0x10
#define J721E_PIN_PRG1_PRU0_GPO4	0x14
#define J721E_PIN_PRG1_PRU0_GPO5	0x18
#define J721E_PIN_PRG1_PRU0_GPO6	0x1C
#define J721E_PIN_PRG1_PRU0_GPO7	0x20
#define J721E_PIN_PRG1_PRU0_GPO8	0x24
#define J721E_PIN_PRG1_PRU0_GPO9	0x28
#define J721E_PIN_PRG1_PRU0_GPO10	0x2C
#define J721E_PIN_PRG1_PRU0_GPO11	0x30
#define J721E_PIN_PRG1_PRU0_GPO12	0x34
#define J721E_PIN_PRG1_PRU0_GPO13	0x38
#define J721E_PIN_PRG1_PRU0_GPO14	0x3C
#define J721E_PIN_PRG1_PRU0_GPO15	0x40
#define J721E_PIN_PRG1_PRU0_GPO16	0x44
#define J721E_PIN_PRG1_PRU0_GPO17	0x4C
#define J721E_PIN_PRG1_PRU0_GPO18	0x50
#define J721E_PIN_PRG1_PRU0_GPO19	0x54
#define J721E_PIN_PRG1_PRU1_GPO0	0x58
#define J721E_PIN_PRG1_PRU1_GPO1	0x5C
#define J721E_PIN_PRG1_PRU1_GPO2	0x60
#define J721E_PIN_PRG1_PRU1_GPO3	0x64
#define J721E_PIN_PRG1_PRU1_GPO4	0x68
#define J721E_PIN_PRG1_PRU1_GPO5	0x6C
#define J721E_PIN_PRG1_PRU1_GPO6	0x70
#define J721E_PIN_PRG1_PRU1_GPO7	0x74
#define J721E_PIN_PRG1_PRU1_GPO8	0x78
#define J721E_PIN_PRG1_PRU1_GPO9	0x7C
#define J721E_PIN_PRG1_PRU1_GPO10	0x80
#define J721E_PIN_PRG1_PRU1_GPO11	0x84
#define J721E_PIN_PRG1_PRU1_GPO12	0x88
#define J721E_PIN_PRG1_PRU1_GPO13	0x8C
#define J721E_PIN_PRG1_PRU1_GPO14	0x90
#define J721E_PIN_PRG1_PRU1_GPO15	0x94
#define J721E_PIN_PRG1_PRU1_GPO16	0x98
#define J721E_PIN_PRG1_PRU1_GPO17	0x9C
#define J721E_PIN_PRG1_PRU1_GPO18	0xA0
#define J721E_PIN_PRG1_PRU1_GPO19	0xA4
#define J721E_PIN_PRG1_MDIO0_MDIO	0xA8
#define J721E_PIN_PRG1_MDIO0_MDC	0xAC
#define J721E_PIN_PRG0_PRU0_GPO0	0xB0
#define J721E_PIN_PRG0_PRU0_GPO1	0xB4
#define J721E_PIN_PRG0_PRU0_GPO2	0xB8
#define J721E_PIN_PRG0_PRU0_GPO3	0xBC
#define J721E_PIN_PRG0_PRU0_GPO4	0xC0
#define J721E_PIN_PRG0_PRU0_GPO5	0xC4
#define J721E_PIN_PRG0_PRU0_GPO6	0xC8
#define J721E_PIN_PRG0_PRU0_GPO7	0xCC
#define J721E_PIN_PRG0_PRU0_GPO8	0xD0
#define J721E_PIN_PRG0_PRU0_GPO9	0xD4
#define J721E_PIN_PRG0_PRU0_GPO10	0xD8
#define J721E_PIN_PRG0_PRU0_GPO11	0xDC
#define J721E_PIN_PRG0_PRU0_GPO12	0xE0
#define J721E_PIN_PRG0_PRU0_GPO13	0xE4
#define J721E_PIN_PRG0_PRU0_GPO14	0xE8
#define J721E_PIN_PRG0_PRU0_GPO15	0xEC
#define J721E_PIN_PRG0_PRU0_GPO16	0xF0
#define J721E_PIN_PRG0_PRU0_GPO17	0xF4
#define J721E_PIN_PRG0_PRU0_GPO18	0xF8
#define J721E_PIN_PRG0_PRU0_GPO19	0xFC
#define J721E_PIN_PRG0_PRU1_GPO0	0x100
#define J721E_PIN_PRG0_PRU1_GPO1	0x104
#define J721E_PIN_PRG0_PRU1_GPO2	0x108
#define J721E_PIN_PRG0_PRU1_GPO3	0x10C
#define J721E_PIN_PRG0_PRU1_GPO4	0x110
#define J721E_PIN_PRG0_PRU1_GPO5	0x114
#define J721E_PIN_PRG0_PRU1_GPO6	0x118
#define J721E_PIN_PRG0_PRU1_GPO7	0x11C
#define J721E_PIN_PRG0_PRU1_GPO8	0x120
#define J721E_PIN_PRG0_PRU1_GPO9	0x124
#define J721E_PIN_PRG0_PRU1_GPO10	0x128
#define J721E_PIN_PRG0_PRU1_GPO11	0x12C
#define J721E_PIN_PRG0_PRU1_GPO12	0x130
#define J721E_PIN_PRG0_PRU1_GPO13	0x134
#define J721E_PIN_PRG0_PRU1_GPO14	0x138
#define J721E_PIN_PRG0_PRU1_GPO15	0x13C
#define J721E_PIN_PRG0_PRU1_GPO16	0x140
#define J721E_PIN_PRG0_PRU1_GPO17	0x144
#define J721E_PIN_PRG0_PRU1_GPO18	0x148
#define J721E_PIN_PRG0_PRU1_GPO19	0x14C
#define J721E_PIN_PRG0_MDIO0_MDIO	0x150
#define J721E_PIN_PRG0_MDIO0_MDC	0x154
#define J721E_PIN_RGMII5_TX_CTL		0x158
#define J721E_PIN_RGMII5_RX_CTL		0x15C
#define J721E_PIN_RGMII5_TD3		0x160
#define J721E_PIN_RGMII5_TD2		0x164
#define J721E_PIN_RGMII5_TD1		0x168
#define J721E_PIN_RGMII5_TD0		0x16C
#define J721E_PIN_RGMII5_TXC		0x170
#define J721E_PIN_RGMII5_RXC		0x174
#define J721E_PIN_RGMII5_RD3		0x178
#define J721E_PIN_RGMII5_RD2		0x17C
#define J721E_PIN_RGMII5_RD1		0x180
#define J721E_PIN_RGMII5_RD0		0x184
#define J721E_PIN_RGMII6_TX_CTL		0x188
#define J721E_PIN_RGMII6_RX_CTL		0x18C
#define J721E_PIN_RGMII6_TD3		0x190
#define J721E_PIN_RGMII6_TD2		0x194
#define J721E_PIN_RGMII6_TD1		0x198
#define J721E_PIN_RGMII6_TD0		0x19C
#define J721E_PIN_RGMII6_TXC		0x1A0
#define J721E_PIN_RGMII6_RXC		0x1A4
#define J721E_PIN_RGMII6_RD3		0x1A8
#define J721E_PIN_RGMII6_RD2		0x1AC
#define J721E_PIN_RGMII6_RD1		0x1B0
#define J721E_PIN_RGMII6_RD0		0x1B4
#define J721E_PIN_MDIO0_MDIO		0x1B8
#define J721E_PIN_MDIO0_MDC		0x1BC
#define J721E_PIN_SPI0_CS0		0x1C0
#define J721E_PIN_SPI0_CS1		0x1C4
#define J721E_PIN_SPI0_CLK		0x1C8
#define J721E_PIN_SPI0_D0		0x1CC
#define J721E_PIN_SPI0_D1		0x1D0
#define J721E_PIN_SPI1_CS0		0x1D4
#define J721E_PIN_SPI1_CS1		0x1D8
#define J721E_PIN_SPI1_CLK		0x1DC
#define J721E_PIN_SPI1_D0		0x1E0
#define J721E_PIN_SPI1_D1		0x1E4
#define J721E_PIN_UART0_RXD		0x1E8
#define J721E_PIN_UART0_TXD		0x1EC
#define J721E_PIN_UART0_CTSN		0x1F0
#define J721E_PIN_UART0_RTSN		0x1F4
#define J721E_PIN_UART1_RXD		0x1F8
#define J721E_PIN_UART1_TXD		0x1FC
#define J721E_PIN_UART1_CTSN		0x200
#define J721E_PIN_UART1_RTSN		0x204
#define J721E_PIN_MCAN0_RX		0x208
#define J721E_PIN_MCAN0_TX		0x20C
#define J721E_PIN_MCAN1_RX		0x210
#define J721E_PIN_MCAN1_TX		0x214
#define J721E_PIN_I3C0_SCL		0x218
#define J721E_PIN_I3C0_SDA		0x21C
#define J721E_PIN_I2C0_SCL		0x220
#define J721E_PIN_I2C0_SDA		0x224
#define J721E_PIN_I2C1_SCL		0x228
#define J721E_PIN_I2C1_SDA		0x22C
#define J721E_PIN_ECAP0_IN_APWM_OUT	0x230
#define J721E_PIN_EXT_REFCLK1		0x234
#define J721E_PIN_TIMER_IO0		0x238
#define J721E_PIN_TIMER_IO1		0x23C
#define J721E_PIN_MMC1_DAT3		0x240
#define J721E_PIN_MMC1_DAT2		0x244
#define J721E_PIN_MMC1_DAT1		0x248
#define J721E_PIN_MMC1_DAT0		0x24C
#define J721E_PIN_MMC1_CLK		0x250
#define J721E_PIN_MMC1_CMD		0x254
#define J721E_PIN_MMC1_SDCD		0x258
#define J721E_PIN_MMC1_SDWP		0x25C
#define J721E_PIN_MMC2_DAT3		0x260
#define J721E_PIN_MMC2_DAT2		0x264
#define J721E_PIN_MMC2_DAT1		0x268
#define J721E_PIN_MMC2_DAT0		0x26C
#define J721E_PIN_MMC2_CLK		0x270
#define J721E_PIN_MMC2_CMD		0x274
#define J721E_PIN_RESETSTATZ		0x278
#define J721E_PIN_PORZ_OUT		0x27C
#define J721E_PIN_SOC_SAFETY_ERRORN	0x280
#define J721E_PIN_TDI			0x284
#define J721E_PIN_TDO			0x288
#define J721E_PIN_TMS			0x28C
#define J721E_PIN_USB0_DRVVBUS		0x290
#define J721E_PIN_MLB0_MLBSP		0x294
#define J721E_PIN_MLB0_MLBSN		0x298
#define J721E_PIN_MLB0_MLBDP		0x29C
#define J721E_PIN_MLB0_MLBDN		0x2A0
#define J721E_PIN_MLB0_MLBCP		0x2A4
#define J721E_PIN_MLB0_MLBCN		0x2A8
#define J721E_PIN_MMC1_CLKLB		0x2AC
#define J721E_PIN_MMC2_CLKLB		0x2B0

#define J721E_PIN_MCU_OSPI0_CLK		0x0
#define J721E_PIN_MCU_OSPI0_LBCLKO	0x4
#define J721E_PIN_MCU_OSPI0_DQS		0x8
#define J721E_PIN_MCU_OSPI0_D0		0xC
#define J721E_PIN_MCU_OSPI0_D1		0x10
#define J721E_PIN_MCU_OSPI0_D2		0x14
#define J721E_PIN_MCU_OSPI0_D3		0x18
#define J721E_PIN_MCU_OSPI0_D4		0x1C
#define J721E_PIN_MCU_OSPI0_D5		0x20
#define J721E_PIN_MCU_OSPI0_D6		0x24
#define J721E_PIN_MCU_OSPI0_D7		0x28
#define J721E_PIN_MCU_OSPI0_CSN0	0x2C
#define J721E_PIN_MCU_OSPI0_CSN1	0x30
#define J721E_PIN_MCU_OSPI1_CLK		0x34
#define J721E_PIN_MCU_OSPI1_LBCLKO	0x38
#define J721E_PIN_MCU_OSPI1_DQS		0x3C
#define J721E_PIN_MCU_OSPI1_D0		0x40
#define J721E_PIN_MCU_OSPI1_D1		0x44
#define J721E_PIN_MCU_OSPI1_D2		0x48
#define J721E_PIN_MCU_OSPI1_D3		0x4C
#define J721E_PIN_MCU_OSPI1_CSN0	0x50
#define J721E_PIN_MCU_OSPI1_CSN1	0x54
#define J721E_PIN_MCU_RGMII1_TX_CTL	0x58
#define J721E_PIN_MCU_RGMII1_RX_CTL	0x5C
#define J721E_PIN_MCU_RGMII1_TD3	0x60
#define J721E_PIN_MCU_RGMII1_TD2	0x64
#define J721E_PIN_MCU_RGMII1_TD1	0x68
#define J721E_PIN_MCU_RGMII1_TD0	0x6C
#define J721E_PIN_MCU_RGMII1_TXC	0x70
#define J721E_PIN_MCU_RGMII1_RXC	0x74
#define J721E_PIN_MCU_RGMII1_RD3	0x78
#define J721E_PIN_MCU_RGMII1_RD2	0x7C
#define J721E_PIN_MCU_RGMII1_RD1	0x80
#define J721E_PIN_MCU_RGMII1_RD0	0x84
#define J721E_PIN_MCU_MDIO0_MDIO	0x88
#define J721E_PIN_MCU_MDIO0_MDC		0x8C
#define J721E_PIN_MCU_SPI0_CLK		0x90
#define J721E_PIN_MCU_SPI0_D0		0x94
#define J721E_PIN_MCU_SPI0_D1		0x98
#define J721E_PIN_MCU_SPI0_CS0		0x9C
#define J721E_PIN_WKUP_UART0_RXD	0xA0
#define J721E_PIN_WKUP_UART0_TXD	0xA4
#define J721E_PIN_MCU_MCAN0_TX		0xA8
#define J721E_PIN_MCU_MCAN0_RX		0xAC
#define J721E_PIN_WKUP_GPIO0_0		0xB0
#define J721E_PIN_WKUP_GPIO0_1		0xB4
#define J721E_PIN_WKUP_GPIO0_2		0xB8
#define J721E_PIN_WKUP_GPIO0_3		0xBC
#define J721E_PIN_WKUP_GPIO0_4		0xC0
#define J721E_PIN_WKUP_GPIO0_5		0xC4
#define J721E_PIN_WKUP_GPIO0_6		0xC8
#define J721E_PIN_WKUP_GPIO0_7		0xCC
#define J721E_PIN_WKUP_GPIO0_8		0xD0
#define J721E_PIN_WKUP_GPIO0_9		0xD4
#define J721E_PIN_WKUP_GPIO0_10		0xD8
#define J721E_PIN_WKUP_GPIO0_11		0xDC
#define J721E_PIN_WKUP_GPIO0_12		0xE0
#define J721E_PIN_WKUP_GPIO0_13		0xE4
#define J721E_PIN_WKUP_GPIO0_14		0xE8
#define J721E_PIN_WKUP_GPIO0_15		0xEC
#define J721E_PIN_MCU_I3C0_SCL		0xF0
#define J721E_PIN_MCU_I3C0_SDA		0xF4
#define J721E_PIN_WKUP_I2C0_SCL		0xF8
#define J721E_PIN_WKUP_I2C0_SDA		0xFC
#define J721E_PIN_MCU_I2C0_SCL		0x100
#define J721E_PIN_MCU_I2C0_SDA		0x104
#define J721E_PIN_PMIC_POWER_EN0	0x108
#define J721E_PIN_PMIC_POWER_EN1	0x10C
#define J721E_PIN_MCU_SAFETY_ERRORN	0x110
#define J721E_PIN_MCU_RESETZ		0x114
#define J721E_PIN_MCU_RESETSTATZ	0x118
#define J721E_PIN_MCU_PORZ_OUT		0x11C
#define J721E_PIN_TCK			0x120
#define J721E_PIN_TRSTN			0x124
#define J721E_PIN_EMU0			0x128
#define J721E_PIN_EMU1			0x12C
#define J721E_PIN_MCU_ADC0_AIN0		0x130
#define J721E_PIN_MCU_ADC0_AIN1		0x134
#define J721E_PIN_MCU_ADC0_AIN2		0x138
#define J721E_PIN_MCU_ADC0_AIN3		0x13C
#define J721E_PIN_MCU_ADC0_AIN4		0x140
#define J721E_PIN_MCU_ADC0_AIN5		0x144
#define J721E_PIN_MCU_ADC0_AIN6		0x148
#define J721E_PIN_MCU_ADC0_AIN7		0x14C
#define J721E_PIN_MCU_ADC1_AIN0		0x150
#define J721E_PIN_MCU_ADC1_AIN1		0x154
#define J721E_PIN_MCU_ADC1_AIN2		0x158
#define J721E_PIN_MCU_ADC1_AIN3		0x15C
#define J721E_PIN_MCU_ADC1_AIN4		0x160
#define J721E_PIN_MCU_ADC1_AIN5		0x164
#define J721E_PIN_MCU_ADC1_AIN6		0x168
#define J721E_PIN_MCU_ADC1_AIN7		0x16C
#define J721E_PIN_RESET_REQZ		0x170
#define J721E_PIN_PORZ			0x174

#endif
