// Name: core_ghoul.cpp_CGhoul_ctor_FUN_004c15e0
// Address: 004c15e0
// Address Range: [[004c15e0, 004c170d]]
// Convention: unknown
// Signature: CGhoul * core_ghoul_cpp_CGhoul_ctor_FUN_004c15e0(CGhoul *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGhoul * core_ghoul_cpp_CGhoul_ctor_FUN_004c15e0(CGhoul *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CGhoul *pCVar3;
  float fVar4;
  float10 fVar5;
  float max_value;
  int iVar6;
  
  pCVar3 = (CGhoul *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CGhoulVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(pCVar3->base).base.model,(char *)0x5d8e8e);
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(20.0,35.0);
  fVar5 = (float10)fVar4 * (float10)_DAT_005d8e97;
  max_value = 10.0;
  fVar4 = 4.0;
  round();
  pCVar3->burp_timer = (int)ROUND(fVar5);
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar4,max_value);
  pCVar3->arise_timer = 0xa0000;
  pCVar3->pending_eat_state = -1;
  fVar5 = (float10)fVar4 * (float10)_DAT_005d8e97;
  pCVar3->flinch_blend_weight = 0.0;
  pCVar3->spasm_count = 2;
  iVar6 = 3;
  round();
  pCVar3->spasm_timer = (int)ROUND(fVar5);
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(1,iVar6);
  *(uint *)&(pCVar3->base).base.field_0x3430 = 0x3f400000;
  *(uint *)&(pCVar3->base).base.field_0x3434 = 0x3fc00000;
  pCVar3->stun_timer = 0.0;
  pCVar3->dark_waypoint = (CDemonActor *)0x0;
  pCVar3->heal_timer = 0.0;
  pCVar3->is_berserk = 0;
  pCVar3->stuck_timer = 0.0;
  uVar1 = _DAT_005f78d0;
  *(uint *)&(pCVar3->base).base.field_0x259c = 0x3fc90fdb;
  uVar2 = _DAT_005f78d4;
  pCVar3->lives_left = iVar6;
  *(uint *)&(pCVar3->base).base.field_0x3438 = uVar1;
  *(uint *)&(pCVar3->base).base.field_0x343c = uVar2;
  return pCVar3;
}
