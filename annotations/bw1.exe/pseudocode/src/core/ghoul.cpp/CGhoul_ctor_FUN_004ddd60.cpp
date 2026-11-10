// Name: core_ghoul.cpp_CGhoul_ctor_FUN_004ddd60
// Address: 004ddd60
// Address Range: [[004ddd60, 004dde8d]]
// Convention: unknown
// Signature: CGhoul * core_ghoul_cpp_CGhoul_ctor_FUN_004ddd60(CGhoul *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGhoul * core_ghoul_cpp_CGhoul_ctor_FUN_004ddd60(CGhoul *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CGhoul *pCVar3;
  float fVar4;
  float10 fVar5;
  float max_value;
  int iVar6;
  
  pCVar3 = (CGhoul *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CGhoulVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,(char *)0x5e3a48);
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(20.0,35.0);
  fVar5 = (float10)fVar4 * (float10)_DAT_005e3a51;
  max_value = 10.0;
  fVar4 = 4.0;
  round();
  pCVar3->burp_timer = (int)ROUND(fVar5);
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar4,max_value);
  pCVar3->arise_timer = 0xa0000;
  pCVar3->pending_eat_state = -1;
  fVar5 = (float10)fVar4 * (float10)_DAT_005e3a51;
  pCVar3->flinch_blend_weight = 0.0;
  pCVar3->spasm_count = 2;
  iVar6 = 3;
  round();
  pCVar3->spasm_timer = (int)ROUND(fVar5);
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(1,iVar6);
  *(uint *)&(pCVar3->base).base.field_0x2fec = 0x3f400000;
  *(uint *)&(pCVar3->base).base.field_0x2ff0 = 0x3fc00000;
  pCVar3->stun_timer = 0.0;
  pCVar3->dark_waypoint = (CDemonActor *)0x0;
  pCVar3->heal_timer = 0.0;
  pCVar3->is_berserk = 0;
  pCVar3->stuck_timer = 0.0;
  uVar1 = _DAT_006012d0;
  *(uint *)&(pCVar3->base).base.field_0x252c = 0x3fc90fdb;
  uVar2 = _DAT_006012d4;
  pCVar3->lives_left = iVar6;
  *(uint *)&(pCVar3->base).base.field_0x2ff4 = uVar1;
  *(uint *)&(pCVar3->base).base.field_0x2ff8 = uVar2;
  return pCVar3;
}
