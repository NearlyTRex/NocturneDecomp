// Name: FUN_00414d10
// Address: 00414d10
// Address Range: [[00414d10, 00414dcc]]
// Convention: unknown
// Signature: int FUN_00414d10(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00414d10(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_00487db0(param_1);
  iVar4 = FUN_0044fc80(iVar4 + 0x10af8);
  iVar4 = FUN_005b6e60(iVar4 + 0x184);
  *(uint *)(iVar4 + -0x109cc) = 0x5f3524;
  FUN_005478b0(iVar4 + -0x109c8,0x5cbc8c);
  pcVar5 = "bigAlien";
  pcVar6 = (char *)(iVar4 + 0xc2c);
  FUN_0044fd70(iVar4 + -0x184,"question.kfm");
  uVar2 = _DAT_005f3508;
  *(uint *)(iVar4 + -0xd84c) = 0x3f19999a;
  uVar3 = _DAT_005f350c;
  *(uint *)(iVar4 + -0xd848) = 0x3f666666;
  *(uint *)(iVar4 + -0xd844) = uVar2;
  *(uint *)(iVar4 + -0xd840) = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return iVar4 + -0x10c7c;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return iVar4 + -0x10c7c;
}
