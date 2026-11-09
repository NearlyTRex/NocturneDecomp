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
  CZombie *pCVar3;
  uint uVar4;
  int iVar5;
  byte *str1;
  char *pcVar6;
  char *pcVar7;
  
  pCVar3 = (CZombie *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  pcVar6 = (char *)0x5fa420;
  *(byte ***)&pCVar3->field_0x154 = &g_CZombieVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar3->field_0x158,0x5fa414);
  *(uint *)&pCVar3->field_0x2fec = 0x3f000000;
  pcVar7 = &pCVar3->field_0xc288;
  *(uint *)&pCVar3->field_0x2ff0 = 0x3f800000;
  uVar4 = _DAT_006083ac;
  *(uint *)&pCVar3->field_0xc278 = 0;
  uVar2 = _DAT_006083b0;
  *(uint *)&pCVar3->field_0xc274 = 0;
  *(uint *)&pCVar3->field_0x2ff4 = uVar4;
  *(uint *)&pCVar3->field_0x2ff8 = uVar2;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar4 = core_actor_cpp_FUN_0040cc00(0x3e99999a,0x3f800000);
  *(uint *)&pCVar3->field_0xc280 = 0;
  *(uint *)&pCVar3->field_0xc268 = uVar4;
  iVar5 = core_actor_cpp_FUN_0040cc60(0,0xff);
  *(uint *)&pCVar3->field_0xc270 = 0;
  *(uint *)&pCVar3->field_0xc284 = 0;
  *(int *)&pCVar3->field_0xc26c = iVar5;
  str1 = &g_CDemonSetPtr->field_0x14d0f0;
  *(uint *)&pCVar3->field_0xc2ec = 0;
  *(uint *)&pCVar3->field_0xc340 = 0;
  iVar5 = _stricmp(str1,"mine.geo");
  *(uint *)&pCVar3->field_0xc2f0 = 0;
  *(uint *)&pCVar3->field_0xc350 = 0;
  *(uint *)&pCVar3->field_0xc354 = 0;
  *(uint *)&pCVar3->field_0xc264 = 0;
  *(uint *)&pCVar3->field_0x252c = 0x3fc90fdb;
  *(uint *)&pCVar3->field_0xc2ec = (uint)(iVar5 == 0);
  return pCVar3;
}
