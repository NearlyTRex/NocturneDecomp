// Name: FUN_00504400
// Address: 00504400
// Address Range: [[00504400, 0050450d]]
// Convention: unknown
// Signature: void FUN_00504400(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00504400(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004ea6f0(param_1 + 0x20,0x41f00000);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      FUN_00505560(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      FUN_00506220(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar1 = 0;
    do {
      FUN_00505bc0(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      FUN_005058e0(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      FUN_00504ee0(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      FUN_005062a0(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    if ((uint *)(param_1 + 0x13c8) != (uint *)(param_1 + 0x1368)) {
      *(uint *)(param_1 + 0x13c8) = *(uint *)(param_1 + 0x1368);
      *(uint *)(param_1 + 0x13cc) = *(uint *)(param_1 + 0x136c);
      *(uint *)(param_1 + 0x13d0) = *(uint *)(param_1 + 0x1370);
    }
    *(byte *)(param_1 + 0x13cf) = *(byte *)(param_1 + 0x13cf) ^ 0x80;
    FUN_0045f3e0(param_1 + 0x1374,param_1 + 0x1368);
    FUN_0045f3e0(param_1 + 0x13d4,param_1 + 0x13c8);
    FUN_004cc9a0(0x01CCF390,param_1 + 0x1368,0x3c8efa35);
  }
  return;
}
