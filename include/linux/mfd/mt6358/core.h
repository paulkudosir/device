/*
 * Copyright (C) 2018 MediaTek Inc.

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef __MFD_MT6358_CORE_H__
#define __MFD_MT6358_CORE_H__

struct mt6358_chip {
	struct device *dev;
	struct regmap *regmap;
	int irq;
	struct irq_domain *irq_domain;
	struct mutex irqlock;
	unsigned int num_sps;
	unsigned int num_pmic_irqs;
	unsigned short top_int_status_reg;
};

enum mt6358_irq_numbers {
	MT6358_IRQ_VPROC11_OC = 0,
	MT6358_IRQ_VPROC12_OC,
	MT6358_IRQ_VCORE_OC,
	MT6358_IRQ_VGPU_OC,
	MT6358_IRQ_VMODEM_OC,
	MT6358_IRQ_VDRAM1_OC,
	MT6358_IRQ_VS1_OC,
	MT6358_IRQ_VS2_OC,
	MT6358_IRQ_VPA_OC,
	MT6358_IRQ_VCORE_PREOC,
	MT6358_IRQ_VFE28_OC = 16,
	MT6358_IRQ_VXO22_OC,
	MT6358_IRQ_VRF18_OC,
	MT6358_IRQ_VRF12_OC,
	MT6358_IRQ_VEFUSE_OC,
	MT6358_IRQ_VCN33_OC,
	MT6358_IRQ_VCN28_OC,
	MT6358_IRQ_VCN18_OC,
	MT6358_IRQ_VCAMA1_OC,
	MT6358_IRQ_VCAMA2_OC,
	MT6358_IRQ_VCAMD_OC,
	MT6358_IRQ_VCAMIO_OC,
	MT6358_IRQ_VLDO28_OC,
	MT6358_IRQ_VA12_OC,
	MT6358_IRQ_VAUX18_OC,
	MT6358_IRQ_VAUD28_OC,
	MT6358_IRQ_VIO28_OC,
	MT6358_IRQ_VIO18_OC,
	MT6358_IRQ_VSRAM_PROC11_OC,
	MT6358_IRQ_VSRAM_PROC12_OC,
	MT6358_IRQ_VSRAM_OTHERS_OC,
	MT6358_IRQ_VSRAM_GPU_OC,
	MT6358_IRQ_VDRAM2_OC,
	MT6358_IRQ_VMC_OC,
	MT6358_IRQ_VMCH_OC,
	MT6358_IRQ_VEMC_OC,
	MT6358_IRQ_VSIM1_OC,
	MT6358_IRQ_VSIM2_OC,
	MT6358_IRQ_VIBR_OC,
	MT6358_IRQ_VUSB_OC,
	MT6358_IRQ_VBIF28_OC,
	MT6358_IRQ_PWRKEY = 48,
	MT6358_IRQ_HOMEKEY,
	MT6358_IRQ_PWRKEY_R,
	MT6358_IRQ_HOMEKEY_R,
	MT6358_IRQ_NI_LBAT_INT,
	MT6358_IRQ_CHRDET,
	MT6358_IRQ_CHRDET_EDGE,
	MT6358_IRQ_VCDT_HV_DET,
	MT6358_IRQ_RTC = 64,
	MT6358_IRQ_FG_BAT0_H = 80,
	MT6358_IRQ_FG_BAT0_L,
	MT6358_IRQ_FG_CUR_H,
	MT6358_IRQ_FG_CUR_L,
	MT6358_IRQ_FG_ZCV,
	MT6358_IRQ_FG_BAT1_H,
	MT6358_IRQ_FG_BAT1_L,
	MT6358_IRQ_FG_N_CHARGE_L,
	MT6358_IRQ_FG_IAVG_H,
	MT6358_IRQ_FG_IAVG_L,
	MT6358_IRQ_FG_TIME_H,
	MT6358_IRQ_FG_DISCHARGE,
	MT6358_IRQ_FG_CHARGE,
	MT6358_IRQ_BATON_LV = 96,
	MT6358_IRQ_BATON_HT,
	MT6358_IRQ_BATON_BAT_IN,
	MT6358_IRQ_BATON_BAT_OUT,
	MT6358_IRQ_BIF,
	MT6358_IRQ_BAT_H = 112,
	MT6358_IRQ_BAT_L,
	MT6358_IRQ_BAT2_H,
	MT6358_IRQ_BAT2_L,
	MT6358_IRQ_BAT_TEMP_H,
	MT6358_IRQ_BAT_TEMP_L,
	MT6358_IRQ_AUXADC_IMP,
	MT6358_IRQ_NAG_C_DLTV,
	MT6358_IRQ_AUDIO = 128,
	MT6358_IRQ_ACCDET = 133,
	MT6358_IRQ_ACCDET_EINT0,
	MT6358_IRQ_ACCDET_EINT1,
	MT6358_IRQ_SPI_CMD_ALERT = 144,
	MT6358_IRQ_NR,
};

extern unsigned int mt6358_irq_get_virq(struct device *dev, unsigned int hwirq);
extern const char *mt6358_irq_get_name(struct device *dev, unsigned int hwirq);

#endif /* __MFD_MT6358_CORE_H__ */