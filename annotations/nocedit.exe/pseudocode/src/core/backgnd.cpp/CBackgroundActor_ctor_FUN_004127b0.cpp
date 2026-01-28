// Name: core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0
// Address: 004127b0
// Address Range: [[004127b0, 00412807]]
// Convention: __cdecl
// Signature: CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_ctor_FUN_004127b0(CBackgroundActor *this_ptr)

#include "nocturne.h"

CBackgroundActor * __cdecl
core_backgnd_cpp_CBackgroundActor_ctor_FUN_004127b0(CBackgroundActor *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CBackgroundActorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"candle.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  return (CBackgroundActor *)(this_ptr_00[-1].part_visibility_flags + 9);
}
