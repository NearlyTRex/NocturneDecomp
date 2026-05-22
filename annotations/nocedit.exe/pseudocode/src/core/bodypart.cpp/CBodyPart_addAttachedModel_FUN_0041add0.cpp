// Name: core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_0041add0
// Address: 0041add0
// Address Range: [[0041add0, 0041ae4b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_0041add0(CBodyPart *this_ptr,char *model_name,CVector3f *scale,CVector3f *position)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_0041add0(CBodyPart *this_ptr,char *model_name,CVector3f *scale,CVector3f *position)

{
  int iVar1;
  CVector3f *pCVar2;
  
  iVar1 = this_ptr->attached_model_count;
  if (iVar1 < 3) {
    pCVar2 = &this_ptr->attached_models[iVar1].scale;
    this_ptr->attached_model_count = iVar1 + 1;
    if (pCVar2 != scale) {
      ((CVector3f *)&pCVar2->x)->x = scale->x;
      pCVar2->y = scale->y;
      pCVar2->z = scale->z;
    }
    if (pCVar2 + 1 != position) {
      pCVar2[1].x = position->x;
      pCVar2[1].y = position->y;
      pCVar2[1].z = position->z;
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(pCVar2 + 2),model_name);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
              ((CKeyFramedModelInstance *)(pCVar2 + 2));
  }
  return;
}
