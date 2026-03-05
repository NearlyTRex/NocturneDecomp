// Name: core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0
// Address: 004127b0
// Address Range: [[004127b0, 00412807]]
// Convention: __cdecl
// Signature: CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_ctor_FUN_004127b0(CBackgroundActor *this_ptr)

#include "nocturne.h"

CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_ctor_FUN_004127b0(CBackgroundActor *this_ptr)

{
  CBackgroundActor *pCVar1;
  CBackgroundActor_ptr_344 this_ptr_00;
  
  pCVar1 = (CBackgroundActor *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CBackgroundActorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"candle.kfm");
  ADJ(this_ptr_00)->collide_with_me = 0;
  ADJ(this_ptr_00)->ground_type = GROUND_TYPE_DEFAULT;
  return ADJ(this_ptr_00);
}
