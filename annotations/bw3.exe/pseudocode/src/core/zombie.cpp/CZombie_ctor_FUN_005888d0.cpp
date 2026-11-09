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
  CZombie *pCVar3;
  uint uVar4;
  int iVar5;
  byte *str1;
  char *pcVar6;
  char *pcVar7;
  
  pCVar3 = (CZombie *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  pcVar6 = (char *)0x5d83e4;
  *(byte ***)&pCVar3->field_0x154 = &g_CZombieVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar3->field_0x158,0x5d83d7);
  *(uint *)&pCVar3->field_0x326c = 0x3f000000;
  pcVar7 = &pCVar3->field_0xd074;
  *(uint *)&pCVar3->field_0x3270 = 0x3f800000;
  uVar4 = _DAT_005e677c;
  *(uint *)&pCVar3->field_0xd064 = 0;
  uVar2 = _DAT_005e6780;
  *(uint *)&pCVar3->field_0xd060 = 0;
  *(uint *)&pCVar3->field_0x3274 = uVar4;
  *(uint *)&pCVar3->field_0x3278 = uVar2;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar4 = core_actor_cpp_FUN_0040ce40(0x3e99999a,0x3f800000);
  *(uint *)&pCVar3->field_0xd06c = 0;
  *(uint *)&pCVar3->field_0xd054 = uVar4;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0xff);
  *(uint *)&pCVar3->field_0xd05c = 0;
  *(uint *)&pCVar3->field_0xd070 = 0;
  *(int *)&pCVar3->field_0xd058 = iVar5;
  str1 = &g_CDemonSetPtr->field_0x14d0f0;
  *(uint *)&pCVar3->field_0xd0d8 = 0;
  *(uint *)&pCVar3->field_0xd130 = 0;
  iVar5 = _stricmp(str1,"mine.geo");
  *(uint *)&pCVar3->field_0xd0dc = 0;
  *(uint *)&pCVar3->field_0xd144 = 0;
  *(uint *)&pCVar3->field_0xd148 = 0;
  *(uint *)&pCVar3->field_0xd050 = 0;
  *(uint *)&pCVar3->field_0x252c = 0x3fc90fdb;
  *(uint *)&pCVar3->field_0xd140 = 0;
  *(uint *)&pCVar3->field_0xd0d8 = (uint)(iVar5 == 0);
  *(uint *)&pCVar3->field_0x2538 = 0x41700000;
  *(uint *)&pCVar3->field_0xce5c = 0x40a00000;
  *(uint *)&pCVar3->field_0xd0e4 = *(uint *)&pCVar3->field_0xcddc;
  *(uint *)&pCVar3->field_0xce60 = 0x40a00000;
  return pCVar3;
}
