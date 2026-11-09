// Name: core_boxactor.cpp_FUN_0041f130
// Address: 0041f130
// Address Range: [[0041f130, 0041f1d0]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_FUN_0041f130(CBoxActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_FUN_0041f130(CBoxActor *this_ptr)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  
  core_actor_cpp_FUN_00408890((CDemonActor *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  iVar1 = *(int *)&pCVar2->field_0x100;
  if (*(float *)&this_ptr->field_0x310 < 0.0) {
    *(uint *)&this_ptr->field_0x310 = 0;
  }
  if ((float)iVar1 <= *(float *)&this_ptr->field_0x310) {
    *(float *)&this_ptr->field_0x310 = (float)(iVar1 + -1);
  }
  if (*(int *)&this_ptr->field_0x5e8 < 0) {
    core_boxactor_cpp_FUN_0041f1e0(this_ptr);
  }
  *(uint *)&this_ptr->field_0x6dc = 0;
  *(uint *)&this_ptr->field_0x6e4 = 0x10000;
  *(uint *)&this_ptr->field_0x328 = 0;
  return;
}
