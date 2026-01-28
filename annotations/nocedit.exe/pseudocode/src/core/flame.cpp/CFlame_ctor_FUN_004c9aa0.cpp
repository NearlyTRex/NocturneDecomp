// Name: core_flame.cpp_CFlame_ctor_FUN_004c9aa0
// Address: 004c9aa0
// Address Range: [[004c9aa0, 004c9ae6]]
// Convention: __cdecl
// Signature: CFlame * __cdecl core_flame_cpp_CFlame_ctor_FUN_004c9aa0(CFlame *this_ptr)

#include "nocturne.h"

CFlame * __cdecl core_flame_cpp_CFlame_ctor_FUN_004c9aa0(CFlame *this_ptr)

{
  CFlame *pCVar1;
  float fVar2;
  
  pCVar1 = (CFlame *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CFlameVTable;
  (pCVar1->flame_size).x = 1.0;
  (pCVar1->flame_size).y = 2.0;
  (pCVar1->flame_size).z = 1.0;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,8.0);
  pCVar1->which_flame = 0;
  pCVar1->globe_scalar = 1.0;
  pCVar1->unk4[0] = '\x01';
  pCVar1->unk4[1] = '\0';
  pCVar1->unk4[2] = '\0';
  pCVar1->unk4[3] = '\0';
  pCVar1->unk2[0] = '\0';
  pCVar1->unk2[1] = '\0';
  pCVar1->unk2[2] = '\0';
  pCVar1->unk2[3] = '\0';
  pCVar1->unk3[0] = '\0';
  pCVar1->unk3[100] = '\0';
  pCVar1->flame_state = 1;
  (pCVar1->base).is_transparent = 1;
  pCVar1->randomness = 0.05;
  pCVar1->intensity = 0.5;
  pCVar1->unk4[8] = '\x01';
  pCVar1->unk4[9] = '\0';
  pCVar1->unk4[10] = '\0';
  pCVar1->unk4[0xb] = '\0';
  pCVar1->burn_hero = 0;
  pCVar1->burn_enemy = 0;
  pCVar1->unk4[0xc] = '\0';
  pCVar1->unk4[0xd] = '\0';
  pCVar1->unk4[0xe] = '\0';
  pCVar1->unk4[0xf] = '\0';
  pCVar1->unk4[0x10] = '\0';
  pCVar1->unk4[0x11] = '\0';
  pCVar1->unk4[0x12] = '\0';
  pCVar1->unk4[0x13] = '\0';
  *(float *)pCVar1->unk1 = fVar2;
  return pCVar1;
}
