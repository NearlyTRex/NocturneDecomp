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
  pCVar1->is_visible = 1;
  pCVar1->sfx_handle = 0;
  pCVar1->on_event[0] = '\0';
  pCVar1->off_event[0] = '\0';
  pCVar1->flame_state = 1;
  (pCVar1->base).is_transparent = 1;
  pCVar1->randomness = 0.05;
  pCVar1->intensity = 0.5;
  pCVar1->do_visibility_check = 1;
  pCVar1->burn_hero = 0;
  pCVar1->burn_enemy = 0;
  pCVar1->enemy_burn_index = 0;
  pCVar1->render_corona = 0;
  pCVar1->animation_time = fVar2;
  return pCVar1;
}
