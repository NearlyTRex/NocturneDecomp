// Name: core_ammo.cpp_CAmmoManaLarge_ctor_FUN_0040e260
// Address: 0040e260
// Address Range: [[0040e260, 0040e2a1]]
// Convention: __cdecl
// Signature: CAmmoManaLarge * __cdecl core_ammo_cpp_CAmmoManaLarge_ctor_FUN_0040e260(CAmmoManaLarge *this_ptr)

#include "nocturne.h"

CAmmoManaLarge * __cdecl core_ammo_cpp_CAmmoManaLarge_ctor_FUN_0040e260(CAmmoManaLarge *this_ptr)

{
  CAmmo *pCVar1;
  
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040de60(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CAmmoManaLargeVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&pCVar1->model,"mana_lg.kfm");
  pCVar1->ammo_type = AMMO_TYPE_MANA;
  pCVar1->ammo_count = 0x32;
  return (CAmmoManaLarge *)pCVar1;
}
