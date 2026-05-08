// Name: core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_0041add0
// Address: 0041add0
// MANUAL RECONSTRUCTION
// Address Range: [[0041add0, 0041ae4b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_0041add0(CBodyPart *this_ptr,char *model_name,CVector3i *scale,CVector3i *position)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_0041add0(CBodyPart *this_ptr,char *model_name,CVector3i *scale,CVector3i *position)

{
  int iVar1;
  CVector3i *pCVar2;
  
  iVar1 = this_ptr->attached_model_count;
  if (iVar1 < 3) {
    pCVar2 = &this_ptr->attached_models[iVar1].scale;
    this_ptr->attached_model_count = iVar1 + 1;
    if (pCVar2 != scale) {
      *pCVar2 = *scale;
    }
    if (pCVar2 + 1 != position) {
      pCVar2[1] = *position;
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(pCVar2 + 2),model_name);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
              ((CKeyFramedModelInstance *)(pCVar2 + 2));
  }
  return;
}
