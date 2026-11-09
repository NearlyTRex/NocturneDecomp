// Name: core_ammo.cpp_CAmmoManaLarge_ctor_FUN_0040e260
// Address: 0040e260
// Address Range: [[0040e260, 0040e2a1]]
// Convention: unknown
// Signature: CAmmoManaLarge * core_ammo_cpp_CAmmoManaLarge_ctor_FUN_0040e260(CAmmoManaLarge *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAmmoManaLarge * core_ammo_cpp_CAmmoManaLarge_ctor_FUN_0040e260(CAmmoManaLarge *this_ptr)

{
  CAmmo *pCVar1;
  
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040de60((CAmmo *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CAmmo_ManaLargeVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,"mana_lg.kfm");
  *(uint *)&pCVar1->field_0x318 = 10;
  *(uint *)&pCVar1->field_0x314 = 0x32;
  return (CAmmoManaLarge *)pCVar1;
}
