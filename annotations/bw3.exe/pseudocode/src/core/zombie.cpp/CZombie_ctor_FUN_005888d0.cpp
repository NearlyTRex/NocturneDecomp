// Name: core_zombie.cpp_CZombie_ctor_FUN_005888d0
// Address: 005888d0
// Address Range: [[005888d0, 00588a67]]
// Convention: __cdecl
// Signature: CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_005888d0(CZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_005888d0(CZombie *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CZombie *pCVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  pCVar4 = (CZombie *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  pcVar7 = (char *)0x5d83e4;
  (pCVar4->base).base.base.vtable._ub = &g_CZombieVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar4->base).base.model,(char *)0x5d83d7);
  *(uint *)&(pCVar4->base).base.field_0x326c = 0x3f000000;
  pcVar8 = &pCVar4->field_0xd074;
  *(uint *)&(pCVar4->base).base.field_0x3270 = 0x3f800000;
  uVar2 = _DAT_005e677c;
  *(uint *)&pCVar4->field_0xd064 = 0;
  uVar3 = _DAT_005e6780;
  *(uint *)&pCVar4->field_0xd060 = 0;
  *(uint *)&(pCVar4->base).base.field_0x3274 = uVar2;
  *(uint *)&(pCVar4->base).base.field_0x3278 = uVar3;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.3,1.0);
  *(uint *)&pCVar4->field_0xd06c = 0;
  *(float *)&pCVar4->field_0xd054 = fVar5;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0xff);
  *(uint *)&pCVar4->field_0xd05c = 0;
  *(uint *)&pCVar4->field_0xd070 = 0;
  *(int *)&pCVar4->field_0xd058 = iVar6;
  pcVar8 = g_CDemonSetPtr->geometry_filename;
  *(uint *)&pCVar4->field_0xd0d8 = 0;
  *(uint *)&pCVar4->field_0xd130 = 0;
  iVar6 = _stricmp(pcVar8,"mine.geo");
  *(uint *)&pCVar4->field_0xd0dc = 0;
  *(uint *)&pCVar4->field_0xd144 = 0;
  *(uint *)&pCVar4->field_0xd148 = 0;
  *(uint *)&(pCVar4->base).field_0xd050 = 0;
  *(uint *)&(pCVar4->base).base.field_0x252c = 0x3fc90fdb;
  *(uint *)&pCVar4->field_0xd140 = 0;
  *(uint *)&pCVar4->field_0xd0d8 = (uint)(iVar6 == 0);
  fVar5 = (pCVar4->base).guard_distance;
  (pCVar4->base).base.hit_points = 15.0;
  *(uint *)&(pCVar4->base).field_0xce5c = 0x40a00000;
  *(float *)&pCVar4->field_0xd0e4 = fVar5;
  *(uint *)&(pCVar4->base).field_0xce60 = 0x40a00000;
  return pCVar4;
}
