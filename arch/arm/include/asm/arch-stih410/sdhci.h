/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2017, STMicroelectronics - All Rights Reserved
 * Author(s): Patrice Chotard, <patrice.chotard@st.com> for STMicroelectronics.
 */

#ifndef __STI_SDHCI_H__
#define __STI_SDHCI_H__

#define FLASHSS_MMC_CORE_CONFIG_1			0x400
#define FLASHSS_MMC_CORECFG_TIMEOUT_CLK_UNIT_MHZ	BIT(24)
#define FLASHSS_MMC_CORECFG_TIMEOUT_CLK_FREQ_MIN	BIT(12)

#define STI_FLASHSS_MMC_CORE_CONFIG_1			\
	(FLASHSS_MMC_CORECFG_TIMEOUT_CLK_UNIT_MHZ	| \
	 FLASHSS_MMC_CORECFG_TIMEOUT_CLK_FREQ_MIN)

#define FLASHSS_MMC_CORE_CONFIG_2			0x404
#define FLASHSS_MMC_CORECFG_HIGH_SPEED			BIT(28)
#define FLASHSS_MMC_CORECFG_8BIT_EMMC			BIT(20)
#define MAX_BLK_LENGTH_1024				BIT(16)
#define BASE_CLK_FREQ_200				0xc8

#define STI_FLASHSS_MMC_CORE_CONFIG2	\
	(FLASHSS_MMC_CORECFG_HIGH_SPEED	| \
	 FLASHSS_MMC_CORECFG_8BIT_EMMC	| \
	 MAX_BLK_LENGTH_1024		| \
	 BASE_CLK_FREQ_200 << 0)

#define STI_FLASHSS_SDCARD_CORE_CONFIG2			\
	(FLASHSS_MMC_CORECFG_HIGH_SPEED			| \
	 MAX_BLK_LENGTH_1024				| \
	 BASE_CLK_FREQ_200)

#define FLASHSS_MMC_CORE_CONFIG_3			0x408
#define FLASHSS_MMC_CORECFG_SLOT_TYPE_EMMC		BIT(28)
#define FLASHSS_MMC_CORECFG_ASYNCH_INTR_SUPPORT		BIT(20)
#define FLASHSS_MMC_CORECFG_3P3_VOLT			BIT(8)
#define FLASHSS_MMC_CORECFG_SUSP_RES_SUPPORT		BIT(4)
#define FLASHSS_MMC_CORECFG_SDMA			BIT(0)

#define STI_FLASHSS_MMC_CORE_CONFIG3			\
	 (FLASHSS_MMC_CORECFG_SLOT_TYPE_EMMC		| \
	 FLASHSS_MMC_CORECFG_ASYNCH_INTR_SUPPORT	| \
	 FLASHSS_MMC_CORECFG_3P3_VOLT			| \
	 FLASHSS_MMC_CORECFG_SUSP_RES_SUPPORT		| \
	 FLASHSS_MMC_CORECFG_SDMA)

#define STI_FLASHSS_SDCARD_CORE_CONFIG3			\
	 (FLASHSS_MMC_CORECFG_ASYNCH_INTR_SUPPORT	| \
	 FLASHSS_MMC_CORECFG_3P3_VOLT			| \
	 FLASHSS_MMC_CORECFG_SUSP_RES_SUPPORT		| \
	 FLASHSS_MMC_CORECFG_SDMA)

#define FLASHSS_MMC_CORE_CONFIG_4			0x40c
#define FLASHSS_MMC_CORECFG_D_DRIVER_SUPPORT		BIT(20)
#define FLASHSS_MMC_CORECFG_C_DRIVER_SUPPORT		BIT(16)
#define FLASHSS_MMC_CORECFG_A_DRIVER_SUPPORT		BIT(12)

#define STI_FLASHSS_MMC_CORE_CONFIG4			\
	(FLASHSS_MMC_CORECFG_D_DRIVER_SUPPORT		| \
	 FLASHSS_MMC_CORECFG_C_DRIVER_SUPPORT		| \
	 FLASHSS_MMC_CORECFG_A_DRIVER_SUPPORT)

#define ST_MMC_CCONFIG_REG_5		0x210
#define SYSCONF_MMC1_ENABLE_BIT		3

#endif	/* _STI_SDHCI_H_ */
