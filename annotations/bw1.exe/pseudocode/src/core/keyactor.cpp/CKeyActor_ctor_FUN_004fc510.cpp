// Name: core_keyactor.cpp_CKeyActor_ctor_FUN_004fc510
// Address: 004fc510
// Address Range: [[004fc510, 004fc567]]
// Convention: __cdecl
// Signature: CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_ctor_FUN_004fc510(CKeyActor *this_ptr)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_ctor_FUN_004fc510(CKeyActor *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CKeyActorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(this_ptr_00,"key1.kfm")
  ;
  this_ptr_00[1].part_visibility_flags[0] = 1;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  return (CKeyActor *)(this_ptr_00[-1].part_visibility_flags + 9);
}
