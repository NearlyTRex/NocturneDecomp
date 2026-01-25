// Name: core_flame.cpp_CFlame_ctor_FUN_004c9aa0
// Address: 004c9aa0
// Address Range: [[004c9aa0, 004c9ae6]]
// Convention: __cdecl
// Signature: CFlame * core_flame.cpp_CFlame_ctor_FUN_004c9aa0(CFlame * this_ptr)

#include "nocturne.h"

CFlame * __cdecl core_flame_cpp_CFlame_ctor_FUN_004c9aa0(CFlame *this_ptr)

{
  CFlame *pCVar1;
  float fVar2;
  
  pCVar1 = (CFlame *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  (pCVar1->base_actor).vtable._ub = &PTR_core_flame_cpp_FUN_0065e034;
  (pCVar1->flame_size).x = 1.0;
  (pCVar1->flame_size).y = 2.0;
  (pCVar1->flame_size).z = 1.0;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,8.0);
  pCVar1->which_flame = 0;
  pCVar1->globe_scalar = 1.0;
  pCVar1->field12_0x290[0] = '\x01';
  pCVar1->field12_0x290[1] = '\0';
  pCVar1->field12_0x290[2] = '\0';
  pCVar1->field12_0x290[3] = '\0';
  pCVar1->field5_0x1b0[0] = '\0';
  pCVar1->field5_0x1b0[1] = '\0';
  pCVar1->field5_0x1b0[2] = '\0';
  pCVar1->field5_0x1b0[3] = '\0';
  pCVar1->field7_0x1b8[0] = '\0';
  pCVar1->field7_0x1b8[100] = '\0';
  pCVar1->flame_state = 1;
  (pCVar1->base_actor).is_transparent = 1;
  pCVar1->randomness = 0.05;
  pCVar1->intensity = 0.5;
  pCVar1->field12_0x290[8] = '\x01';
  pCVar1->field12_0x290[9] = '\0';
  pCVar1->field12_0x290[10] = '\0';
  pCVar1->field12_0x290[0xb] = '\0';
  pCVar1->burn_hero = 0;
  pCVar1->burn_enemy = 0;
  pCVar1->field12_0x290[0xc] = '\0';
  pCVar1->field12_0x290[0xd] = '\0';
  pCVar1->field12_0x290[0xe] = '\0';
  pCVar1->field12_0x290[0xf] = '\0';
  pCVar1->field12_0x290[0x10] = '\0';
  pCVar1->field12_0x290[0x11] = '\0';
  pCVar1->field12_0x290[0x12] = '\0';
  pCVar1->field12_0x290[0x13] = '\0';
  *(float *)pCVar1->field2_0x164 = fVar2;
  return pCVar1;
}
