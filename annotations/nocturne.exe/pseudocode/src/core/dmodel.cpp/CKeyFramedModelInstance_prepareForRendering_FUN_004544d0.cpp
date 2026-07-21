// Name: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
// Address: 004544d0
// Address Range: [[004544d0, 00454504]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(undefined4 param_1,float param_2)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(uint param_1,float param_2)

{
  float10 fVar1;
  uint uVar2;
  
  uVar2 = 0x4544e5;
  fVar1 = (float10)round((float10)param_2);
  uVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                    (param_1,(int)ROUND(fVar1),param_1,uVar2);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040(uVar2);
  return;
}
