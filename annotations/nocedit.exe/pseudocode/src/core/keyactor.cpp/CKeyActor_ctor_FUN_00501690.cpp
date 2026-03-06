// Name: core_keyactor.cpp_CKeyActor_ctor_FUN_00501690
// Address: 00501690
// Address Range: [[00501690, 005016e7]]
// Convention: __cdecl
// Signature: CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_ctor_FUN_00501690(CKeyActor *this_ptr)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_ctor_FUN_00501690(CKeyActor *this_ptr)

{
  CKeyActor *pCVar1;
  CKeyActor_ptr_344 this_ptr_00;
  
  pCVar1 = (CKeyActor *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CKeyActorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr_00,"key1.kfm")
  ;
  ADJ(this_ptr_00)->key_mask = 1;
  ADJ(this_ptr_00)->rotation_angle = 0.0;
  return ADJ(this_ptr_00);
}
