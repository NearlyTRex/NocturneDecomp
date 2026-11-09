// Name: core_constrct.cpp_CConstruct_ctor_FUN_00445820
// Address: 00445820
// Address Range: [[00445820, 004459b1]]
// Convention: unknown
// Signature: CConstruct * core_constrct_cpp_CConstruct_ctor_FUN_00445820(CConstruct *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CConstruct * core_constrct_cpp_CConstruct_ctor_FUN_00445820(CConstruct *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CEnemy *pCVar4;
  void *dest;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  dest = (void *)__arrinit
                           (&pCVar4[1].field_0x130,0x18,&g_SBoneGuyBoxTypeInfo);
  pcVar5 = (char *)0x5d6d17;
  *(byte ***)((int)dest + -0xc244) = &g_CConstructVTable;
  core_skeleton_cpp_FUN_00569f50((int)dest + -0xc240,"construct1.dfm");
  uVar2 = _DAT_005fddc0;
  pcVar7 = (char *)((int)dest + -0x130);
  *(uint *)((int)dest + -0x93ac) = 0x3f19999a;
  uVar3 = _DAT_005fddc4;
  *(uint *)((int)dest + -0x93a8) = 0x40000000;
  *(uint *)((int)dest + -0x93a4) = uVar2;
  *(uint *)((int)dest + -0x93a0) = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar6 = (char *)0x5d6d1c;
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
  *(uint *)((int)dest + -0x13c) = 0x40c00000;
  *(uint *)((int)dest + 0x6c4) = 0;
  *(uint *)((int)dest + -4) = 0;
  *(uint *)((int)dest + -0x94) = 0;
  *(uint *)((int)dest + -0x90) = 0;
  *(uint *)((int)dest + -0x8c) = 0;
  *(uint *)((int)dest + -0x88) = 0;
  *(uint *)((int)dest + -0x84) = 0;
  *(uint *)((int)dest + -0x80) = 0;
  *(uint *)((int)dest + -0x7c) = 0;
  *(uint *)((int)dest + -0x78) = 0;
  return (CConstruct *)((int)dest + -0xc398);
}
