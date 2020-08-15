/*
 * (C) Copyright 2017 Rockchip Electronics Co., Ltd
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef __BOOT_ROCKCHIP_H_
#define __BOOT_ROCKCHIP_H_

/* This is a copy from Android boot loader */
enum _boot_mode {
	BOOT_MODE_NORMAL = 0,
	BOOT_MODE_RECOVERY,
	BOOT_MODE_BOOTLOADER,
};


#define PART_MISC			"misc"
#define PART_KERNEL			"kernel"
#define PART_BOOT			"boot"
#define PART_RECOVERY			"recovery"

#define RK_BLK_SIZE 512

int rockchip_get_boot_mode(void);
int boot_rockchip_image(struct blk_desc *dev, disk_partition_t *boot_part);
struct blk_desc *rockchip_get_bootdev(void);

#endif
