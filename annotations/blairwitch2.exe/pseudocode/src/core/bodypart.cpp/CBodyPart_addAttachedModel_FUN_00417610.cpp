// Name: core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_00417610
// Address: 00417610
// Address Range: [[00417610, 0041768b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_00417610(CBodyPart *this_ptr,char *model_name,CVector3f *position_offset,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_00417610(CBodyPart *this_ptr,char *model_name,CVector3f *position_offset,CVector3f *euler_angles)

{
  int iVar1;
  CVector3f *pCVar2;
  
  iVar1 = this_ptr->attached_model_count;
  if (iVar1 < 3) {
    pCVar2 = (CVector3f *)(this_ptr->attached_models + iVar1);
    this_ptr->attached_model_count = iVar1 + 1;
    if (pCVar2 != position_offset) {
      pCVar2->x = position_offset->x;
      pCVar2->y = position_offset->y;
      pCVar2->z = position_offset->z;
    }
    if (pCVar2 + 1 != euler_angles) {
      pCVar2[1].x = euler_angles->x;
      pCVar2[1].y = euler_angles->y;
      pCVar2[1].z = euler_angles->z;
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              ((CKeyFramedModelInstance *)(pCVar2 + 2),model_name);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
              ((CKeyFramedModelInstance *)(pCVar2 + 2));
  }
  return;
}
