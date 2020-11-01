/*
 * Copyright 2018-2019 NXP
 *
 * SPDX-License-Identifier: GPL-2.0+
 *
 * Generated code from MX8M_DDR_tool
 * Align with uboot version:
 * imx_v2018.03_4.14.78_1.0.0_ga ~ imx_v2018.04_4.19.35_1.0.0_ga
 */

#include <linux/kernel.h>
#include <asm/arch/ddr.h>

struct dram_cfg_param ddr_ddrc_cfg[] = {
	/** Initialize DDRC registers **/
	{ 0x3d400304, 0x1 },
	{ 0x3d400030, 0x1 },
	{ 0x3d400000, 0x81040010 },
	{ 0x3d400030, 0xaa },
	{ 0x3d400034, 0x221306 },
	{ 0x3d400050, 0x210070 },
	{ 0x3d400054, 0x10008 },
	{ 0x3d400060, 0x0 },
	{ 0x3d400064, 0x9200d2 },
	{ 0x3d4000c0, 0x0 },
	{ 0x3d4000c4, 0x1000 },
	{ 0x3d4000d0, 0xc0030126 },
	{ 0x3d4000d4, 0x770000 },
	{ 0x3d4000dc, 0x8340105 },
	{ 0x3d4000e0, 0x180200 },
	{ 0x3d4000e4, 0x110000 },
	{ 0x3d4000e8, 0x2000600 },
	{ 0x3d4000ec, 0x814 },
	{ 0x3d4000f0, 0x20 },
	{ 0x3d4000f4, 0xec7 },
	{ 0x3d400100, 0x11122914 },
	{ 0x3d400104, 0x4051c },
	{ 0x3d400108, 0x608050d },
	{ 0x3d40010c, 0x400c },
	{ 0x3d400110, 0x8030409 },
	{ 0x3d400114, 0x6060403 },
	{ 0x3d40011c, 0x606 },
	{ 0x3d400120, 0x5050d08 },
	{ 0x3d400124, 0x2040a },
	{ 0x3d40012c, 0x1409010e },
	{ 0x3d400130, 0x8 },
	{ 0x3d40013c, 0x0 },
	{ 0x3d400180, 0x1000040 },
	{ 0x3d400184, 0x493e },
	{ 0x3d400190, 0x38b8207 },
	{ 0x3d400194, 0x2020303 },
	{ 0x3d400198, 0x7f04011 },
	{ 0x3d40019c, 0xb0 },
	{ 0x3d4001a0, 0xe0400018 },
	{ 0x3d4001a4, 0x48005a },
	{ 0x3d4001a8, 0x80000000 },
	{ 0x3d4001b0, 0x1 },
	{ 0x3d4001b4, 0xb07 },
	{ 0x3d4001b8, 0x4 },
	{ 0x3d4001c0, 0x1 },
	{ 0x3d4001c4, 0x0 },
	{ 0x3d400200, 0x3f1f },
	{ 0x3d400204, 0x3f0909 },
	{ 0x3d400208, 0x700 },
	{ 0x3d40020c, 0x0 },
	{ 0x3d400210, 0x1f1f },
	{ 0x3d400214, 0x7070707 },
	{ 0x3d400218, 0x7070707 },
	{ 0x3d40021c, 0xf0f },
	{ 0x3d400220, 0x3f01 },
	{ 0x3d400240, 0x6000610 },
	{ 0x3d400244, 0x1323 },
	{ 0x3d402050, 0x210070 },
	{ 0x3d402064, 0x40005e },
	{ 0x3d4020dc, 0x40105 },
	{ 0x3d4020e0, 0x0 },
	{ 0x3d4020e8, 0x2000600 },
	{ 0x3d4020ec, 0x14 },
	{ 0x3d402100, 0xb081209 },
	{ 0x3d402104, 0x2020d },
	{ 0x3d402108, 0x5050309 },
	{ 0x3d40210c, 0x400c },
	{ 0x3d402110, 0x4030205 },
	{ 0x3d402114, 0x3030202 },
	{ 0x3d40211c, 0x303 },
	{ 0x3d402120, 0x3030d04 },
	{ 0x3d402124, 0x20208 },
	{ 0x3d40212c, 0x1005010e },
	{ 0x3d402130, 0x8 },
	{ 0x3d40213c, 0x0 },
	{ 0x3d402180, 0x1000040 },
	{ 0x3d402190, 0x3858204 },
	{ 0x3d402194, 0x2020303 },
	{ 0x3d4021b4, 0x504 },
	{ 0x3d4021b8, 0x4 },
	{ 0x3d402240, 0x6000604 },
	{ 0x3d4020f4, 0xec7 },
};

