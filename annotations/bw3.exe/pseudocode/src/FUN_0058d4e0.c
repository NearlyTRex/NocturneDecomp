// Name: FUN_0058d4e0
// Address: 0058d4e0
// Address Range: [[0058d4e0, 0058d5dd]]
// Convention: unknown
// Signature: int FUN_0058d4e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0058d4e0(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar3 = FUN_00488fd0(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005e7064;
  FUN_0054eae0(iVar3 + 0x158,"?bwp3_zombpriest.dfm" + 1);
  uVar4 = _DAT_005e7050;
  *(uint *)(iVar3 + 0x326c) = 0x3f19999a;
  uVar2 = _DAT_005e7054;
  *(uint *)(iVar3 + 0x3270) = 0x3f666666;
  *(uint *)(iVar3 + 0x3274) = uVar4;
  *(uint *)(iVar3 + 0x3278) = uVar2;
  uVar4 = FUN_0040cea0(0,0xff);
  *(uint *)(iVar3 + 0xd058) = 0;
  *(uint *)(iVar3 + 0xd05c) = 0;
  *(uint *)(iVar3 + 0xd060) = 0;
  *(uint *)(iVar3 + 0xd10c) = 0;
  *(uint *)(iVar3 + 0xd110) = 0;
  *(uint *)(iVar3 + 0xce58) = 0x42200000;
  *(uint *)(iVar3 + 0xd064) = 0;
  pcVar5 = (char *)0x5d8a1c;
  *(uint *)(iVar3 + 0xd068) = 0;
  *(uint *)(iVar3 + 0xd06c) = 0;
  pcVar6 = (char *)(iVar3 + 0xd070);
  *(uint *)(iVar3 + 0xd054) = uVar4;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar3 + 0xd050) = 0;
  return iVar3;
}
