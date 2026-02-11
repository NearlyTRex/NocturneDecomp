// Name: core_dynamite.cpp_CDynamite_ctor_FUN_0049cdc0
// Address: 0049cdc0
// Address Range: [[0049cdc0, 0049ce69]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_CDynamite_ctor_FUN_0049cdc0(CDynamite *this_ptr)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_CDynamite_ctor_FUN_0049cdc0(CDynamite *this_ptr)

{
  CDynamite *pCVar1;
  
  pCVar1 = (CDynamite *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CDynamiteVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar1->base).model,"dynamitestick.kfm");
  (pCVar1->base).unk3 = 0x3f800000;
  pCVar1->unk[0xc] = '\0';
  pCVar1->unk[0xd] = '\0';
  pCVar1->unk[0xe] = '\0';
  pCVar1->unk[0xf] = '\0';
  *(uint *)(pCVar1->unk + 8) = *(uint *)(pCVar1->unk + 0xc);
  *(uint *)(pCVar1->unk + 4) = *(uint *)(pCVar1->unk + 8);
  pCVar1->unk[0] = '\0';
  pCVar1->unk[1] = '\0';
  pCVar1->unk[2] = -0x80;
  pCVar1->unk[3] = -0x41;
  (pCVar1->base).is_spread_weapon = 0;
  (pCVar1->base).fire_mode = 0;
  (pCVar1->base).weapon_type = 3;
  (pCVar1->base).can_penetrate = 0;
  (pCVar1->base).bolt_velocity = 200.0;
  (pCVar1->base).fire_cooldown = 0.0;
  (pCVar1->base).can_attach_light = 0;
  pCVar1->unk[0x10] = '\0';
  pCVar1->unk[0x11] = '\0';
  pCVar1->unk[0x12] = '\0';
  pCVar1->unk[0x13] = '\0';
  return pCVar1;
}
