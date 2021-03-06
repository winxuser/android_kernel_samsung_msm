#ifndef TARGTSNCJNLYA_H
#define TARGTSNCJNLYA_H
/* ========================================================================
FILE: TARGTSNCJNLYA

Copyright (c) 2001-2009 by QUALCOMM Incorporated.  All Rights Reserved.        
=========================================================================== */

#define T_MSM76XXT

#define FEATURE_KARURA 
#define FEATURE_UIM_USES_NEW_SLEEP_API 
#define T_MSM7x27 
#define T_CLKREGIM_SINGLE_MODE_WCDMA 
#define FEATURE_BOOT_USB_PHY_INIT 
#define T_MSM7625 
#define T_MSM7x27 
#define T_CLKREGIM 7625
#define ADSP_RTOS_DMOV_ENABLE 
#define FEATURE_HS_USB_INTEGRATED_PHY 
#ifdef IMAGE_APPS_PROC
   #define T_CLKREGIM_BRINGUP 
#endif
#define FEATURE_SROC 
#define FEATURE_BUSMON_AXI_BUS_HANG_FIXED 
#define FEATURE_AUDIO_MAX_CLIENT_SUPPORT 
#define USES_KARURATURBO 
#define T_SURF 
#define T_7200_BRINGUP 
#define ADC_CHANNELS_H "adc_channels_surf7500.h"
#ifdef IMAGE_APPS_PROC
   #define FEATURE_BABYLON 
#endif
#define ERR_DECOUPLE_ENC 
#define FEATURE_I2C_CHIP_ENABLE 
#define FEATURE_PMIC_HAS_SSBI 
#define FEATURE_RDEVMAP_DS_DEFAULT_TO_USB 
#define FEATURE_RDEVMAP_DIAG_DEFAULT_TO_USB 
#define T_PMIC_PM7500 
#define LEDS HWIO_ADDR(HAPPY_LED)
#define FEATURE_KEYPAD_MULTI_KEY 
#define FEATURE_SLEEP_CLK_STABILITY 
#define FEATURE_PMIC 
#define FEATURE_PMIC_TCXO_CONTROL 
#define FEATURE_PMIC_MANAGED_LDO 
#ifdef IMAGE_APPS_PROC
   #define FEATURE_PMIC_NO_RTC_ALARM 
#endif
#define FEATURE_PMIC_LCDKBD_LED_DRIVER 
#define FEATURE_PMIC_LOW_POWER_MODE 
#define FEATURE_IBATT 
#define SBI_HAS_GPIO_BUS 
#define FEATURE_TCXOMGR 
#define FEATURE_SD_SUPPORTS_BASE_INFO 
#define FEATURE_KEYPAD_OWNS_KEYPRESS_ISR 
#define DISP_DEVICE_16BPP 
#define FEATURE_SURF_5200 
#define FEATURE_TGL14_TIMING 
#define T_MSM6250 
#define T_MSM6275 
#define T_MSM6280 
#define T_MSM7200 
#define T_MSM7600 
#ifdef IMAGE_MODEM_PROC
   #define FEATURE_6275_COMPILE 
#endif
#define FEATURE_6280_COMPILE 
#define BIO_MB_H "bio_mb7600.h"
#define FEATURE_MULTI_RF_CHAIN_API 
#ifdef IMAGE_MODEM_PROC
   #define FEATURE_TOOLSDIAG_INIT 
#endif
#ifdef IMAGE_MODEM_PROC
   #define FEATURE_NVDIAG_INIT 
