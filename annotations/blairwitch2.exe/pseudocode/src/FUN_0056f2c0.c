// Name: FUN_0056f2c0
// Address: 0056f2c0
// Address Range: [[0056f2c0, 0056f394]]
// Convention: unknown
// Signature: int FUN_0056f2c0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0056f2c0(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_00487db0(param_1);
  iVar4 = FUN_00544cd0(iVar4 + 0x10af8);
  iVar4 = FUN_005b1440(iVar4 + 0x22b4);
  iVar4 = FUN_005b6e60(iVar4 + 0x1cc);
  *(uint *)(iVar4 + -77000) = 0x5fc3e4;
  FUN_005478b0(iVar4 + -0x12cc4,"succubus.dfm");
  pcVar5 = "hdwing.cth";
  pcVar6 = (char *)(iVar4 + -0x1c8);
  FUN_005478b0(iVar4 + -0x2480,"hotdemon.dfm");
  *(uint *)(iVar4 + -0xfb48) = 0x3f19999a;
  uVar2 = _DAT_005fc3cc;
  *(uint *)(iVar4 + -0xfb44) = 0x3f666666;
  uVar3 = _DAT_005fc3d0;
  *(uint *)(iVar4 + -0x1cc) = 1;
  *(uint *)(iVar4 + -0xfb40) = uVar2;
  *(uint *)(iVar4 + -0xfb3c) = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return iVar4 + -0x12f78;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return iVar4 + -0x12f78;
}
