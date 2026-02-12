// Name: core_health.cpp_CHealthItem_ctor_FUN_004f1dd0
// Address: 004f1dd0
// Address Range: [[004f1dd0, 004f1e27]]
// Convention: __cdecl
// Signature: CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004f1dd0(CHealthItem *this_ptr)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004f1dd0(CHealthItem *this_ptr)

{
  CHealthItem *pCVar1;
  CHealthItem_ptr_344 this_ptr_00;
  
  pCVar1 = (CHealthItem *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CHealthItemVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"bullet.kfm");
  ADJ(this_ptr_00)->use_count = 1;
  ADJ(this_ptr_00)->hp_restored = 50.0;
  return ADJ(this_ptr_00);
}
