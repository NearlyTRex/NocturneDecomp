// Name: core_ghoul.cpp_CGhoul_ctor_FUN_004c68e0
// Address: 004c68e0
// Address Range: [[004c68e0, 004c6a0d]]
// Convention: __cdecl
// Signature: CGhoul * __cdecl core_ghoul_cpp_CGhoul_ctor_FUN_004c68e0(CGhoul *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGhoul * __cdecl core_ghoul_cpp_CGhoul_ctor_FUN_004c68e0(CGhoul *this_ptr)

{
  CGhoul *pCVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  int iVar5;
  
  pCVar1 = (CGhoul *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CGhoulVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5c4054);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(20.0,35.0);
  fVar3 = (float10)fVar2 * (float10)_DAT_005c405d;
  fVar4 = 10.0;
  fVar2 = 4.0;
  round();
  pCVar1->burp_timer = (int)ROUND(fVar3);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar2,fVar4);
  pCVar1->arise_timer = 0xa0000;
  pCVar1->pending_eat_state = -1;
  fVar3 = (float10)fVar2 * (float10)_DAT_005c405d;
  pCVar1->flinch_blend_weight = 0.0;
  pCVar1->spasm_count = 2;
  iVar5 = 3;
  round();
  pCVar1->spasm_timer = (int)ROUND(fVar3);
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(1,iVar5);
  (pCVar1->base).base.collision_cylinder_height = 0.75;
  (pCVar1->base).base.collision_cylinder_radius = 1.5;
  pCVar1->stun_timer = 0.0;
  pCVar1->dark_waypoint = (CDemonActor *)0x0;
  pCVar1->heal_timer = 0.0;
  pCVar1->is_berserk = 0;
  pCVar1->stuck_timer = 0.0;
  fVar2 = _DAT_005e0a40;
  (pCVar1->base).base.turn_rate = 1.5707964;
  fVar4 = _DAT_005e0a44;
  pCVar1->lives_left = iVar5;
  (pCVar1->base).base.ai_detection_range_min = fVar2;
  (pCVar1->base).base.ai_detection_range_max = fVar4;
  return pCVar1;
}
