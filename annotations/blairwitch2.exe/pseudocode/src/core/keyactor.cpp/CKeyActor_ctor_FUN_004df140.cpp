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
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CKeyActorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(this_ptr_00,(char *)0x5dbbb0);
  this_ptr_00[1].part_visibility_flags[0] = 1;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  return (CKeyActor *)(this_ptr_00[-2].part_visibility_flags + 0x11);
}
