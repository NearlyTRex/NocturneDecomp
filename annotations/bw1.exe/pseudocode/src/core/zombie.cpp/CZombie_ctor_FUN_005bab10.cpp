// Name: core_zombie.cpp_CZombie_ctor_FUN_005bab10
// Address: 005bab10
// Address Range: [[005bab10, 005bac71]]
// Convention: unknown
// Signature: CZombie * core_zombie_cpp_CZombie_ctor_FUN_005bab10(CZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombie * core_zombie_cpp_CZombie_ctor_FUN_005bab10(CZombie *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CZombie *pCVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  pCVar4 = (CZombie *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  pcVar7 = (char *)0x5fa420;
  (pCVar4->base).base.base.vtable._ub = &g_CZombieVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar4->base).base.model,(char *)0x5fa414);
  *(uint *)&(pCVar4->base).base.field_0x2fec = 0x3f000000;
  pcVar8 = pCVar4->rise_from_grave_condition;
  *(uint *)&(pCVar4->base).base.field_0x2ff0 = 0x3f800000;
  uVar2 = _DAT_006083ac;
  pCVar4->pickup_target = (CDemonActor *)0x0;
  uVar3 = _DAT_006083b0;
  pCVar4->pickup_approach_progress = 0.0;
  *(uint *)&(pCVar4->base).base.field_0x2ff4 = uVar2;
  *(uint *)&(pCVar4->base).base.field_0x2ff8 = uVar3;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.3,1.0);
  pCVar4->grave_actor = (CDemonActor *)0x0;
  pCVar4->pickup_range_factor = fVar5;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0xff);
  pCVar4->pickup_scan_timer = 0.0;
  pCVar4->target_door = (CDoor *)0x0;
  pCVar4->pickup_seed = iVar6;
  pcVar8 = g_CDemonSetPtr->geometry_filename;
  pCVar4->is_miner_zombie = 0;
  pCVar4->pain_cooldown = 0.0;
  iVar6 = _stricmp(pcVar8,"mine.geo");
  pCVar4->always_chase_fast = 0;
  pCVar4->rise_delay = 0.0;
  pCVar4->buried_timer = 0.0;
  (pCVar4->base).allow_pathfind_to_new_targets = 0;
  *(uint *)&(pCVar4->base).base.field_0x252c = 0x3fc90fdb;
  pCVar4->is_miner_zombie = (uint)(iVar6 == 0);
  return pCVar4;
}
