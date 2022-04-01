/*
 * Copyright (c) 2016-2018, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/kernel.h>
#include <asm/mach/map.h>
#include <asm/mach/arch.h>
#include "board-dt.h"
#include "platsmp.h"
#include "clock.h"

static const char *msm8610_dt_match[] __initconst = {
	"qcom,msm8610",
	"qcom,msm8212",
	NULL
};

static void __init msm8610_init(void)
{
	board_dt_populate(NULL);
	//msm_clock_init(&msm8610_clock_init_data);
}

DT_MACHINE_START(MSM8610_DT,
	"Qualcomm Technologies, Inc. MSM 8610 (Flattened Device Tree)")
	.init_machine	= msm8610_init,
	.dt_compat	= msm8610_dt_match,
	.smp	= &arm_smp_ops,
MACHINE_END
