// Name: core_keyactor.cpp_CKeyActor_ctor_FUN_004df140
// Address: 004df140
// Address Range: [[004df140, 004df197]]
// Convention: __cdecl
// Signature: CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_ctor_FUN_004df140(CKeyActor *this_ptr)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_ctor_FUN_004df140(CKeyActor *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CKeyActorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(this_ptr_00,(char *)0x5dbbb0);
  *(uint *)(this_ptr_00 + 1) = 1;
  *(uint *)&this_ptr_00[1].field_0x4 = 0;
  return (CKeyActor *)&this_ptr_00[-2].field_0x44;
}
