// Name: core_bodypart.cpp_FUN_00417610
// Address: 00417610
// Address Range: [[00417610, 0041768b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_FUN_00417610(CBodyPart *this_ptr,char *model_name,CVector3f *position_offset,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_FUN_00417610(CBodyPart *this_ptr,char *model_name,CVector3f *position_offset,CVector3f *euler_angles)

{
  int iVar1;
  CVector3f *pCVar2;
  
  iVar1 = *(int *)&this_ptr->field_0x3e8;
  if (iVar1 < 3) {
    pCVar2 = (CVector3f *)(&this_ptr->field_0x3ec + iVar1 * 0x194);
    *(int *)&this_ptr->field_0x3e8 = iVar1 + 1;
    if (pCVar2 != position_offset) {
      *(uint *)pCVar2 = *(uint *)position_offset;
      *(uint *)&pCVar2->field_0x4 = *(uint *)&position_offset->field_0x4;
      *(uint *)&pCVar2->field_0x8 = *(uint *)&position_offset->field_0x8;
    }
    if (pCVar2 + 1 != euler_angles) {
      *(uint *)(pCVar2 + 1) = *(uint *)euler_angles;
      *(uint *)&pCVar2[1].field_0x4 = *(uint *)&euler_angles->field_0x4;
      *(uint *)&pCVar2[1].field_0x8 = *(uint *)&euler_angles->field_0x8;
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              ((CKeyFramedModelInstance *)(pCVar2 + 2),model_name);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
              ((CKeyFramedModelInstance *)(pCVar2 + 2));
  }
  return;
}
