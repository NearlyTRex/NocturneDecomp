// Name: FUN_0051c7d0
// Address: 0051c7d0
// Address Range: [[0051c7d0, 0051c907]]
// Convention: unknown
// Signature: int FUN_0051c7d0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0051c7d0(uint param_1)

{
  char cVar1;
  uint uVar2;
  byte uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar4 = FUN_004a0410(param_1);
  *(byte ***)(iVar4 + 0x154) = &PTR_FUN_00603d74;
  FUN_00569f50(iVar4 + 0x158,"mobster1.dfm");
  uVar5 = _DAT_00603d60;
  *(uint *)(iVar4 + 0x2fec) = 0x3f19999a;
  uVar2 = _DAT_00603d64;
  *(uint *)(iVar4 + 0x2ff0) = 0x3f666666;
  *(uint *)(iVar4 + 0x2ff4) = uVar5;
  *(uint *)(iVar4 + 0x2ff8) = uVar2;
  uVar5 = FUN_0040cc60(0,0xff);
  *(uint *)(iVar4 + 0xc26c) = 0;
  *(uint *)(iVar4 + 0xc270) = 0;
  *(uint *)(iVar4 + 0xc274) = 0;
  *(uint *)(iVar4 + 0xc338) = 0;
  *(uint *)(iVar4 + 0xc33c) = 0;
  *(uint *)(iVar4 + 0xc25c) = 0x42200000;
  *(uint *)(iVar4 + 0xc268) = uVar5;
  uVar3 = FUN_0040cc60(0x62,0x65);
  *(uint *)(iVar4 + 0xc280) = 0;
  *(uint *)(iVar4 + 0xc278) = 0;
  *(uint *)(iVar4 + 0xc284) = 0;
  *(uint *)(iVar4 + 0xc288) = 0;
  *(uint *)(iVar4 + 0xc28c) = 0;
  pcVar6 = "none";
  *(uint *)(iVar4 + 0xc290) = 0;
  *(uint *)(iVar4 + 0xc294) = 0;
  pcVar7 = (char *)(iVar4 + 0xc298);
  *(byte *)(iVar4 + 0xc27c) = uVar3;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + 0xc264) = 0;
  return iVar4;
}
