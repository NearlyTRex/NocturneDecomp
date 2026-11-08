// Name: FUN_00591f10
// Address: 00591f10
// Address Range: [[00591f10, 00591fe4]]
// Convention: unknown
// Signature: int FUN_00591f10(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00591f10(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_004a0410(param_1);
  iVar4 = FUN_00567370(iVar4 + 0xc268);
  iVar4 = FUN_00441c60(iVar4 + 0x23a4);
  iVar4 = FUN_00522fa0(iVar4 + 0x1cc);
  *(byte ***)(iVar4 + -0xe684) = &PTR_FUN_00606284;
  FUN_00569f50(iVar4 + -0xe680,"succubus.dfm");
  pcVar5 = "hdwing.cth";
  pcVar6 = (char *)(iVar4 + -0x1c8);
  FUN_00569f50(iVar4 + -0x2570,"hotdemon.dfm");
  *(uint *)(iVar4 + -0xb7ec) = 0x3f19999a;
  uVar2 = _DAT_0060626c;
  *(uint *)(iVar4 + -0xb7e8) = 0x3f666666;
  uVar3 = _DAT_00606270;
  *(uint *)(iVar4 + -0x1cc) = 1;
  *(uint *)(iVar4 + -0xb7e4) = uVar2;
  *(uint *)(iVar4 + -0xb7e0) = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return iVar4 + -0xe7d8;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return iVar4 + -0xe7d8;
}
