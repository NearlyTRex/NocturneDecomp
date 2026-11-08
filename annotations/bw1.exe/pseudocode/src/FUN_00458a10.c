// Name: FUN_00458a10
// Address: 00458a10
// Address Range: [[00458a10, 00458bb5]]
// Convention: unknown
// Signature: int FUN_00458a10(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00458a10(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar3 = FUN_004a0410(param_1);
  pcVar5 = (char *)0x5d7d60;
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005fe6b4;
  FUN_00569f50(iVar3 + 0x158,"@d_deputy.dfm" + 1);
  *(uint *)(iVar3 + 0x2fec) = 0x3f000000;
  pcVar6 = (char *)(iVar3 + 0xc288);
  *(uint *)(iVar3 + 0x2ff0) = 0x3f800000;
  uVar4 = _DAT_005fe69c;
  *(uint *)(iVar3 + 0xc278) = 0;
  uVar2 = _DAT_005fe6a0;
  *(uint *)(iVar3 + 0xc274) = 0;
  *(uint *)(iVar3 + 0x2ff4) = uVar4;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  uVar4 = FUN_0040cc00(0x3e99999a,0x3f800000);
  *(uint *)(iVar3 + 0xc280) = 0;
  *(uint *)(iVar3 + 0xc268) = uVar4;
  uVar4 = FUN_0040cc60(0,0xff);
  *(uint *)(iVar3 + 0xc270) = 0;
  *(uint *)(iVar3 + 0xc284) = 0;
  *(uint *)(iVar3 + 0xc2ec) = 0;
  *(uint *)(iVar3 + 0xc2f0) = 0;
  *(uint *)(iVar3 + 0xc344) = 0;
  *(uint *)(iVar3 + 0xc2f4) = 0;
  *(uint *)(iVar3 + 0xc35c) = 0;
  *(uint *)(iVar3 + 0xc360) = 0;
  *(uint *)(iVar3 + 0xc264) = 0;
  *(uint *)(iVar3 + 0x252c) = 0x40490fdb;
  *(uint *)(iVar3 + 0x2530) = 0x40490fdb;
  *(uint *)(iVar3 + 0xc27c) = 2;
  *(uint *)(iVar3 + 0xc2f8) = 0;
  *(uint *)(iVar3 + 0xc348) = 0;
  *(uint *)(iVar3 + 0xc34c) = 0;
  *(uint *)(iVar3 + 50000) = 0;
  *(uint *)(iVar3 + 0xc354) = 0;
  *(uint *)(iVar3 + 0xc358) = 0;
  *(uint *)(iVar3 + 0xc364) = 0;
  *(uint *)(iVar3 + 0xc26c) = uVar4;
  *(uint *)(iVar3 + 0xc2ec) = 0;
  return iVar3;
}
