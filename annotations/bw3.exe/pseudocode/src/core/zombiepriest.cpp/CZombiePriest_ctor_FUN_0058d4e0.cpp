// Name: core_zombiepriest.cpp_CZombiePriest_ctor_FUN_0058d4e0
// Address: 0058d4e0
// Address Range: [[0058d4e0, 0058d5dd]]
// Convention: unknown
// Signature: CZombiePriest * core_zombiepriest_cpp_CZombiePriest_ctor_FUN_0058d4e0(CZombiePriest *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombiePriest * core_zombiepriest_cpp_CZombiePriest_ctor_FUN_0058d4e0(CZombiePriest *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CZombiePriest *pCVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = (CZombiePriest *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  ((UActorVTable *)&pCVar4->field_0x154)->_ub = &g_CZombiePriestVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)&pCVar4->field_0x158,"?bwp3_zombpriest.dfm" + 1);
  uVar2 = _DAT_005e7050;
  *(uint *)&pCVar4->field_0x326c = 0x3f19999a;
  uVar3 = _DAT_005e7054;
  *(uint *)&pCVar4->field_0x3270 = 0x3f666666;
  *(uint *)&pCVar4->field_0x3274 = uVar2;
  *(uint *)&pCVar4->field_0x3278 = uVar3;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0xff);
  *(uint *)&pCVar4->field_0xd058 = 0;
  *(uint *)&pCVar4->field_0xd05c = 0;
  *(uint *)&pCVar4->field_0xd060 = 0;
  *(uint *)&pCVar4->field_0xd10c = 0;
  *(uint *)&pCVar4->field_0xd110 = 0;
  *(uint *)&pCVar4->field_0xce58 = 0x42200000;
  *(uint *)&pCVar4->field_0xd064 = 0;
  pcVar6 = (char *)0x5d8a1c;
  *(uint *)&pCVar4->field_0xd068 = 0;
  *(uint *)&pCVar4->field_0xd06c = 0;
  pcVar7 = &pCVar4->field_0xd070;
  *(int *)&pCVar4->field_0xd054 = iVar5;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar4->field_0xd050 = 0;
  return pCVar4;
}
