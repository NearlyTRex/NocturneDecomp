// Name: core_anvil.cpp_CAnvil_ctor_FUN_00411ce0
// Address: 00411ce0
// MANUAL RECONSTRUCTION
// Address Range: [[00411ce0, 00411d6a]]
// Convention: __cdecl
// Signature: CAnvil * __cdecl core_anvil_cpp_CAnvil_ctor_FUN_00411ce0(CAnvil *this_ptr)

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_CAnvil_ctor_FUN_00411ce0(CAnvil *this_ptr)

{
  CAnvil *pCVar2;
  CAnvil_ptr_344 this_ptr_00;

  pCVar2 = (CAnvil *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CAnvilVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"question.kfm");
  ADJ(this_ptr_00)->drop_height = 25.0;
  ADJ(this_ptr_00)->triggered = 0;
  ADJ(this_ptr_00)->yvel = 0.0;
  strcpy(ADJ(this_ptr_00)->drop_condition, "acmeanvilinc");
  return ADJ(this_ptr_00);
}
