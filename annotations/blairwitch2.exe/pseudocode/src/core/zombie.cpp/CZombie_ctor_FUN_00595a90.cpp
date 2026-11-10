// Name: core_zombie.cpp_CZombie_ctor_FUN_00595a90
// Address: 00595a90
// Address Range: [[00595a90, 00595bf1]]
// Convention: unknown
// Signature: CZombie * core_zombie_cpp_CZombie_ctor_FUN_00595a90(CZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombie * core_zombie_cpp_CZombie_ctor_FUN_00595a90(CZombie *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CZombie *pCVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  pCVar4 = (CZombie *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  pcVar7 = (char *)0x5eee4e;
  (pCVar4->base).base.base.vtable._ub = &g_CZombieVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(pCVar4->base).base.model,(char *)0x5eee42);
  *(uint *)&(pCVar4->base).base.field_0x3430 = 0x3f000000;
  pcVar8 = pCVar4->rise_from_grave_condition;
  *(uint *)&(pCVar4->base).base.field_0x3434 = 0x3f800000;
  uVar2 = _DAT_005fe31c;
  pCVar4->pickup_target = (CDemonActor *)0x0;
  uVar3 = _DAT_005fe320;
  pCVar4->pickup_approach_progress = 0.0;
  *(uint *)&(pCVar4->base).base.field_0x3438 = uVar2;
  *(uint *)&(pCVar4->base).base.field_0x343c = uVar3;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,1.0);
  pCVar4->grave_actor = (CDemonActor *)0x0;
  pCVar4->pickup_range_factor = fVar5;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,0xff);
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
  *(uint *)&(pCVar4->base).base.field_0x259c = 0x3fc90fdb;
  pCVar4->is_miner_zombie = (uint)(iVar6 == 0);
  return pCVar4;
}