/* PHY Initialize Configuration */
struct dram_cfg_param ddr_ddrphy_cfg[] = {
	{ 0x1005f, 0x2fd },
	{ 0x1015f, 0x2fd },
	{ 0x1105f, 0x2fd },
	{ 0x1115f, 0x2fd },
	{ 0x1205f, 0x2fd },
	{ 0x1215f, 0x2fd },
	{ 0x1305f, 0x2fd },
	{ 0x1315f, 0x2fd },
	{ 0x11005f, 0x2fd },
	{ 0x11015f, 0x2fd },
	{ 0x11105f, 0x2fd },
	{ 0x11115f, 0x2fd },
	{ 0x11205f, 0x2fd },
	{ 0x11215f, 0x2fd },
	{ 0x11305f, 0x2fd },
	{ 0x11315f, 0x2fd },
	{ 0x55, 0x355 },
	{ 0x1055, 0x355 },
	{ 0x2055, 0x355 },
	{ 0x3055, 0x355 },
	{ 0x4055, 0x55 },
	{ 0x5055, 0x55 },
	{ 0x6055, 0x355 },
	{ 0x7055, 0x355 },
	{ 0x8055, 0x355 },
	{ 0x9055, 0x355 },
	{ 0x200c5, 0xa },
	{ 0x1200c5, 0x6 },
	{ 0x2002e, 0x2 },
	{ 0x12002e, 0x1 },
	{ 0x20024, 0x8 },
	{ 0x2003a, 0x2 },
	{ 0x120024, 0x8 },
	{ 0x2003a, 0x2 },
	{ 0x20056, 0x6 },
	{ 0x120056, 0xa },
	{ 0x1004d, 0x1a },
	{ 0x1014d, 0x1a },
	{ 0x1104d, 0x1a },
	{ 0x1114d, 0x1a },
	{ 0x1204d, 0x1a },
	{ 0x1214d, 0x1a },
	{ 0x1304d, 0x1a },
	{ 0x1314d, 0x1a },
	{ 0x11004d, 0x1a },
	{ 0x11014d, 0x1a },
	{ 0x11104d, 0x1a },
	{ 0x11114d, 0x1a },
	{ 0x11204d, 0x1a },
	{ 0x11214d, 0x1a },
	{ 0x11304d, 0x1a },
	{ 0x11314d, 0x1a },
	{ 0x10049, 0xe38 },
	{ 0x10149, 0xe38 },
	{ 0x11049, 0xe38 },
	{ 0x11149, 0xe38 },
	{ 0x12049, 0xe38 },
	{ 0x12149, 0xe38 },
	{ 0x13049, 0xe38 },
	{ 0x13149, 0xe38 },
	{ 0x110049, 0xe38 },
	{ 0x110149, 0xe38 },
	{ 0x111049, 0xe38 },
	{ 0x111149, 0xe38 },
	{ 0x112049, 0xe38 },
	{ 0x112149, 0xe38 },
	{ 0x113049, 0xe38 },
	{ 0x113149, 0xe38 },
	{ 0x43, 0x63 },
	{ 0x1043, 0x63 },
	{ 0x2043, 0x63 },
	{ 0x3043, 0x63 },
	{ 0x4043, 0x63 },
	{ 0x5043, 0x63 },
	{ 0x6043, 0x63 },
	{ 0x7043, 0x63 },
	{ 0x8043, 0x63 },
	{ 0x9043, 0x63 },
	{ 0x20018, 0x5 },
	{ 0x20075, 0x2 },
	{ 0x20050, 0x0 },
	{ 0x20008, 0x258 },
	{ 0x120008, 0x10a },
	{ 0x20088, 0x9 },
	{ 0x200b2, 0x268 },
	{ 0x10043, 0x5b1 },
	{ 0x10143, 0x5b1 },
	{ 0x11043, 0x5b1 },
	{ 0x11143, 0x5b1 },
	{ 0x12043, 0x5b1 },
	{ 0x12143, 0x5b1 },
	{ 0x13043, 0x5b1 },
	{ 0x13143, 0x5b1 },
	{ 0x1200b2, 0x268 },
	{ 0x110043, 0x5b1 },
	{ 0x110143, 0x5b1 },
	{ 0x111043, 0x5b1 },
	{ 0x111143, 0x5b1 },
	{ 0x112043, 0x5b1 },
	{ 0x112143, 0x5b1 },
	{ 0x113043, 0x5b1 },
	{ 0x113143, 0x5b1 },
	{ 0x200fa, 0x1 },
	{ 0x1200fa, 0x1 },
	{ 0x20019, 0x5 },
	{ 0x120019, 0x5 },
	{ 0x200f0, 0x5555 },
	{ 0x200f1, 0x5555 },
	{ 0x200f2, 0x5555 },
	{ 0x200f3, 0x5555 },
	{ 0x200f4, 0x5555 },
	{ 0x200f5, 0x5555 },
	{ 0x200f6, 0x5555 },
	{ 0x200f7, 0xf000 },
	{ 0x20025, 0x0 },
	{ 0x2002d, 0x0 },
	{ 0x12002d, 0x0 },
	{ 0x200c7, 0x21 },
	{ 0x1200c7, 0x21 },
	{ 0x200ca, 0x24 },
	{ 0x1200ca, 0x24 },
};

