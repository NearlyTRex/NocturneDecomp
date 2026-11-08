// Name: FUN_004149f0
// Address: 004149f0
// Address Range: [[004149f0, 00414aac]]
// Convention: unknown
// Signature: int FUN_004149f0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004149f0(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_004a0410(param_1);
  iVar4 = FUN_00468860(iVar4 + 0xc268);
  iVar4 = FUN_00522fa0(iVar4 + 0x184);
  *(byte ***)(iVar4 + -0xc298) = &PTR_FUN_005fc5d4;
  FUN_00569f50(iVar4 + -0xc294,0x5d3c07);
  pcVar5 = "bigAlien";
  pcVar6 = (char *)(iVar4 + 0xc2c);
  FUN_00468950(iVar4 + -0x184,"question.kfm");
  uVar2 = _DAT_005fc5b8;
  *(uint *)(iVar4 + -0x9400) = 0x3f19999a;
  uVar3 = _DAT_005fc5bc;
  *(uint *)(iVar4 + -0x93fc) = 0x3f666666;
  *(uint *)(iVar4 + -0x93f8) = uVar2;
  *(uint *)(iVar4 + -0x93f4) = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return iVar4 + -0xc3ec;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return iVar4 + -0xc3ec;
}
