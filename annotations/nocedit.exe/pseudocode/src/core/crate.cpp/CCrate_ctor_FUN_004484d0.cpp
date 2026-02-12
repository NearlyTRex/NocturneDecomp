// Name: core_crate.cpp_CCrate_ctor_FUN_004484d0
// Address: 004484d0
// Address Range: [[004484d0, 00448527]]
// Convention: __cdecl
// Signature: CCrate * __cdecl core_crate_cpp_CCrate_ctor_FUN_004484d0(CCrate *this_ptr)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_CCrate_ctor_FUN_004484d0(CCrate *this_ptr)

{
  CCrate *pCVar1;
  CCrate_ptr_344 this_ptr_00;
  
  pCVar1 = (CCrate *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CCrateVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"question.kfm");
  ADJ(this_ptr_00)->last_platform = (CDemonActor *)0x0;
  ADJ(this_ptr_00)->carrier = (CDemonActor *)0x0;
  return ADJ(this_ptr_00);
}
