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
  
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040de60((CAmmo *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CAmmo_ManaVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,"mana_sm.kfm");
  *(uint *)&pCVar1->field_0x318 = 10;
  *(uint *)&pCVar1->field_0x314 = 0x14;
  return (CAmmoMana *)pCVar1;
}
