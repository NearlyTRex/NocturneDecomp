#pragma once

// Function prototypes for engine/colquant.cpp
// Generated from Ghidra function signatures

// Original: engine_colquant.c_quantizeColors_FUN_004406c0
// Address: 004406c0
char * __cdecl quantizeColors(SColorQuantWorkspace *workspace,char *color_data,int color_count,int num_palette_entries);

// Original: engine_colquant.c_partitionByRed_FUN_00440b40
// Address: 00440b40
void __cdecl partitionByRed(SColorQuantWorkspace *workspace,int box_index,int new_box_index);

// Original: engine_colquant.c_partitionByGreen_FUN_00440c80
// Address: 00440c80
void __cdecl partitionByGreen(SColorQuantWorkspace *workspace,int box_index,int new_box_index);

// Original: engine_colquant.c_partitionByBlue_FUN_00440dc0
// Address: 00440dc0
void __cdecl partitionByBlue(SColorQuantWorkspace *workspace,int box_index,int new_box_index);

// Original: engine_colquant.c_partitionByIntensity_FUN_00440f00
// Address: 00440f00
void __cdecl partitionByIntensity(SColorQuantWorkspace *workspace,int box_index,int new_box_index);

// Original: engine_colquant.c_computeWeightedColorDistance_FUN_00441040
// Address: 00441040
double __cdecl computeWeightedColorDistance(SColorQuantWorkspace *workspace,int box_index,int color_index);

// Original: engine_colquant.c_refinePartitionByDistance_FUN_00441110
// Address: 00441110
void __cdecl refinePartitionByDistance(SColorQuantWorkspace *workspace,int box_index,int new_box_index);

// Original: engine_colquant.c_computeBoxStatistics_FUN_00441260
// Address: 00441260
void __cdecl computeBoxStatistics(SColorQuantWorkspace *workspace,int box_index);

// Original: engine_colquant.c_doubleMax_FUN_00441790
// Address: 00441790
double __cdecl doubleMax(double a,double b);
