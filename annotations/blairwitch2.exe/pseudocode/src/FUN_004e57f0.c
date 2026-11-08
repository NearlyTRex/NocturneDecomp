// Name: FUN_004e57f0
// Address: 004e57f0
// Address Range: [[004e57f0, 004e58fd]]
// Convention: unknown
// Signature: void FUN_004e57f0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004e57f0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004ce100(param_1 + 0x20,0x41f00000);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      FUN_004e68c0(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      FUN_004e7580(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar1 = 0;
    do {
      FUN_004e6f20(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      FUN_004e6c40(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      FUN_004e6240(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      FUN_004e7600(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    if ((uint *)(param_1 + 0x1524) != (uint *)(param_1 + 0x14c4)) {
      *(uint *)(param_1 + 0x1524) = *(uint *)(param_1 + 0x14c4);
      *(uint *)(param_1 + 0x1528) = *(uint *)(param_1 + 0x14c8);
      *(uint *)(param_1 + 0x152c) = *(uint *)(param_1 + 0x14cc);
    }
    *(byte *)(param_1 + 0x152b) = *(byte *)(param_1 + 0x152b) ^ 0x80;
    FUN_00449280(param_1 + 0x14d0,param_1 + 0x14c4);
    FUN_00449280(param_1 + 0x1530,param_1 + 0x1524);
    FUN_004b39b0(0x01CB6900,param_1 + 0x14c4,0x3c8efa35);
  }
  return;
}
