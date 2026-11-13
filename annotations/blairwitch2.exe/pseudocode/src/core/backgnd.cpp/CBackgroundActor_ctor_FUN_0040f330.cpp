// Name: core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040f330
// Address: 0040f330
// Address Range: [[0040f330, 0040f391]]
// Convention: __cdecl
// Signature: CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040f330(CBackgroundActor *this_ptr)

#include "nocturne.h"

CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040f330(CBackgroundActor *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar1[1].actor_name + 4));
  *(CDemonActor_vtable **)(this_ptr_00[-1].model_name + 0xfc) = &g_CBackgroundActorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_00,"candle.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x1;
  return (CBackgroundActor *)(this_ptr_00[-2].part_visibility_flags + 0x10);
}
