// Name: core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0
// Address: 004e00b0
// Address Range: [[004e00b0, 004e0105]]
// Convention: unknown
// Signature: void core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

#include "nocturne.h"

void core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8)

{
  param_1 = param_1 + param_2 * 0x608;
  core_morph_cpp_CMorphModel_free_FUN_004df290(param_1);
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0
            (param_1,param_3,param_4,param_5,param_6,0x3c,param_7,param_8);
  return;
}
