// Name: core_boxactor.cpp_CBoxActor_setup_FUN_00421de0
// Address: 00421de0
// Address Range: [[00421de0, 00421e7a]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_setup_FUN_00421de0(CBoxActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_setup_FUN_00421de0(CBoxActor *this_ptr)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  iVar1 = *(int *)&pCVar2->field_0x100;
  if (*(float *)&this_ptr->field_0x310 < 0.0) {
    *(uint *)&this_ptr->field_0x310 = 0;
  }
  if ((float)iVar1 <= *(float *)&this_ptr->field_0x310) {
    *(float *)&this_ptr->field_0x310 = (float)(iVar1 + -1);
  }
  if (-1 < *(int *)&this_ptr->field_0x5e8) {
    *(uint *)&this_ptr->field_0x328 = 0;
    return;
  }
  core_boxactor_cpp_FUN_00421e80(this_ptr);
  *(uint *)&this_ptr->field_0x328 = 0;
  return;
}
