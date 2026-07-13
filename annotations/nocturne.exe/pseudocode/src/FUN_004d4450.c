// Name: FUN_004d4450
// Address: 004d4450
// Address Range: [[004d4450, 004d4536]]
// Convention: unknown
// Signature: int FUN_004d4450(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d4450(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_00479560(param_1);
  iVar4 = FUN_00435100(iVar4 + 0xbdec);
  iVar4 = FUN_004e0050(iVar4 + 0x3ab60);
  *(byte ***)(iVar4 + -0x46800) = &PTR_FUN_005a05f4;
  *(uint *)(iVar4 + -0x43b78) = 0x3f000000;
  pcVar5 = &DAT_0058923e;
  *(uint *)(iVar4 + -0x43b74) = 0x3f800000;
  uVar2 = _DAT_005a05dc;
  *(byte *)(iVar4 + -0x3ac28) = 0;
  uVar3 = _DAT_005a05e0;
  *(byte *)(iVar4 + -0x3abc4) = 0;
  *(uint *)(iVar4 + -0x43b70) = uVar2;
  *(uint *)(iVar4 + -0x43b6c) = uVar3;
  *(uint *)(iVar4 + -0x30) = 0;
  pcVar6 = (char *)(iVar4 + -0x28);
  *(uint *)(iVar4 + -0x2c) = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + 0xc30) = 0;
  *(uint *)(iVar4 + 0xc2c) = 0xbf800000;
  *(uint *)(iVar4 + -0x46844) = 0x10000;
  *(uint *)(iVar4 + -0x46840) = 0x10000;
  *(uint *)(iVar4 + -0x4683c) = 0x10000;
  return iVar4 + -0x4694c;
}
