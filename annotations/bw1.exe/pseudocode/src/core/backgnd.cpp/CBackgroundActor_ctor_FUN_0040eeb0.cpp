// Name: core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040eeb0
// Address: 0040eeb0
// Address Range: [[0040eeb0, 0040ef11]]
// Convention: __cdecl
// Signature: CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040eeb0(CBackgroundActor *this_ptr)

#include "nocturne.h"

CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040eeb0(CBackgroundActor *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)(pCVar1[1].actor_name + 4));
  *(CDemonActor_vtable **)(this_ptr_00[-1].model_name + 0xfc) = &g_CBackgroundActorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (this_ptr_00,"candle.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x1;
  return (CBackgroundActor *)(this_ptr_00[-1].part_visibility_flags + 8);
}
