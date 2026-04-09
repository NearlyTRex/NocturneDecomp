// Name: core_ghoul.cpp_CGhoul_ctor_FUN_004e6030
// Address: 004e6030
// Address Range: [[004e6030, 004e6153]]
// Convention: __cdecl
// Signature: CGhoul * __cdecl core_ghoul_cpp_CGhoul_ctor_FUN_004e6030(CGhoul *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

CGhoul * __cdecl core_ghoul_cpp_CGhoul_ctor_FUN_004e6030(CGhoul *this_ptr)

{
  float fVar1;
  float fVar4;
  CGhoul *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  pCVar1 = (CGhoul *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CGhoulVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar1->base).base.model,"guul.dfm");
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(20.0,35.0);
  pCVar1->burp_timer = (int)ROUND(ROUND(fVar2 * (float)65536));
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(4.0,10.0);
  pCVar1->arise_timer = 0xa0000;
  pCVar1->pending_eat_state = -1;
  fVar1 = (float)65536;
  pCVar1->flinch_blend_weight = 0.0;
  pCVar1->spasm_count = 2;
  pCVar1->spasm_timer = (int)ROUND(ROUND(fVar3 * fVar1));
  iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(1,3);
  (pCVar1->base).base.collision_cylinder_height = 0.75;
  (pCVar1->base).base.collision_cylinder_radius = 1.5;
  pCVar1->stun_timer = 0.0;
  pCVar1->dark_waypoint = (CDemonActor *)0x0;
  pCVar1->heal_timer = 0.0;
  pCVar1->is_berserk = 0;
  fVar1 = 50.0f;
  pCVar1->stuck_timer = 0.0;
  fVar4 = 100.0f;
  pCVar1->lives_left = iVar4;
  (pCVar1->base).base.ai_detection_range_min = fVar1;
  (pCVar1->base).base.ai_detection_range_max = fVar4;
  return pCVar1;
}