/* ddr phy trained csr */
struct dram_cfg_param ddr_ddrphy_trained_csr[] = {
	{ 0x200b2, 0x0 },
	{ 0x1200b2, 0x0 },
	{ 0x2200b2, 0x0 },
	{ 0x200cb, 0x0 },
	{ 0x10043, 0x0 },
	{ 0x110043, 0x0 },
	{ 0x210043, 0x0 },
	{ 0x10143, 0x0 },
	{ 0x110143, 0x0 },
	{ 0x210143, 0x0 },
	{ 0x11043, 0x0 },
	{ 0x111043, 0x0 },
	{ 0x211043, 0x0 },
	{ 0x11143, 0x0 },
	{ 0x111143, 0x0 },
	{ 0x211143, 0x0 },
	{ 0x12043, 0x0 },
	{ 0x112043, 0x0 },
	{ 0x212043, 0x0 },
	{ 0x12143, 0x0 },
	{ 0x112143, 0x0 },
	{ 0x212143, 0x0 },
	{ 0x13043, 0x0 },
	{ 0x113043, 0x0 },
	{ 0x213043, 0x0 },
	{ 0x13143, 0x0 },
	{ 0x113143, 0x0 },
	{ 0x213143, 0x0 },
	{ 0x80, 0x0 },
	{ 0x100080, 0x0 },
	{ 0x200080, 0x0 },
	{ 0x1080, 0x0 },
	{ 0x101080, 0x0 },
	{ 0x201080, 0x0 },
	{ 0x2080, 0x0 },
	{ 0x102080, 0x0 },
	{ 0x202080, 0x0 },
	{ 0x3080, 0x0 },
	{ 0x103080, 0x0 },
	{ 0x203080, 0x0 },
	{ 0x4080, 0x0 },
	{ 0x104080, 0x0 },
	{ 0x204080, 0x0 },
	{ 0x5080, 0x0 },
	{ 0x105080, 0x0 },
	{ 0x205080, 0x0 },
	{ 0x6080, 0x0 },
	{ 0x106080, 0x0 },
	{ 0x206080, 0x0 },
	{ 0x7080, 0x0 },
	{ 0x107080, 0x0 },
	{ 0x207080, 0x0 },
	{ 0x8080, 0x0 },
	{ 0x108080, 0x0 },
	{ 0x208080, 0x0 },
	{ 0x9080, 0x0 },
	{ 0x109080, 0x0 },
	{ 0x209080, 0x0 },
	{ 0x10080, 0x0 },
	{ 0x110080, 0x0 },
	{ 0x210080, 0x0 },
	{ 0x10180, 0x0 },
	{ 0x110180, 0x0 },
	{ 0x210180, 0x0 },
	{ 0x11080, 0x0 },
	{ 0x111080, 0x0 },
	{ 0x211080, 0x0 },
	{ 0x11180, 0x0 },
	{ 0x111180, 0x0 },
	{ 0x211180, 0x0 },
	{ 0x12080, 0x0 },
	{ 0x112080, 0x0 },
	{ 0x212080, 0x0 },
	{ 0x12180, 0x0 },
	{ 0x112180, 0x0 },
	{ 0x212180, 0x0 },
	{ 0x13080, 0x0 },
	{ 0x113080, 0x0 },
	{ 0x213080, 0x0 },
	{ 0x13180, 0x0 },
	{ 0x113180, 0x0 },
	{ 0x213180, 0x0 },
	{ 0x10081, 0x0 },
	{ 0x110081, 0x0 },
	{ 0x210081, 0x0 },
	{ 0x10181, 0x0 },
	{ 0x110181, 0x0 },
	{ 0x210181, 0x0 },
	{ 0x11081, 0x0 },
	{ 0x111081, 0x0 },
	{ 0x211081, 0x0 },
	{ 0x11181, 0x0 },
	{ 0x111181, 0x0 },
	{ 0x211181, 0x0 },
	{ 0x12081, 0x0 },
	{ 0x112081, 0x0 },
	{ 0x212081, 0x0 },
	{ 0x12181, 0x0 },
	{ 0x112181, 0x0 },
	{ 0x212181, 0x0 },
	{ 0x13081, 0x0 },
	{ 0x113081, 0x0 },
	{ 0x213081, 0x0 },
	{ 0x13181, 0x0 },
	{ 0x113181, 0x0 },
	{ 0x213181, 0x0 },
	{ 0x100d0, 0x0 },
	{ 0x1100d0, 0x0 },
	{ 0x2100d0, 0x0 },
	{ 0x101d0, 0x0 },
	{ 0x1101d0, 0x0 },
	{ 0x2101d0, 0x0 },
	{ 0x110d0, 0x0 },
	{ 0x1110d0, 0x0 },
	{ 0x2110d0, 0x0 },
	{ 0x111d0, 0x0 },
	{ 0x1111d0, 0x0 },
	{ 0x2111d0, 0x0 },
	{ 0x120d0, 0x0 },
	{ 0x1120d0, 0x0 },
	{ 0x2120d0, 0x0 },
	{ 0x121d0, 0x0 },
	{ 0x1121d0, 0x0 },
	{ 0x2121d0, 0x0 },
	{ 0x130d0, 0x0 },
	{ 0x1130d0, 0x0 },
	{ 0x2130d0, 0x0 },
	{ 0x131d0, 0x0 },
	{ 0x1131d0, 0x0 },
	{ 0x2131d0, 0x0 },
	{ 0x100d1, 0x0 },
	{ 0x1100d1, 0x0 },
	{ 0x2100d1, 0x0 },
	{ 0x101d1, 0x0 },
	{ 0x1101d1, 0x0 },
	{ 0x2101d1, 0x0 },
	{ 0x110d1, 0x0 },
	{ 0x1110d1, 0x0 },
	{ 0x2110d1, 0x0 },
	{ 0x111d1, 0x0 },
	{ 0x1111d1, 0x0 },
	{ 0x2111d1, 0x0 },
	{ 0x120d1, 0x0 },
	{ 0x1120d1, 0x0 },
	{ 0x2120d1, 0x0 },
	{ 0x121d1, 0x0 },
	{ 0x1121d1, 0x0 },
	{ 0x2121d1, 0x0 },
	{ 0x130d1, 0x0 },
	{ 0x1130d1, 0x0 },
	{ 0x2130d1, 0x0 },
	{ 0x131d1, 0x0 },
	{ 0x1131d1, 0x0 },
	{ 0x2131d1, 0x0 },
	{ 0x10068, 0x0 },
	{ 0x10168, 0x0 },
	{ 0x10268, 0x0 },
	{ 0x10368, 0x0 },
	{ 0x10468, 0x0 },
	{ 0x10568, 0x0 },
	{ 0x10668, 0x0 },
	{ 0x10768, 0x0 },
	{ 0x10868, 0x0 },
	{ 0x11068, 0x0 },
	{ 0x11168, 0x0 },
	{ 0x11268, 0x0 },
	{ 0x11368, 0x0 },
	{ 0x11468, 0x0 },
	{ 0x11568, 0x0 },
	{ 0x11668, 0x0 },
	{ 0x11768, 0x0 },
	{ 0x11868, 0x0 },
	{ 0x12068, 0x0 },
	{ 0x12168, 0x0 },
	{ 0x12268, 0x0 },
	{ 0x12368, 0x0 },
	{ 0x12468, 0x0 },
	{ 0x12568, 0x0 },
	{ 0x12668, 0x0 },
	{ 0x12768, 0x0 },
	{ 0x12868, 0x0 },
	{ 0x13068, 0x0 },
	{ 0x13168, 0x0 },
	{ 0x13268, 0x0 },
	{ 0x13368, 0x0 },
	{ 0x13468, 0x0 },
	{ 0x13568, 0x0 },
	{ 0x13668, 0x0 },
	{ 0x13768, 0x0 },
	{ 0x13868, 0x0 },
	{ 0x10069, 0x0 },
	{ 0x10169, 0x0 },
	{ 0x10269, 0x0 },
	{ 0x10369, 0x0 },
	{ 0x10469, 0x0 },
	{ 0x10569, 0x0 },
	{ 0x10669, 0x0 },
	{ 0x10769, 0x0 },
	{ 0x10869, 0x0 },
	{ 0x11069, 0x0 },
	{ 0x11169, 0x0 },
	{ 0x11269, 0x0 },
	{ 0x11369, 0x0 },
	{ 0x11469, 0x0 },
	{ 0x11569, 0x0 },
	{ 0x11669, 0x0 },
	{ 0x11769, 0x0 },
	{ 0x11869, 0x0 },
	{ 0x12069, 0x0 },
	{ 0x12169, 0x0 },
	{ 0x12269, 0x0 },
	{ 0x12369, 0x0 },
	{ 0x12469, 0x0 },
	{ 0x12569, 0x0 },
	{ 0x12669, 0x0 },
	{ 0x12769, 0x0 },
	{ 0x12869, 0x0 },
	{ 0x13069, 0x0 },
	{ 0x13169, 0x0 },
	{ 0x13269, 0x0 },
	{ 0x13369, 0x0 },
	{ 0x13469, 0x0 },
	{ 0x13569, 0x0 },
	{ 0x13669, 0x0 },
	{ 0x13769, 0x0 },
	{ 0x13869, 0x0 },
	{ 0x1008c, 0x0 },
	{ 0x11008c, 0x0 },
	{ 0x21008c, 0x0 },
	{ 0x1018c, 0x0 },
	{ 0x11018c, 0x0 },
	{ 0x21018c, 0x0 },
	{ 0x1108c, 0x0 },
	{ 0x11108c, 0x0 },
	{ 0x21108c, 0x0 },
	{ 0x1118c, 0x0 },
	{ 0x11118c, 0x0 },
	{ 0x21118c, 0x0 },
	{ 0x1208c, 0x0 },
	{ 0x11208c, 0x0 },
	{ 0x21208c, 0x0 },
	{ 0x1218c, 0x0 },
	{ 0x11218c, 0x0 },
	{ 0x21218c, 0x0 },
	{ 0x1308c, 0x0 },
	{ 0x11308c, 0x0 },
	{ 0x21308c, 0x0 },
	{ 0x1318c, 0x0 },
	{ 0x11318c, 0x0 },
	{ 0x21318c, 0x0 },
	{ 0x1008d, 0x0 },
	{ 0x11008d, 0x0 },
	{ 0x21008d, 0x0 },
	{ 0x1018d, 0x0 },
	{ 0x11018d, 0x0 },
	{ 0x21018d, 0x0 },
	{ 0x1108d, 0x0 },
	{ 0x11108d, 0x0 },
	{ 0x21108d, 0x0 },
	{ 0x1118d, 0x0 },
	{ 0x11118d, 0x0 },
	{ 0x21118d, 0x0 },
	{ 0x1208d, 0x0 },
	{ 0x11208d, 0x0 },
	{ 0x21208d, 0x0 },
	{ 0x1218d, 0x0 },
	{ 0x11218d, 0x0 },
	{ 0x21218d, 0x0 },
	{ 0x1308d, 0x0 },
	{ 0x11308d, 0x0 },
	{ 0x21308d, 0x0 },
	{ 0x1318d, 0x0 },
	{ 0x11318d, 0x0 },
	{ 0x21318d, 0x0 },
	{ 0x100c0, 0x0 },
	{ 0x1100c0, 0x0 },
	{ 0x2100c0, 0x0 },
	{ 0x101c0, 0x0 },
	{ 0x1101c0, 0x0 },
	{ 0x2101c0, 0x0 },
	{ 0x102c0, 0x0 },
	{ 0x1102c0, 0x0 },
	{ 0x2102c0, 0x0 },
	{ 0x103c0, 0x0 },
	{ 0x1103c0, 0x0 },
	{ 0x2103c0, 0x0 },
	{ 0x104c0, 0x0 },
	{ 0x1104c0, 0x0 },
	{ 0x2104c0, 0x0 },
	{ 0x105c0, 0x0 },
	{ 0x1105c0, 0x0 },
	{ 0x2105c0, 0x0 },
	{ 0x106c0, 0x0 },
	{ 0x1106c0, 0x0 },
	{ 0x2106c0, 0x0 },
	{ 0x107c0, 0x0 },
	{ 0x1107c0, 0x0 },
	{ 0x2107c0, 0x0 },
	{ 0x108c0, 0x0 },
	{ 0x1108c0, 0x0 },
	{ 0x2108c0, 0x0 },
	{ 0x110c0, 0x0 },
	{ 0x1110c0, 0x0 },
	{ 0x2110c0, 0x0 },
	{ 0x111c0, 0x0 },
	{ 0x1111c0, 0x0 },
	{ 0x2111c0, 0x0 },
	{ 0x112c0, 0x0 },
	{ 0x1112c0, 0x0 },
	{ 0x2112c0, 0x0 },
	{ 0x113c0, 0x0 },
	{ 0x1113c0, 0x0 },
	{ 0x2113c0, 0x0 },
	{ 0x114c0, 0x0 },
	{ 0x1114c0, 0x0 },
	{ 0x2114c0, 0x0 },
	{ 0x115c0, 0x0 },
	{ 0x1115c0, 0x0 },
	{ 0x2115c0, 0x0 },
	{ 0x116c0, 0x0 },
	{ 0x1116c0, 0x0 },
	{ 0x2116c0, 0x0 },
	{ 0x117c0, 0x0 },
	{ 0x1117c0, 0x0 },
	{ 0x2117c0, 0x0 },
	{ 0x118c0, 0x0 },
	{ 0x1118c0, 0x0 },
	{ 0x2118c0, 0x0 },
	{ 0x120c0, 0x0 },
	{ 0x1120c0, 0x0 },
	{ 0x2120c0, 0x0 },
	{ 0x121c0, 0x0 },
	{ 0x1121c0, 0x0 },
	{ 0x2121c0, 0x0 },
	{ 0x122c0, 0x0 },
	{ 0x1122c0, 0x0 },
	{ 0x2122c0, 0x0 },
	{ 0x123c0, 0x0 },
	{ 0x1123c0, 0x0 },
	{ 0x2123c0, 0x0 },
	{ 0x124c0, 0x0 },
	{ 0x1124c0, 0x0 },
	{ 0x2124c0, 0x0 },
	{ 0x125c0, 0x0 },
	{ 0x1125c0, 0x0 },
	{ 0x2125c0, 0x0 },
	{ 0x126c0, 0x0 },
	{ 0x1126c0, 0x0 },
	{ 0x2126c0, 0x0 },
	{ 0x127c0, 0x0 },
	{ 0x1127c0, 0x0 },
	{ 0x2127c0, 0x0 },
	{ 0x128c0, 0x0 },
	{ 0x1128c0, 0x0 },
	{ 0x2128c0, 0x0 },
	{ 0x130c0, 0x0 },
	{ 0x1130c0, 0x0 },
	{ 0x2130c0, 0x0 },
	{ 0x131c0, 0x0 },
	{ 0x1131c0, 0x0 },
	{ 0x2131c0, 0x0 },
	{ 0x132c0, 0x0 },
	{ 0x1132c0, 0x0 },
	{ 0x2132c0, 0x0 },
	{ 0x133c0, 0x0 },
	{ 0x1133c0, 0x0 },
	{ 0x2133c0, 0x0 },
	{ 0x134c0, 0x0 },
	{ 0x1134c0, 0x0 },
	{ 0x2134c0, 0x0 },
	{ 0x135c0, 0x0 },
	{ 0x1135c0, 0x0 },
	{ 0x2135c0, 0x0 },
	{ 0x136c0, 0x0 },
	{ 0x1136c0, 0x0 },
	{ 0x2136c0, 0x0 },
	{ 0x137c0, 0x0 },
	{ 0x1137c0, 0x0 },
	{ 0x2137c0, 0x0 },
	{ 0x138c0, 0x0 },
	{ 0x1138c0, 0x0 },
	{ 0x2138c0, 0x0 },
	{ 0x100c1, 0x0 },
	{ 0x1100c1, 0x0 },
	{ 0x2100c1, 0x0 },
	{ 0x101c1, 0x0 },
	{ 0x1101c1, 0x0 },
	{ 0x2101c1, 0x0 },
	{ 0x102c1, 0x0 },
	{ 0x1102c1, 0x0 },
	{ 0x2102c1, 0x0 },
	{ 0x103c1, 0x0 },
	{ 0x1103c1, 0x0 },
	{ 0x2103c1, 0x0 },
	{ 0x104c1, 0x0 },
	{ 0x1104c1, 0x0 },
	{ 0x2104c1, 0x0 },
	{ 0x105c1, 0x0 },
	{ 0x1105c1, 0x0 },
	{ 0x2105c1, 0x0 },
	{ 0x106c1, 0x0 },
	{ 0x1106c1, 0x0 },
	{ 0x2106c1, 0x0 },
	{ 0x107c1, 0x0 },
	{ 0x1107c1, 0x0 },
	{ 0x2107c1, 0x0 },
	{ 0x108c1, 0x0 },
	{ 0x1108c1, 0x0 },
	{ 0x2108c1, 0x0 },
	{ 0x110c1, 0x0 },
	{ 0x1110c1, 0x0 },
	{ 0x2110c1, 0x0 },
	{ 0x111c1, 0x0 },
	{ 0x1111c1, 0x0 },
	{ 0x2111c1, 0x0 },
	{ 0x112c1, 0x0 },
	{ 0x1112c1, 0x0 },
	{ 0x2112c1, 0x0 },
	{ 0x113c1, 0x0 },
	{ 0x1113c1, 0x0 },
	{ 0x2113c1, 0x0 },
	{ 0x114c1, 0x0 },
	{ 0x1114c1, 0x0 },
	{ 0x2114c1, 0x0 },
	{ 0x115c1, 0x0 },
	{ 0x1115c1, 0x0 },
	{ 0x2115c1, 0x0 },
	{ 0x116c1, 0x0 },
	{ 0x1116c1, 0x0 },
	{ 0x2116c1, 0x0 },
	{ 0x117c1, 0x0 },
	{ 0x1117c1, 0x0 },
	{ 0x2117c1, 0x0 },
	{ 0x118c1, 0x0 },
	{ 0x1118c1, 0x0 },
	{ 0x2118c1, 0x0 },
	{ 0x120c1, 0x0 },
	{ 0x1120c1, 0x0 },
	{ 0x2120c1, 0x0 },
	{ 0x121c1, 0x0 },
	{ 0x1121c1, 0x0 },
	{ 0x2121c1, 0x0 },
	{ 0x122c1, 0x0 },
	{ 0x1122c1, 0x0 },
	{ 0x2122c1, 0x0 },
	{ 0x123c1, 0x0 },
	{ 0x1123c1, 0x0 },
	{ 0x2123c1, 0x0 },
	{ 0x124c1, 0x0 },
	{ 0x1124c1, 0x0 },
	{ 0x2124c1, 0x0 },
	{ 0x125c1, 0x0 },
	{ 0x1125c1, 0x0 },
	{ 0x2125c1, 0x0 },
	{ 0x126c1, 0x0 },
	{ 0x1126c1, 0x0 },
	{ 0x2126c1, 0x0 },
	{ 0x127c1, 0x0 },
	{ 0x1127c1, 0x0 },
	{ 0x2127c1, 0x0 },
	{ 0x128c1, 0x0 },
	{ 0x1128c1, 0x0 },
	{ 0x2128c1, 0x0 },
	{ 0x130c1, 0x0 },
	{ 0x1130c1, 0x0 },
	{ 0x2130c1, 0x0 },
	{ 0x131c1, 0x0 },
	{ 0x1131c1, 0x0 },
	{ 0x2131c1, 0x0 },
	{ 0x132c1, 0x0 },
	{ 0x1132c1, 0x0 },
	{ 0x2132c1, 0x0 },
	{ 0x133c1, 0x0 },
	{ 0x1133c1, 0x0 },
	{ 0x2133c1, 0x0 },
	{ 0x134c1, 0x0 },
	{ 0x1134c1, 0x0 },
	{ 0x2134c1, 0x0 },
	{ 0x135c1, 0x0 },
	{ 0x1135c1, 0x0 },
	{ 0x2135c1, 0x0 },
	{ 0x136c1, 0x0 },
	{ 0x1136c1, 0x0 },
	{ 0x2136c1, 0x0 },
	{ 0x137c1, 0x0 },
	{ 0x1137c1, 0x0 },
	{ 0x2137c1, 0x0 },
	{ 0x138c1, 0x0 },
	{ 0x1138c1, 0x0 },
	{ 0x2138c1, 0x0 },
	{ 0x10020, 0x0 },
	{ 0x110020, 0x0 },
	{ 0x210020, 0x0 },
	{ 0x11020, 0x0 },
	{ 0x111020, 0x0 },
	{ 0x211020, 0x0 },
	{ 0x12020, 0x0 },
	{ 0x112020, 0x0 },
	{ 0x212020, 0x0 },
	{ 0x13020, 0x0 },
	{ 0x113020, 0x0 },
	{ 0x213020, 0x0 },
	{ 0x20072, 0x0 },
	{ 0x20073, 0x0 },
	{ 0x20074, 0x0 },
	{ 0x100aa, 0x0 },
	{ 0x110aa, 0x0 },
	{ 0x120aa, 0x0 },
	{ 0x130aa, 0x0 },
	{ 0x20010, 0x0 },
	{ 0x120010, 0x0 },
	{ 0x220010, 0x0 },
	{ 0x20011, 0x0 },
	{ 0x120011, 0x0 },
	{ 0x220011, 0x0 },
	{ 0x100ae, 0x0 },
	{ 0x1100ae, 0x0 },
	{ 0x2100ae, 0x0 },
	{ 0x100af, 0x0 },
	{ 0x1100af, 0x0 },
	{ 0x2100af, 0x0 },
	{ 0x110ae, 0x0 },
	{ 0x1110ae, 0x0 },
	{ 0x2110ae, 0x0 },
	{ 0x110af, 0x0 },
	{ 0x1110af, 0x0 },
	{ 0x2110af, 0x0 },
	{ 0x120ae, 0x0 },
	{ 0x1120ae, 0x0 },
	{ 0x2120ae, 0x0 },
	{ 0x120af, 0x0 },
	{ 0x1120af, 0x0 },
	{ 0x2120af, 0x0 },
	{ 0x130ae, 0x0 },
	{ 0x1130ae, 0x0 },
	{ 0x2130ae, 0x0 },
	{ 0x130af, 0x0 },
	{ 0x1130af, 0x0 },
	{ 0x2130af, 0x0 },
	{ 0x20020, 0x0 },
	{ 0x120020, 0x0 },
	{ 0x220020, 0x0 },
	{ 0x100a0, 0x0 },
	{ 0x100a1, 0x0 },
	{ 0x100a2, 0x0 },
	{ 0x100a3, 0x0 },
	{ 0x100a4, 0x0 },
	{ 0x100a5, 0x0 },
	{ 0x100a6, 0x0 },
	{ 0x100a7, 0x0 },
	{ 0x110a0, 0x0 },
	{ 0x110a1, 0x0 },
	{ 0x110a2, 0x0 },
	{ 0x110a3, 0x0 },
	{ 0x110a4, 0x0 },
	{ 0x110a5, 0x0 },
	{ 0x110a6, 0x0 },
	{ 0x110a7, 0x0 },
	{ 0x120a0, 0x0 },
	{ 0x120a1, 0x0 },
	{ 0x120a2, 0x0 },
	{ 0x120a3, 0x0 },
	{ 0x120a4, 0x0 },
	{ 0x120a5, 0x0 },
	{ 0x120a6, 0x0 },
	{ 0x120a7, 0x0 },
	{ 0x130a0, 0x0 },
	{ 0x130a1, 0x0 },
	{ 0x130a2, 0x0 },
	{ 0x130a3, 0x0 },
	{ 0x130a4, 0x0 },
	{ 0x130a5, 0x0 },
	{ 0x130a6, 0x0 },
	{ 0x130a7, 0x0 },
	{ 0x2007c, 0x0 },
	{ 0x12007c, 0x0 },
	{ 0x22007c, 0x0 },
	{ 0x2007d, 0x0 },
	{ 0x12007d, 0x0 },
	{ 0x22007d, 0x0 },
	{ 0x400fd, 0x0 },
	{ 0x400c0, 0x0 },
	{ 0x90201, 0x0 },
	{ 0x190201, 0x0 },
	{ 0x290201, 0x0 },
	{ 0x90202, 0x0 },
	{ 0x190202, 0x0 },
	{ 0x290202, 0x0 },
	{ 0x90203, 0x0 },
	{ 0x190203, 0x0 },
	{ 0x290203, 0x0 },
	{ 0x90204, 0x0 },
	{ 0x190204, 0x0 },
	{ 0x290204, 0x0 },
	{ 0x90205, 0x0 },
	{ 0x190205, 0x0 },
	{ 0x290205, 0x0 },
	{ 0x90206, 0x0 },
	{ 0x190206, 0x0 },
	{ 0x290206, 0x0 },
	{ 0x90207, 0x0 },
	{ 0x190207, 0x0 },
	{ 0x290207, 0x0 },
	{ 0x90208, 0x0 },
	{ 0x190208, 0x0 },
	{ 0x290208, 0x0 },
	{ 0x10062, 0x0 },
	{ 0x10162, 0x0 },
	{ 0x10262, 0x0 },
	{ 0x10362, 0x0 },
	{ 0x10462, 0x0 },
	{ 0x10562, 0x0 },
	{ 0x10662, 0x0 },
	{ 0x10762, 0x0 },
	{ 0x10862, 0x0 },
	{ 0x11062, 0x0 },
	{ 0x11162, 0x0 },
	{ 0x11262, 0x0 },
	{ 0x11362, 0x0 },
	{ 0x11462, 0x0 },
	{ 0x11562, 0x0 },
	{ 0x11662, 0x0 },
	{ 0x11762, 0x0 },
	{ 0x11862, 0x0 },
	{ 0x12062, 0x0 },
	{ 0x12162, 0x0 },
	{ 0x12262, 0x0 },
	{ 0x12362, 0x0 },
	{ 0x12462, 0x0 },
	{ 0x12562, 0x0 },
	{ 0x12662, 0x0 },
	{ 0x12762, 0x0 },
	{ 0x12862, 0x0 },
	{ 0x13062, 0x0 },
	{ 0x13162, 0x0 },
	{ 0x13262, 0x0 },
	{ 0x13362, 0x0 },
	{ 0x13462, 0x0 },
	{ 0x13562, 0x0 },
	{ 0x13662, 0x0 },
	{ 0x13762, 0x0 },
	{ 0x13862, 0x0 },
	{ 0x20077, 0x0 },
	{ 0x10001, 0x0 },
	{ 0x11001, 0x0 },
	{ 0x12001, 0x0 },
	{ 0x13001, 0x0 },
	{ 0x10040, 0x0 },
	{ 0x10140, 0x0 },
	{ 0x10240, 0x0 },
	{ 0x10340, 0x0 },
	{ 0x10440, 0x0 },
	{ 0x10540, 0x0 },
	{ 0x10640, 0x0 },
	{ 0x10740, 0x0 },
	{ 0x10840, 0x0 },
	{ 0x10030, 0x0 },
	{ 0x10130, 0x0 },
	{ 0x10230, 0x0 },
	{ 0x10330, 0x0 },
	{ 0x10430, 0x0 },
	{ 0x10530, 0x0 },
	{ 0x10630, 0x0 },
	{ 0x10730, 0x0 },
	{ 0x10830, 0x0 },
	{ 0x11040, 0x0 },
	{ 0x11140, 0x0 },
	{ 0x11240, 0x0 },
	{ 0x11340, 0x0 },
	{ 0x11440, 0x0 },
	{ 0x11540, 0x0 },
	{ 0x11640, 0x0 },
	{ 0x11740, 0x0 },
	{ 0x11840, 0x0 },
	{ 0x11030, 0x0 },
	{ 0x11130, 0x0 },
	{ 0x11230, 0x0 },
	{ 0x11330, 0x0 },
	{ 0x11430, 0x0 },
	{ 0x11530, 0x0 },
	{ 0x11630, 0x0 },
	{ 0x11730, 0x0 },
	{ 0x11830, 0x0 },
	{ 0x12040, 0x0 },
	{ 0x12140, 0x0 },
	{ 0x12240, 0x0 },
	{ 0x12340, 0x0 },
	{ 0x12440, 0x0 },
	{ 0x12540, 0x0 },
	{ 0x12640, 0x0 },
	{ 0x12740, 0x0 },
	{ 0x12840, 0x0 },
	{ 0x12030, 0x0 },
	{ 0x12130, 0x0 },
	{ 0x12230, 0x0 },
	{ 0x12330, 0x0 },
	{ 0x12430, 0x0 },
	{ 0x12530, 0x0 },
	{ 0x12630, 0x0 },
	{ 0x12730, 0x0 },
	{ 0x12830, 0x0 },
	{ 0x13040, 0x0 },
	{ 0x13140, 0x0 },
	{ 0x13240, 0x0 },
	{ 0x13340, 0x0 },
	{ 0x13440, 0x0 },
	{ 0x13540, 0x0 },
	{ 0x13640, 0x0 },
	{ 0x13740, 0x0 },
	{ 0x13840, 0x0 },
	{ 0x13030, 0x0 },
	{ 0x13130, 0x0 },
	{ 0x13230, 0x0 },
	{ 0x13330, 0x0 },
	{ 0x13430, 0x0 },
	{ 0x13530, 0x0 },
	{ 0x13630, 0x0 },
	{ 0x13730, 0x0 },
	{ 0x13830, 0x0 },
};
/* P0 message block paremeter for training firmware */
struct dram_cfg_param ddr_fsp0_cfg[] = {
	{ 0xd0000, 0x0 },
	{ 0x54003, 0x960 },
	{ 0x54004, 0x2 },
	{ 0x54005, 0x2830 },
	{ 0x54006, 0x25e },
	{ 0x54007, 0x2000 },
	{ 0x54008, 0x101 },
	{ 0x5400b, 0x31f },
	{ 0x5400c, 0xc8 },
	{ 0x54012, 0x1 },
	{ 0x5402f, 0x834 },
	{ 0x54030, 0x105 },
	{ 0x54031, 0x18 },
	{ 0x54032, 0x200 },
	{ 0x54033, 0x200 },
	{ 0x54034, 0x600 },
	{ 0x54035, 0x814 },
	{ 0x54036, 0x101 },
	{ 0x5403f, 0x1323 },
	{ 0x541fc, 0x100 },
	{ 0xd0000, 0x1 },
};


