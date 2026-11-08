// Name: FUN_00445820
// Address: 00445820
// Address Range: [[00445820, 004459b1]]
// Convention: unknown
// Signature: int FUN_00445820(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00445820(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar4 = FUN_004a0410(param_1);
  iVar4 = FUN_005c0357(iVar4 + 0xc398,0x18,0x5fcd90);
  pcVar5 = (char *)0x5d6d17;
  *(byte ***)(iVar4 + -0xc244) = &PTR_FUN_005fddd4;
  FUN_00569f50(iVar4 + -0xc240,"construct1.dfm");
  uVar2 = _DAT_005fddc0;
  pcVar7 = (char *)(iVar4 + -0x130);
  *(uint *)(iVar4 + -0x93ac) = 0x3f19999a;
  uVar3 = _DAT_005fddc4;
  *(uint *)(iVar4 + -0x93a8) = 0x40000000;
  *(uint *)(iVar4 + -0x93a4) = uVar2;
  *(uint *)(iVar4 + -0x93a0) = uVar3;
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
  FUN_005bfb70(iVar4,0,0x6c0);
  *(uint *)(iVar4 + -0x13c) = 0x40c00000;
  *(uint *)(iVar4 + 0x6c4) = 0;
  *(uint *)(iVar4 + -4) = 0;
  *(uint *)(iVar4 + -0x94) = 0;
  *(uint *)(iVar4 + -0x90) = 0;
  *(uint *)(iVar4 + -0x8c) = 0;
  *(uint *)(iVar4 + -0x88) = 0;
  *(uint *)(iVar4 + -0x84) = 0;
  *(uint *)(iVar4 + -0x80) = 0;
  *(uint *)(iVar4 + -0x7c) = 0;
  *(uint *)(iVar4 + -0x78) = 0;
  return iVar4 + -0xc398;
}
