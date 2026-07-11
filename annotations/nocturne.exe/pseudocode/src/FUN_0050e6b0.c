// Name: FUN_0050e6b0
// Address: 0050e6b0
// Address Range: [[0050e6b0, 0050e81f]]
// Convention: unknown
// Signature: void FUN_0050e6b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050e6b0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(uint *)(param_1 + 0x150bf4) = 0;
  *(uint *)(param_1 + 0x152b38) = 0;
  *(uint *)(param_1 + 0x154a7c) = 0;
  *(uint *)(param_1 + 0x158904) = 0;
  *(uint *)(param_1 + 0x14ecb0) = 0;
  iVar4 = 0;
  iVar5 = param_1;
  if (0 < *(int *)(param_1 + 0x14cd6c)) {
    do {
      iVar1 = *(int *)(iVar5 + 0x14cd70);
      if ((*(int *)(iVar1 + 0xfc) != 0) || (*(int *)(iVar1 + 0xf8) != 0)) {
        *(int *)(param_1 + 0x158908 + *(int *)(param_1 + 0x158904) * 4) = iVar1;
        *(int *)(param_1 + 0x158904) = *(int *)(param_1 + 0x158904) + 1;
      }
      uVar2 = FUN_0040d890(iVar1,DAT_00765a98);
      *(uint *)(param_1 + 0x14ecb4 + *(int *)(param_1 + 0x14ecb0) * 4) = uVar2;
      uVar2 = _DAT_01bcdef4;
      if (*(int *)(param_1 + 0x14ecb4 + *(int *)(param_1 + 0x14ecb0) * 4) == 0) {
        uVar2 = FUN_0040d890(iVar1,_DAT_02ddf54c);
        *(uint *)(param_1 + 0x154a80 + *(int *)(param_1 + 0x154a7c) * 4) = uVar2;
        if (*(int *)(param_1 + 0x154a80 + *(int *)(param_1 + 0x154a7c) * 4) != 0) {
          *(int *)(param_1 + 0x154a7c) = *(int *)(param_1 + 0x154a7c) + 1;
        }
        iVar3 = FUN_0040d890(iVar1,_DAT_02dd10bc);
        if (((iVar3 != 0) && (*(int *)(iVar3 + 0x16c) == 4)) && (*(int *)(iVar3 + 0x2f8) != 0))
        goto LAB_0050e795;
      }
      else {
        *(int *)(param_1 + 0x14ecb0) = *(int *)(param_1 + 0x14ecb0) + 1;
        uVar2 = FUN_0040d890(iVar1,uVar2);
        *(uint *)(param_1 + 0x150bf8 + *(int *)(param_1 + 0x150bf4) * 4) = uVar2;
        if (*(int *)(param_1 + 0x150bf8 + *(int *)(param_1 + 0x150bf4) * 4) != 0) {
          *(int *)(param_1 + 0x150bf4) = *(int *)(param_1 + 0x150bf4) + 1;
LAB_0050e795:
          *(int *)(param_1 + 0x152b3c + *(int *)(param_1 + 0x152b38) * 4) = iVar1;
          *(int *)(param_1 + 0x152b38) = *(int *)(param_1 + 0x152b38) + 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x14cd6c));
  }
  return;
}
