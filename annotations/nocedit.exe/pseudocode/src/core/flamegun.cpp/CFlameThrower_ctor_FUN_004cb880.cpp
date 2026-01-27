// Name: core_flamegun.cpp_CFlameThrower_ctor_FUN_004cb880
// Address: 004cb880
// Address Range: [[004cb880, 004cb91d]]
// Convention: __cdecl
// Signature: CFlameThrower * core_flamegun.cpp_CFlameThrower_ctor_FUN_004cb880(CFlameThrower * this_ptr)

#include "nocturne.h"

CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_ctor_FUN_004cb880(CFlameThrower *this_ptr)

{
  float fVar1;
  CFlameThrower *pCVar2;
  
  pCVar2 = (CFlameThrower *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CFlameThrowerVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar2->base).model,"flamegun.kfm");
  pCVar2->unk[4] = '\0';
  pCVar2->unk[5] = '\0';
  pCVar2->unk[6] = '\0';
  pCVar2->unk[7] = '\0';
  pCVar2->unk[0] = '\0';
  pCVar2->unk[1] = '\0';
  pCVar2->unk[2] = '\0';
  pCVar2->unk[3] = '\0';
  (pCVar2->base).unk1[0] = '\0';
  (pCVar2->base).unk1[1] = '\0';
  (pCVar2->base).unk1[2] = '\0';
  (pCVar2->base).unk1[3] = '\0';
  (pCVar2->base).unk1[4] = '\0';
  (pCVar2->base).unk1[5] = '\0';
  (pCVar2->base).unk1[6] = '\0';
  (pCVar2->base).unk1[7] = '\0';
  (pCVar2->base).unk1[8] = '\x02';
  (pCVar2->base).unk1[9] = '\0';
  (pCVar2->base).unk1[10] = '\0';
  (pCVar2->base).unk1[0xb] = '\0';
  (pCVar2->base).unk1[0xc] = '\0';
  (pCVar2->base).unk1[0xd] = '\0';
  (pCVar2->base).unk1[0xe] = '\0';
  (pCVar2->base).unk1[0xf] = '\0';
  (pCVar2->base).bolt_velocity = 15.0;
  (pCVar2->base).fire_cooldown = 1.4013e-45;
  fVar1 = 8.0f;
  pCVar2->unk[0xc] = '\0';
  pCVar2->unk[0xd] = '\0';
  pCVar2->unk[0xe] = '\0';
  pCVar2->unk[0xf] = '\0';
  pCVar2->unk[8] = '\0';
  pCVar2->unk[9] = '\0';
  pCVar2->unk[10] = '\0';
  pCVar2->unk[0xb] = '\0';
  *(float *)((pCVar2->base).unk3 + 0x25f) = fVar1;
  return pCVar2;
}
