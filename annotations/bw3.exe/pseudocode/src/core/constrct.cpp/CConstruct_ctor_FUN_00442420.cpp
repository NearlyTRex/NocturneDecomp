// Name: core_constrct.cpp_CConstruct_ctor_FUN_00442420
// Address: 00442420
// Address Range: [[00442420, 004425ed]]
// Convention: unknown
// Signature: CConstruct * core_constrct_cpp_CConstruct_ctor_FUN_00442420(CConstruct *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CConstruct * core_constrct_cpp_CConstruct_ctor_FUN_00442420(CConstruct *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CEnemy *pCVar4;
  void *dest;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  dest = (void *)__arrinit
                           (&pCVar4[1].field_0x130,0x18,&g_SBoneGuyBoxTypeInfo);
  pcVar5 = (char *)0x5b941e;
  *(byte ***)((int)dest + -0xd030) = &g_CConstructVTable;
  core_skeleton_cpp_FUN_0054eae0((int)dest + -0xd02c,"construct1.dfm");
  uVar2 = _DAT_005dd6f0;
  pcVar7 = (char *)((int)dest + -0x130);
  *(uint *)((int)dest + -0x9f18) = 0x3f19999a;
  uVar3 = _DAT_005dd6f4;
  *(uint *)((int)dest + -0x9f14) = 0x40000000;
  *(uint *)((int)dest + -0x9f10) = uVar2;
  *(uint *)((int)dest + -0x9f0c) = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar6 = (char *)0x5b9423;
  pcVar7 = (char *)((int)dest + -0x70);
  pcVar5 = pcVar7;
  do {
    cVar1 = *pcVar6;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)dest + -0xc) = 0x41000000;
  *(uint *)((int)dest + 0x6c0) = 0;
  pcVar5 = "ConstructDie";
  *(uint *)((int)dest + -0x74) = 2;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)dest + -4) = 0;
  memset(dest,0,0x6c0);
  *(uint *)((int)dest + -0x32c) = 0x40c00000;
  *(uint *)((int)dest + 0x6cc) = 0;
  *(uint *)((int)dest + -4) = 0;
  *(uint *)((int)dest + -0x94) = 0;
  *(uint *)((int)dest + -0x90) = 0;
  *(uint *)((int)dest + -0x8c) = 0;
  *(uint *)((int)dest + -0x88) = 0;
  *(uint *)((int)dest + -0x84) = 0;
  *(uint *)((int)dest + -0x80) = 0;
  *(uint *)((int)dest + -0x7c) = 0;
  *(uint *)((int)dest + -0x78) = 0;
  *(uint *)((int)dest + -0xac4c) = 0x42340000;
  *(uint *)((int)dest + -0x328) = 0x41200000;
  *(uint *)((int)dest + -0x324) = 0x41200000;
  *(uint *)((int)dest + 0x6d8) = 1;
  *(uint *)((int)dest + 0x6c4) = 0xffffffff;
  *(uint *)((int)dest + 0x6c8) = 0;
  return (CConstruct *)((int)dest + -0xd184);
}
