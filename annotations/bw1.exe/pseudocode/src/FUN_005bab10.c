// Name: FUN_005bab10
// Address: 005bab10
// Address Range: [[005bab10, 005bac71]]
// Convention: unknown
// Signature: int FUN_005bab10(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005bab10(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar3 = FUN_004a0410(param_1);
  pcVar6 = (char *)0x5fa420;
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_006083c4;
  FUN_00569f50(iVar3 + 0x158,0x5fa414);
  *(uint *)(iVar3 + 0x2fec) = 0x3f000000;
  pcVar7 = (char *)(iVar3 + 0xc288);
  *(uint *)(iVar3 + 0x2ff0) = 0x3f800000;
  uVar4 = _DAT_006083ac;
  *(uint *)(iVar3 + 0xc278) = 0;
  uVar2 = _DAT_006083b0;
  *(uint *)(iVar3 + 0xc274) = 0;
  *(uint *)(iVar3 + 0x2ff4) = uVar4;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar4 = FUN_0040cc00(0x3e99999a,0x3f800000);
  *(uint *)(iVar3 + 0xc280) = 0;
  *(uint *)(iVar3 + 0xc268) = uVar4;
  uVar4 = FUN_0040cc60(0,0xff);
  *(uint *)(iVar3 + 0xc270) = 0;
  *(uint *)(iVar3 + 0xc284) = 0;
  *(uint *)(iVar3 + 0xc26c) = uVar4;
  iVar5 = 0x01E82168 + 0x14d0f0;
  *(uint *)(iVar3 + 0xc2ec) = 0;
  *(uint *)(iVar3 + 0xc340) = 0;
  iVar5 = FUN_005c04e0(iVar5,"mine.geo");
  *(uint *)(iVar3 + 0xc2f0) = 0;
  *(uint *)(iVar3 + 50000) = 0;
  *(uint *)(iVar3 + 0xc354) = 0;
  *(uint *)(iVar3 + 0xc264) = 0;
  *(uint *)(iVar3 + 0x252c) = 0x3fc90fdb;
  *(uint *)(iVar3 + 0xc2ec) = (uint)(iVar5 == 0);
  return iVar3;
}
