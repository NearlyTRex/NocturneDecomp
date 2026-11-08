// Name: FUN_00434a70
// Address: 00434a70
// Address Range: [[00434a70, 00434b02]]
// Convention: unknown
// Signature: undefined4 FUN_00434a70(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00434a70(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (-1 < iVar2) {
    if (*(int *)(param_1 + 0x30) < 0) {
      iVar2 = FUN_00434650(param_1 + 4,iVar2,param_2);
    }
    else {
      iVar2 = FUN_004346d0(param_1 + 4,iVar2,*(int *)(param_1 + 0x30),param_2);
    }
    if (iVar2 == -1) {
      *(uint *)(param_1 + 0x30) = 0xffffffff;
      return 0;
    }
    if (iVar2 < 0) {
      *(int *)(param_1 + 0x30) = -2 - iVar2;
      return 2;
    }
    *(uint *)(param_1 + 0x30) = 0xffffffff;
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar2 = FUN_004343f0(param_1 + 4,iVar2,*(int *)(param_1 + 0x28));
      if (iVar2 != 0) {
        *(uint *)(param_1 + 0x2c) = 0xffffffff;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = 0xffffffff;
    *(uint *)(param_1 + 0x28) = uVar1;
  }
  return 1;
}
