// Name: core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170
// Address: 004e0170
// Address Range: [[004e0170, 004e01a4]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(int param_1,int param_2,uint param_3)

{
  param_1 = param_1 + param_2 * 0x608;
  core_morph_cpp_CMorphModel_free_FUN_004df290(param_1);
  core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_004df5b0(param_1,param_3);
  return;
}
