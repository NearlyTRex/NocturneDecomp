// Name: core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610
// Address: 004df610
// Address Range: [[004df610, 004df658]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00453080
                    (param_2,param_3,*(uint *)(param_2 + 0x110),
                     *(uint *)(param_2 + 0x114),0x48,param_2 + 0x124,
                     *(uint *)(param_2 + 0x118));
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0
            (param_1,*(uint *)(param_2 + 0x104),uVar1);
  return;
}
