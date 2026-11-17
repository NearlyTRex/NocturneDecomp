// Name: core_ghoul.cpp_CGhoul_ctor_FUN_004c68e0
// Address: 004c68e0
// Address Range: [[004c68e0, 004c6a0d]]
// Convention: __cdecl
// Signature: CGhoul * __cdecl core_ghoul_cpp_CGhoul_ctor_FUN_004c68e0(CGhoul *this_ptr)

#include "nocturne.h"

CGhoul * __cdecl core_ghoul_cpp_CGhoul_ctor_FUN_004c68e0(CGhoul *this_ptr)

{
  CGhoul *pCVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  float max_value;
  
  pCVar1 = (CGhoul *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CGhoulVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"guul.dfm");
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(20.0,35.0);
  max_value = 4.0;
  fVar4 = 7.017249e-39;
  dVar3 = round((double)(fVar2 * (float)65536));
  pCVar1->burp_timer = (int)ROUND(dVar3);
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar4,max_value);
  pCVar1->arise_timer = 0xa0000;
  pCVar1->pending_eat_state = -1;
  fVar2 = (float)65536;
  pCVar1->flinch_blend_weight = 0.0;
  pCVar1->spasm_count = 2;
  iVar5 = 0x4c6987;
  dVar3 = round((double)(fVar4 * fVar2));
  pCVar1->spasm_timer = (int)ROUND(dVar3);
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(1,iVar5);
  (pCVar1->base).base.collision_cylinder_height = 0.75;
  (pCVar1->base).base.collision_cylinder_radius = 1.5;
  pCVar1->stun_timer = 0.0;
  pCVar1->dark_waypoint = (CDemonActor *)0x0;
  pCVar1->heal_timer = 0.0;
  pCVar1->is_berserk = 0;
  pCVar1->stuck_timer = 0.0;
  fVar2 = 50.0f;
  (pCVar1->base).base.turn_rate = 1.5707964;
  fVar4 = 100.0f;
  pCVar1->lives_left = iVar5;
  (pCVar1->base).base.ai_detection_range_min = fVar2;
  (pCVar1->base).base.ai_detection_range_max = fVar4;
  return pCVar1;
}
