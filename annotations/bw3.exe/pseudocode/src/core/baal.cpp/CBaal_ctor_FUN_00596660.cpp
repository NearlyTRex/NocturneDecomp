// Name: core_baal.cpp_CBaal_ctor_FUN_00596660
// Address: 00596660
// Address Range: [[00596660, 0059672b]]
// Convention: unknown
// Signature: CBaal * core_baal_cpp_CBaal_ctor_FUN_00596660(CBaal *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBaal * core_baal_cpp_CBaal_ctor_FUN_00596660(CBaal *this_ptr)

{
  CBaal *pCVar1;
  CBaal *pCVar2;
  CBaal *pCVar3;
  
  pCVar1 = (CBaal *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CBaalVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5d948f);
  (pCVar1->base).base.collision_cylinder_height = 0.5;
  (pCVar1->base).base.collision_cylinder_radius = 1.0;
  pCVar1->countdown_timer = 0.0;
  (pCVar1->base).attack_cooldown = -1.0;
  (pCVar1->base).allow_pathfind_to_new_targets = 0;
  (pCVar1->base).base.turn_rate = 1.5707964;
  pCVar1->fading_in = 1;
  pCVar1->max_fade_time = 2.0;
  pCVar1->fade_out_opacity = 0x4b;
  (pCVar1->base).pain_threshold = 25.0;
  pCVar1->recombine_pending = 0;
  pCVar1->state_cooldown = 0.0;
  pCVar1->fade_timer = pCVar1->max_fade_time;
  pCVar2 = pCVar1;
  do {
    pCVar3 = (CBaal *)((pCVar2->base).base.base.actor_name + 4);
    pCVar2->sfx_handles[0] = 0;
    pCVar2 = pCVar3;
  } while (pCVar3 != (CBaal *)((int)&(pCVar1->base).base.base.orient + 4));
  return pCVar1;
}
