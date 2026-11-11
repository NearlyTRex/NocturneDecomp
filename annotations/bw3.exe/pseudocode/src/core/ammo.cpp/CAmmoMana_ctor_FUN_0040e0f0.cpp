// Name: core_ammo.cpp_CAmmoMana_ctor_FUN_0040e0f0
// Address: 0040e0f0
// Address Range: [[0040e0f0, 0040e131]]
// Convention: unknown
// Signature: CAmmoMana * core_ammo_cpp_CAmmoMana_ctor_FUN_0040e0f0(CAmmoMana *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAmmoMana * core_ammo_cpp_CAmmoMana_ctor_FUN_0040e0f0(CAmmoMana *this_ptr)

{
  CAmmo *pCVar1;
  
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040de60(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CAmmoManaVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&pCVar1->model,"mana_sm.kfm");
  pCVar1->ammo_type = AMMO_TYPE_MANA;
  pCVar1->ammo_count = 0x14;
  return (CAmmoMana *)pCVar1;
}