#endif
#define FEATURE_TCXOMGR_SET_POLARITY 
#define T_MSM6700 
#define T_MSM6800 
#define T_MSM6800B 
#define T_MSM7500 
#define T_MSM7500B 
#define ADIE_I_H "adie_sbi.h"
#define BOOTHW_MSM_H "boothw_target.h"
#define CLKRGM_H "clkregim.h"
#define CLKRGMI_H "clkregim.h"
#define CLKRGM_MSM_H "clkregim.h"
#define CPLD_MSM_H "cpld_t3.h"
#define DMOV_MSM_H "dmov_7500.h"
#define GPIO_H "tlmm_gpio.h"
#define HS_H "hs_mb7500.h"
#define TSIF_DRV_MSM_H "tsif_drvi_7500.h"
#define PMEM_MSM_H "pmem_7500.h"
#define SBI_LIB_H "sbi_lib_api.h"
#define SBI_MSM_H "sbi.h"
#define TLMM_MSM_H "tlmm.h"
#define FEATURE_SATURN 
#define USES_NVRUIM_NOT_FROM_NV 
#define FEATURE_DUAL_RFR 
#define FEATURE_PBM_USE_EFS_PB 
#define FEATURE_DISPLAY_CONTENT_MAP 
#define FEATURE_PA_ACCESS_PROBE_CONFIG 
#define T_DLOAD 1
#define T_MSM2 1
#define T_MSM2P 1
#define T_MSM23 1
#define T_MSM3 1
#define T_MSM31 1
#define T_MSM33 1
#define T_MSM5000 1
#define T_MSM5105 1
#define T_MSM_5100 1
#define T_MSM6050 
#define T_MSM_6050 
#define T_MSM6100 
#define T_MSM_6100 
#define T_MSM6100B 
#define T_MSM6500 
#define MSM7200_BUILD 
#define ADIE_HAS_ADC 
#define T_UI_S510X 
#define FEATURE_MSMHWIO 
#define IRAM_SIZE 0x800
#define FEATURE_MSM6500_IQACC_INIT 
#define SCL_RAM_PART_MEM_INFO_ADDR 0
#define CUST_MOB_MODEL_ASSIGNED 253
#define SCL_SMI_MEM_TOTAL_SIZE 0x0000000
#define SCL_APPS_BOOT_BASE 0
#define SCL_APPS_BOOT_SIZE 0x0100000
#define SCL_APPS_CODE_BASE 0x00200000
#define SCL_APPS_TOTAL_SIZE 0x9600000
#define SCL_MM_HEAP2_BASE 0x08D00000
#define SCL_MM_HEAP2_SIZE 0x4000000
#define SCL_EBI1_MEM_TOTAL_SIZE 0x10000000
#define SCL_MODEM_TOTAL_SIZE 0x2700000
#define SCL_MODEM_CODE_BASE ((SCL_EBI1_MEM_TOTAL_SIZE) - (SCL_MODEM_TOTAL_SIZE))
#define SCL_OEMSBL_TOTAL_SIZE 0x001C0000
#define SCL_OEMSBL_CODE_BASE ((SCL_MODEM_CODE_BASE) - (SCL_OEMSBL_TOTAL_SIZE))
#define SCL_QCSBL_TOTAL_SIZE 0x0040000
#define SCL_QCSBL_CODE_BASE ((SCL_OEMSBL_CODE_BASE) - (SCL_QCSBL_TOTAL_SIZE))
#define SCL_MODEM_HEAP1_SIZE 0x0100000
#define SCL_MODEM_HEAP1_BASE ((SCL_MODEM_CODE_BASE) - (SCL_MODEM_HEAP1_SIZE))
#define SCL_SHARED_RAM_BASE 0x00100000
#define SCL_SHARED_RAM_SIZE 0x0100000
#define SCL_MM_HEAP2_GENERIC_SIZE 0x0010000
#define SCL_MM_HEAP1_SIZE 0x0000000
#ifdef IMAGE_APPS_PROC
   #define SCL_CS_KHEAP_SIZE 0x1800000
#endif
#define SCL_APPS_RAM_BASE 0
#define SCL_APPS_RAM_SIZE 0
#define SCL_APPS_CODE_SIZE SCL_APPS_TOTAL_SIZE
#define SCL_APPS_AMSS_TOTAL_SIZE SCL_APPS_TOTAL_SIZE
#define SCL_EBI1_SIZE SCL_EBI1_MEM_TOTAL_SIZE
#define SCL_APPS_MODEM_RAM_SIZE 614400
#define SCL_APPS_APPS_RAM_SIZE 204800
#define FEATURE_PMEM 
#define FEATURE_PMEM_7K_IMEM 
#define FEATURE_PMEM_7K_COMBINE_HEAP1_HEAP2 
#define BOOT_MODE_NAND 
#define SHADOW_MODE 
#define TCM_RAM_BASE 0x80000000
#define TCM_RAM_SIZE 0x0001000
#define IMEM_RAM_BASE 0x80000000
#define IMEM_BANK_SIZE (64 * 1024)
#define IMEM_NUM_BANKS 4
#define IMEM_RAM_SIZE (IMEM_NUM_BANKS * IMEM_BANK_SIZE)
#define FEATURE_PMEM_REMOTE 
#define FEATURE_EFS_PROBE_NAND 
#define FLASH_USES_DM 
#define FEATURE_FLASH_ALIGN_DEST_BUFFER 
#define FEATURE_FLASH_MPU 
#define EFS_PAGE_SIZE 2048
#define NAND_PAGE_SIZE 2048
#define NAND_BLK_SIZE 64
#define NAND_DEVICE_SIZE 1024
#define T_CLKREGIM_SINGLE_MODE_WCDMA 
#define FEATURE_BOOT_USB_PHY_INIT 
#define T_MSM7625 
#define T_MSM7x27 
#define T_CLKREGIM 7625
#define ADSP_RTOS_DMOV_ENABLE 
#define FEATURE_HS_USB_INTEGRATED_PHY 
#ifdef IMAGE_APPS_PROC
   #define T_CLKREGIM_BRINGUP 
#endif
#define FEATURE_SROC 
#define FEATURE_BUSMON_AXI_BUS_HANG_FIXED 
#define FEATURE_AUDIO_MAX_CLIENT_SUPPORT 
#define T_RF_GZRF6500 
#define FEATURE_BUSMON_AXI_BUS_HANG_FIXED 
#define FEATURE_BUILD_CDMA_CELL_PCS 
#define FEATURE_RF_ZIF 
#define FEATURE_BUILD_CDMA_CELL_PCS 
#define FEATURE_ENHANCED_BAND_CLASS 
#define FEATURE_BUILD_CDMA_CELL_PCS 



#ifdef FEATURE_RF_ZIF
   #undef FEATURE_RF_ZIF
#endif


#endif /* TARGTSNCJNLYA_H */
