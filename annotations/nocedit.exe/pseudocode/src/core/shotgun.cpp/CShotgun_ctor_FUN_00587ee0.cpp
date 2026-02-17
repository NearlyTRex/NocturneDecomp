// Name: core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0
// Address: 00587ee0
// Address Range: [[00587ee0, 00587f69]]
// Convention: __cdecl
// Signature: CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_00587ee0(CShotgun *this_ptr)

#include "nocturne.h"

CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_00587ee0(CShotgun *this_ptr)

{
  float fVar1;
  CShotgun *pCVar2;
  
  pCVar2 = (CShotgun *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CShotgunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar2->base).model,"shotgun.kfm");
  pCVar2->unk[0] = '\0';
  pCVar2->unk[1] = '\0';
  pCVar2->unk[2] = ' ';
  pCVar2->unk[3] = 'A';
  (pCVar2->base).is_spread_weapon = 1;
  (pCVar2->base).fire_mode = 2;
  (pCVar2->base).weapon_type = 1;
  (pCVar2->base).can_penetrate = 1;
  (pCVar2->base).bolt_velocity = 15.0;
  fVar1 = 8.0f;
  (pCVar2->base).fire_cooldown = 0.0;
  pCVar2->unk[4] = '\0';
  pCVar2->unk[5] = '\0';
  pCVar2->unk[6] = '\0';
  pCVar2->unk[7] = '\0';
  (pCVar2->base).weight = fVar1;
  return pCVar2;
}
