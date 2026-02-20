// Name: core_trap.cpp_CTrap_ctor_FUN_005de690
// Address: 005de690
// Address Range: [[005de690, 005de6dd]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_005de690(CTrap *this_ptr)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_005de690(CTrap *this_ptr)

{
  CTrap *pCVar1;
  CTrap_ptr_344 this_ptr_00;
  
  pCVar1 = (CTrap *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CTrapVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"beartrap.kfm");
  ADJ(this_ptr_00)->wolf_in_trap = 0;
  return ADJ(this_ptr_00);
}
