// Name: core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
// Address: 00410dc0
// MANUAL RECONSTRUCTION
// Address Range: [[00410dc0, 00410e40]]
// Convention: __cdecl
// Signature: CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(CAmmo *this_ptr)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(CAmmo *this_ptr)

{
  CAmmo *pCVar2;
  CAmmo_ptr_344 this_ptr_00;

  pCVar2 = (CAmmo *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CAmmoVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"bullet.kfm");
  strcpy(ADJ(this_ptr_00)->weapon_class_name,"CGun");
  ADJ(this_ptr_00)->ammo_count = 0x14;
  ADJ(this_ptr_00)->ammo_type = AMMO_TYPE_GENERIC;
  return ADJ(this_ptr_00);
}