/* P1 message block paremeter for training firmware */
struct dram_cfg_param ddr_fsp1_cfg[] = {
	{ 0xd0000, 0x0 },
	{ 0x54002, 0x1 },
	{ 0x54003, 0x42a },
	{ 0x54004, 0x2 },
	{ 0x54005, 0x2830 },
	{ 0x54006, 0x25e },
	{ 0x54007, 0x2000 },
	{ 0x54008, 0x101 },
	{ 0x5400b, 0x21f },
	{ 0x5400c, 0xc8 },
	{ 0x54012, 0x1 },
	{ 0x5402f, 0x4 },
	{ 0x54030, 0x105 },
	{ 0x54033, 0x200 },
	{ 0x54034, 0x600 },
	{ 0x54035, 0x14 },
	{ 0x54036, 0x101 },
	{ 0x5403f, 0x1323 },
	{ 0x541fc, 0x100 },
	{ 0xd0000, 0x1 },
};


/* P0 2D message block paremeter for training firmware */
struct dram_cfg_param ddr_fsp0_2d_cfg[] = {
	{ 0xd0000, 0x0 },
	{ 0x54003, 0x960 },
	{ 0x54004, 0x2 },
	{ 0x54005, 0x2830 },
	{ 0x54006, 0x25e },
	{ 0x54007, 0x2000 },
	{ 0x54008, 0x101 },
	{ 0x5400b, 0x61 },
	{ 0x5400c, 0xc8 },
	{ 0x5400d, 0x100 },
	{ 0x5400e, 0x1f7f },
	{ 0x54012, 0x1 },
	{ 0x5402f, 0x834 },
	{ 0x54030, 0x105 },
	{ 0x54031, 0x18 },
	{ 0x54032, 0x200 },
	{ 0x54033, 0x200 },
	{ 0x54034, 0x600 },
	{ 0x54035, 0x814 },
	{ 0x54036, 0x101 },
	{ 0x5403f, 0x1323 },
	{ 0x541fc, 0x100 },
	{ 0xd0000, 0x1 },
};

