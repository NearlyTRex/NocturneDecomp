// Name: core_boxactor.cpp_FUN_0041be70
// Address: 0041be70
// Address Range: [[0041be70, 0041bf0a]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_FUN_0041be70(CBoxActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_FUN_0041be70(CBoxActor *this_ptr)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  
  core_actor_cpp_FUN_00408a80((CDemonActor *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&this_ptr->field_0x2b4);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x2b4);
  iVar1 = *(int *)&pCVar2->field_0x100;
  if (*(float *)&this_ptr->field_0x46c < 0.0) {
    *(uint *)&this_ptr->field_0x46c = 0;
  }
  if ((float)iVar1 <= *(float *)&this_ptr->field_0x46c) {
    *(float *)&this_ptr->field_0x46c = (float)(iVar1 + -1);
  }
  if (-1 < *(int *)&this_ptr->field_0x744) {
    *(uint *)&this_ptr->field_0x484 = 0;
    return;
  }
  core_boxactor_cpp_FUN_0041bf10(this_ptr);
  *(uint *)&this_ptr->field_0x484 = 0;
  return;
}
