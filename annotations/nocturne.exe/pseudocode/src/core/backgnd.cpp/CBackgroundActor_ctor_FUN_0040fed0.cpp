// Name: core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040fed0
// Address: 0040fed0
// Address Range: [[0040fed0, 0040ff27]]
// Convention: __cdecl
// Signature: CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040fed0(CBackgroundActor *this_ptr)

#include "nocturne.h"

CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040fed0(CBackgroundActor *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CBackgroundActorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr_00,"candle.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  return (CBackgroundActor *)(this_ptr_00[-1].part_visibility_flags + 0xb);
}