/* DRAM PHY init engine image */
struct dram_cfg_param ddr_phy_pie[] = {
	{ 0xd0000, 0x0 },
	{ 0x90000, 0x10 },
	{ 0x90001, 0x400 },
	{ 0x90002, 0x10e },
	{ 0x90003, 0x0 },
	{ 0x90004, 0x0 },
	{ 0x90005, 0x8 },
	{ 0x90029, 0xb },
	{ 0x9002a, 0x480 },
	{ 0x9002b, 0x109 },
	{ 0x9002c, 0x8 },
	{ 0x9002d, 0x448 },
	{ 0x9002e, 0x139 },
	{ 0x9002f, 0x8 },
	{ 0x90030, 0x478 },
	{ 0x90031, 0x109 },
	{ 0x90032, 0x2 },
	{ 0x90033, 0x10 },
	{ 0x90034, 0x139 },
	{ 0x90035, 0xf },
	{ 0x90036, 0x7c0 },
	{ 0x90037, 0x139 },
	{ 0x90038, 0x44 },
	{ 0x90039, 0x630 },
	{ 0x9003a, 0x159 },
	{ 0x9003b, 0x14f },
	{ 0x9003c, 0x630 },
	{ 0x9003d, 0x159 },
	{ 0x9003e, 0x47 },
	{ 0x9003f, 0x630 },
	{ 0x90040, 0x149 },
	{ 0x90041, 0x4f },
	{ 0x90042, 0x630 },
	{ 0x90043, 0x179 },
	{ 0x90044, 0x8 },
	{ 0x90045, 0xe0 },
	{ 0x90046, 0x109 },
	{ 0x90047, 0x0 },
	{ 0x90048, 0x7c8 },
	{ 0x90049, 0x109 },
	{ 0x9004a, 0x0 },
	{ 0x9004b, 0x1 },
	{ 0x9004c, 0x8 },
	{ 0x9004d, 0x0 },
	{ 0x9004e, 0x45a },
	{ 0x9004f, 0x9 },
	{ 0x90050, 0x0 },
	{ 0x90051, 0x448 },
	{ 0x90052, 0x109 },
	{ 0x90053, 0x40 },
	{ 0x90054, 0x630 },
	{ 0x90055, 0x179 },
	{ 0x90056, 0x1 },
	{ 0x90057, 0x618 },
	{ 0x90058, 0x109 },
	{ 0x90059, 0x40c0 },
	{ 0x9005a, 0x630 },
	{ 0x9005b, 0x149 },
	{ 0x9005c, 0x8 },
	{ 0x9005d, 0x4 },
	{ 0x9005e, 0x48 },
	{ 0x9005f, 0x4040 },
	{ 0x90060, 0x630 },
	{ 0x90061, 0x149 },
	{ 0x90062, 0x0 },
	{ 0x90063, 0x4 },
	{ 0x90064, 0x48 },
	{ 0x90065, 0x40 },
	{ 0x90066, 0x630 },
	{ 0x90067, 0x149 },
	{ 0x90068, 0x10 },
	{ 0x90069, 0x4 },
	{ 0x9006a, 0x18 },
	{ 0x9006b, 0x0 },
	{ 0x9006c, 0x4 },
	{ 0x9006d, 0x78 },
	{ 0x9006e, 0x549 },
	{ 0x9006f, 0x630 },
	{ 0x90070, 0x159 },
	{ 0x90071, 0xd49 },
	{ 0x90072, 0x630 },
	{ 0x90073, 0x159 },
	{ 0x90074, 0x94a },
	{ 0x90075, 0x630 },
	{ 0x90076, 0x159 },
	{ 0x90077, 0x441 },
	{ 0x90078, 0x630 },
	{ 0x90079, 0x149 },
	{ 0x9007a, 0x42 },
	{ 0x9007b, 0x630 },
	{ 0x9007c, 0x149 },
	{ 0x9007d, 0x1 },
	{ 0x9007e, 0x630 },
	{ 0x9007f, 0x149 },
	{ 0x90080, 0x0 },
	{ 0x90081, 0xe0 },
	{ 0x90082, 0x109 },
	{ 0x90083, 0xa },
	{ 0x90084, 0x10 },
	{ 0x90085, 0x109 },
	{ 0x90086, 0x9 },
	{ 0x90087, 0x3c0 },
	{ 0x90088, 0x149 },
	{ 0x90089, 0x9 },
	{ 0x9008a, 0x3c0 },
	{ 0x9008b, 0x159 },
	{ 0x9008c, 0x18 },
	{ 0x9008d, 0x10 },
	{ 0x9008e, 0x109 },
	{ 0x9008f, 0x0 },
	{ 0x90090, 0x3c0 },
	{ 0x90091, 0x109 },
	{ 0x90092, 0x18 },
	{ 0x90093, 0x4 },
	{ 0x90094, 0x48 },
	{ 0x90095, 0x18 },
	{ 0x90096, 0x4 },
	{ 0x90097, 0x58 },
	{ 0x90098, 0xa },
	{ 0x90099, 0x10 },
	{ 0x9009a, 0x109 },
	{ 0x9009b, 0x2 },
	{ 0x9009c, 0x10 },
	{ 0x9009d, 0x109 },
	{ 0x9009e, 0x7 },
	{ 0x9009f, 0x7c0 },
	{ 0x900a0, 0x109 },
	{ 0x900a1, 0x10 },
	{ 0x900a2, 0x10 },
	{ 0x900a3, 0x109 },
	{ 0x900a4, 0x0 },
	{ 0x900a5, 0x8140 },
	{ 0x900a6, 0x10c },
	{ 0x900a7, 0x10 },
	{ 0x900a8, 0x8138 },
	{ 0x900a9, 0x10c },
	{ 0x900aa, 0x8 },
	{ 0x900ab, 0x7c8 },
	{ 0x900ac, 0x101 },
	{ 0x900ad, 0x8 },
	{ 0x900ae, 0x0 },
	{ 0x900af, 0x8 },
	{ 0x900b0, 0x8 },
	{ 0x900b1, 0x448 },
	{ 0x900b2, 0x109 },
	{ 0x900b3, 0xf },
	{ 0x900b4, 0x7c0 },
	{ 0x900b5, 0x109 },
	{ 0x900b6, 0x47 },
	{ 0x900b7, 0x630 },
	{ 0x900b8, 0x109 },
	{ 0x900b9, 0x8 },
	{ 0x900ba, 0x618 },
	{ 0x900bb, 0x109 },
	{ 0x900bc, 0x8 },
	{ 0x900bd, 0xe0 },
	{ 0x900be, 0x109 },
	{ 0x900bf, 0x0 },
	{ 0x900c0, 0x7c8 },
	{ 0x900c1, 0x109 },
	{ 0x900c2, 0x8 },
	{ 0x900c3, 0x8140 },
	{ 0x900c4, 0x10c },
	{ 0x900c5, 0x0 },
	{ 0x900c6, 0x1 },
	{ 0x900c7, 0x8 },
	{ 0x900c8, 0x8 },
	{ 0x900c9, 0x4 },
	{ 0x900ca, 0x8 },
	{ 0x900cb, 0x8 },
	{ 0x900cc, 0x7c8 },
	{ 0x900cd, 0x101 },
	{ 0x90006, 0x0 },
	{ 0x90007, 0x0 },
	{ 0x90008, 0x8 },
	{ 0x90009, 0x0 },
	{ 0x9000a, 0x0 },
	{ 0x9000b, 0x0 },
	{ 0xd00e7, 0x400 },
	{ 0x90017, 0x0 },
	{ 0x90026, 0x2c },
	{ 0x2000b, 0x4b },
	{ 0x2000c, 0x96 },
	{ 0x2000d, 0x5dc },
	{ 0x2000e, 0x2c },
	{ 0x12000b, 0x21 },
	{ 0x12000c, 0x42 },
	{ 0x12000d, 0x29a },
	{ 0x12000e, 0x21 },
	{ 0x9000c, 0x0 },
	{ 0x9000d, 0x173 },
	{ 0x9000e, 0x60 },
	{ 0x9000f, 0x6110 },
	{ 0x90010, 0x2152 },
	{ 0x90011, 0xdfbd },
	{ 0x90012, 0xffff },
	{ 0x90013, 0x6152 },
	{ 0xc0080, 0x0 },
	{ 0xd0000, 0x1 }
};

