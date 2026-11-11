// Name: core_hino.cpp_CHino_ctor_FUN_0059b670
// Address: 0059b670
// Address Range: [[0059b670, 0059b735]]
// Convention: unknown
// Signature: CHino * core_hino_cpp_CHino_ctor_FUN_0059b670(CHino *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHino * core_hino_cpp_CHino_ctor_FUN_0059b670(CHino *this_ptr)

{
  float fVar1;
  float fVar2;
  CHino *pCVar3;
  CHino *pCVar4;
  CHino *pCVar5;
  
  pCVar3 = (CHino *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CHinoVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar3->base).base.model,(char *)0x5d9bca);
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  (pCVar3->base).base.collision_cylinder_radius = 0.9;
  (pCVar3->base).base.hit_points = 90.0;
  pCVar3->action_timer = 2.0;
  pCVar3->attack_cooldown = 0.0;
  pCVar3->vanish_timer = 0.0;
  pCVar3->render_alpha = 0x10000;
  fVar1 = _DAT_005e81b0;
  pCVar3->vanishing = 0;
  fVar2 = _DAT_005e81b4;
  pCVar3->platform_check_done = 0;
  pCVar3->near_platform = 0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  pCVar4 = pCVar3;
  do {
    pCVar5 = (CHino *)((pCVar4->base).base.base.actor_name + 4);
    pCVar4->sfx_handles[0] = 0;
    pCVar4 = pCVar5;
  } while (pCVar5 != (CHino *)((int)&(pCVar3->base).base.base.orient + 4));
  return pCVar3;
}
