// Name: FUN_00442420
// Address: 00442420
// Address Range: [[00442420, 004425ed]]
// Convention: unknown
// Signature: int FUN_00442420(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00442420(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar4 = FUN_00488fd0(param_1);
  iVar4 = FUN_005a30d7(iVar4 + 0xd184,0x18,0x5dc830);
  pcVar5 = (char *)0x5b941e;
  *(byte ***)(iVar4 + -0xd030) = &PTR_FUN_005dd704;
  FUN_0054eae0(iVar4 + -0xd02c,"construct1.dfm");
  uVar2 = _DAT_005dd6f0;
  pcVar7 = (char *)(iVar4 + -0x130);
  *(uint *)(iVar4 + -0x9f18) = 0x3f19999a;
  uVar3 = _DAT_005dd6f4;
  *(uint *)(iVar4 + -0x9f14) = 0x40000000;
  *(uint *)(iVar4 + -0x9f10) = uVar2;
  *(uint *)(iVar4 + -0x9f0c) = uVar3;
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
  pcVar7 = (char *)(iVar4 + -0x70);
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
  *(uint *)(iVar4 + -0xc) = 0x41000000;
  *(uint *)(iVar4 + 0x6c0) = 0;
  pcVar5 = "ConstructDie";
  *(uint *)(iVar4 + -0x74) = 2;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + -4) = 0;
  FUN_005a28f0(iVar4,0,0x6c0);
  *(uint *)(iVar4 + -0x32c) = 0x40c00000;
  *(uint *)(iVar4 + 0x6cc) = 0;
  *(uint *)(iVar4 + -4) = 0;
  *(uint *)(iVar4 + -0x94) = 0;
  *(uint *)(iVar4 + -0x90) = 0;
  *(uint *)(iVar4 + -0x8c) = 0;
  *(uint *)(iVar4 + -0x88) = 0;
  *(uint *)(iVar4 + -0x84) = 0;
  *(uint *)(iVar4 + -0x80) = 0;
  *(uint *)(iVar4 + -0x7c) = 0;
  *(uint *)(iVar4 + -0x78) = 0;
  *(uint *)(iVar4 + -0xac4c) = 0x42340000;
  *(uint *)(iVar4 + -0x328) = 0x41200000;
  *(uint *)(iVar4 + -0x324) = 0x41200000;
  *(uint *)(iVar4 + 0x6d8) = 1;
  *(uint *)(iVar4 + 0x6c4) = 0xffffffff;
  *(uint *)(iVar4 + 0x6c8) = 0;
  return iVar4 + -0xd184;
}