struct dram_fsp_msg ddr_dram_fsp_msg[] = {
	{
		/* P0 2400mts 1D */
		.drate = 2400,
		.fw_type = FW_1D_IMAGE,
		.fsp_cfg = ddr_fsp0_cfg,
		.fsp_cfg_num = ARRAY_SIZE(ddr_fsp0_cfg),
	},
	{
		/* P1 1066mts 1D */
		.drate = 1066,
		.fw_type = FW_1D_IMAGE,
		.fsp_cfg = ddr_fsp1_cfg,
		.fsp_cfg_num = ARRAY_SIZE(ddr_fsp1_cfg),
	},
	{
		/* P0 2400mts 2D */
		.drate = 2400,
		.fw_type = FW_2D_IMAGE,
		.fsp_cfg = ddr_fsp0_2d_cfg,
		.fsp_cfg_num = ARRAY_SIZE(ddr_fsp0_2d_cfg),
	},
};

/* ddr timing config params */
struct dram_timing_info dram_timing = {
	.ddrc_cfg = ddr_ddrc_cfg,
	.ddrc_cfg_num = ARRAY_SIZE(ddr_ddrc_cfg),
	.ddrphy_cfg = ddr_ddrphy_cfg,
	.ddrphy_cfg_num = ARRAY_SIZE(ddr_ddrphy_cfg),
	.fsp_msg = ddr_dram_fsp_msg,
	.fsp_msg_num = ARRAY_SIZE(ddr_dram_fsp_msg),
	.ddrphy_trained_csr = ddr_ddrphy_trained_csr,
	.ddrphy_trained_csr_num = ARRAY_SIZE(ddr_ddrphy_trained_csr),
	.ddrphy_pie = ddr_phy_pie,
	.ddrphy_pie_num = ARRAY_SIZE(ddr_phy_pie),
	.fsp_table = { 2400, 1066, },
};
