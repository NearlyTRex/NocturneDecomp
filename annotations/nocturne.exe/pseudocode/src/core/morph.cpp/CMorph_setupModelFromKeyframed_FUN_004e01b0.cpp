// Name: core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0
// Address: 004e01b0
// Address Range: [[004e01b0, 004e01e9]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0(int param_1,int param_2,uint param_3,uint param_4)

{
  param_1 = param_1 + param_2 * 0x608;
  core_morph_cpp_CMorphModel_free_FUN_004df290(param_1);
  core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610(param_1,param_3,param_4);
  return;
}
