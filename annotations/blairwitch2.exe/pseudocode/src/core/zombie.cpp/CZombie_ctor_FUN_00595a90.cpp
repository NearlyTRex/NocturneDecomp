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
  CZombie *pCVar3;
  uint uVar4;
  int iVar5;
  byte *str1;
  char *pcVar6;
  char *pcVar7;
  
  pCVar3 = (CZombie *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  pcVar6 = (char *)0x5eee4e;
  *(byte **)&pCVar3->field_0x2b0 = &g_CZombieVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,(char *)0x5eee42);
  *(uint *)&pCVar3->field_0x3430 = 0x3f000000;
  pcVar7 = &pCVar3->field_0x10b18;
  *(uint *)&pCVar3->field_0x3434 = 0x3f800000;
  uVar4 = _DAT_005fe31c;
  *(uint *)&pCVar3->field_0x10b08 = 0;
  uVar2 = _DAT_005fe320;
  *(uint *)&pCVar3->field_0x10b04 = 0;
  *(uint *)&pCVar3->field_0x3438 = uVar4;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar4 = core_actor_cpp_FUN_0040cf60(0x3e99999a,0x3f800000);
  *(uint *)&pCVar3->field_0x10b10 = 0;
  *(uint *)&pCVar3->field_0x10af8 = uVar4;
  iVar5 = core_actor_cpp_FUN_0040cfc0(0,0xff);
  *(uint *)&pCVar3->field_0x10b00 = 0;
  *(uint *)&pCVar3->field_0x10b14 = 0;
  *(int *)&pCVar3->field_0x10afc = iVar5;
  str1 = &g_CDemonSetPtr->field_0x14d0f0;
  *(uint *)&pCVar3->field_0x10b7c = 0;
  *(uint *)&pCVar3->field_0x10bd0 = 0;
  iVar5 = _stricmp(str1,"mine.geo");
  *(uint *)&pCVar3->field_0x10b80 = 0;
  *(uint *)&pCVar3->field_0x10be0 = 0;
  *(uint *)&pCVar3->field_0x10be4 = 0;
  *(uint *)&pCVar3->field_0x10af4 = 0;
  *(uint *)&pCVar3->field_0x259c = 0x3fc90fdb;
  *(uint *)&pCVar3->field_0x10b7c = (uint)(iVar5 == 0);
  return pCVar3;
}
