// Name: FUN_0043c9a0
// Address: 0043c9a0
// Address Range: [[0043c9a0, 0043cbbd]]
// Convention: unknown
// Signature: void FUN_0043c9a0(int param_1)

#include "nocturne.h"

void FUN_0043c9a0(int param_1)

{
  int iVar1;
  byte auStack_24 [4];
  float fStack_20;
  float fStack_14;
  uint local_c;
  uint uStack_8;
  
  if (*(int *)(param_1 + 0x2cc) != 0) {
    *(uint *)(param_1 + 0x2d4) = 0;
    return;
  }
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0x28);
  *(uint *)(param_1 + 0xe8) = 0;
  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe8);
  *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xe4);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0xec) + *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0xf0) + *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0xf4) + *(float *)(param_1 + 0x38);
  *(uint *)(param_1 + 0xf4) = 0;
  *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf4);
  *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0xf0);
  if (((((*(float *)(param_1 + 0x2d8) == *(float *)(param_1 + 0x20)) &&
        (*(float *)(param_1 + 0x2dc) == *(float *)(param_1 + 0x24))) &&
       (*(float *)(param_1 + 0x2e0) == *(float *)(param_1 + 0x28))) &&
      ((*(float *)(param_1 + 0x2e4) == *(float *)(param_1 + 0x30) &&
       (*(float *)(param_1 + 0x2e8) == *(float *)(param_1 + 0x34))))) &&
     (*(float *)(param_1 + 0x2ec) == *(float *)(param_1 + 0x38))) {
    local_c = *(uint *)(param_1 + 0x2f0);
  }
  else {
    local_c = (**(code **)(*(int *)(param_1 + 0x14c) + 0x38))
                        (param_1,*(uint *)(param_1 + 0x2d0),0);
    if ((uint *)(param_1 + 0x2d8) != (uint *)(param_1 + 0x20)) {
      *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x2dc) = *(uint *)(param_1 + 0x24);
      *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x28);
    }
    if ((uint *)(param_1 + 0x2e4) != (uint *)(param_1 + 0x30)) {
      *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x2e8) = *(uint *)(param_1 + 0x34);
      *(uint *)(param_1 + 0x2ec) = *(uint *)(param_1 + 0x38);
    }
    *(uint *)(param_1 + 0x2f0) = local_c;
    uStack_8 = local_c;
  }
  if ((*(int *)(param_1 + 0x2d4) == 0) && (*(int *)(param_1 + 0xdc) != 0)) {
    *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0xdc);
  }
  iVar1 = *(int *)(param_1 + 0x2d4);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xdc) = iVar1;
    *(uint *)(param_1 + 0x20) = *(uint *)(iVar1 + 0x20);
    *(uint *)(param_1 + 0x24) = *(uint *)(iVar1 + 0x24);
    *(uint *)(param_1 + 0x28) = *(uint *)(iVar1 + 0x28);
    *(uint *)(param_1 + 0x2c) = *(uint *)(iVar1 + 0x2c);
    iVar1 = *(int *)(param_1 + 0xdc);
    if ((uint *)(param_1 + 0x30) != (uint *)(iVar1 + 0x30)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(iVar1 + 0x30);
      *(uint *)(param_1 + 0x34) = *(uint *)(iVar1 + 0x34);
      *(uint *)(param_1 + 0x38) = *(uint *)(iVar1 + 0x38);
    }
    (**(code **)(*(int *)(*(int *)(param_1 + 0xdc) + 0x14c) + 0x14))
              (*(int *)(param_1 + 0xdc),auStack_24);
    *(float *)(param_1 + 0x24) = (fStack_14 - fStack_20) + *(float *)(param_1 + 0x24);
    FUN_0040a000(param_1);
    return;
  }
  *(uint *)(param_1 + 0x24) = local_c;
  FUN_0040a000(param_1);
  return;
}
