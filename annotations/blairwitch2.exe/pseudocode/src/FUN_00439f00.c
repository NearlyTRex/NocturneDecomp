// Name: FUN_00439f00
// Address: 00439f00
// Address Range: [[00439f00, 0043a12b]]
// Convention: unknown
// Signature: void FUN_00439f00(int param_1)

#include "nocturne.h"

void FUN_00439f00(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint uStack_24;
  float fStack_20;
  float fStack_14;
  uint uStack_c;
  uint uStack_8;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x430) != 0) {
    *(uint *)(param_1 + 0x438) = 0;
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
  if (((((*(float *)(param_1 + 0x43c) == *(float *)(param_1 + 0x20)) &&
        (*(float *)(param_1 + 0x440) == *(float *)(param_1 + 0x24))) &&
       (*(float *)(param_1 + 0x444) == *(float *)(param_1 + 0x28))) &&
      ((*(float *)(param_1 + 0x448) == *(float *)(param_1 + 0x30) &&
       (*(float *)(param_1 + 0x44c) == *(float *)(param_1 + 0x34))))) &&
     (*(float *)(param_1 + 0x450) == *(float *)(param_1 + 0x38))) {
    uStack_c = *(uint *)(param_1 + 0x454);
  }
  else {
    uStack_c = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x48))
                         (param_1,*(uint *)(param_1 + 0x434),0);
    if ((uint *)(param_1 + 0x43c) != (uint *)(param_1 + 0x20)) {
      *(uint *)(param_1 + 0x43c) = *(uint *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x440) = *(uint *)(param_1 + 0x24);
      *(uint *)(param_1 + 0x444) = *(uint *)(param_1 + 0x28);
    }
    if ((uint *)(param_1 + 0x448) != (uint *)(param_1 + 0x30)) {
      *(uint *)(param_1 + 0x448) = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x44c) = *(uint *)(param_1 + 0x34);
      *(uint *)(param_1 + 0x450) = *(uint *)(param_1 + 0x38);
    }
    *(uint *)(param_1 + 0x454) = uStack_c;
    uStack_8 = uStack_c;
  }
  if ((*(int *)(param_1 + 0x438) == 0) && (*(int *)(param_1 + 0xdc) != 0)) {
    *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0xdc);
  }
  iVar1 = *(int *)(param_1 + 0x438);
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
    (**(code **)(*(int *)(*(int *)(param_1 + 0xdc) + 0x2b0) + 0x24))(*(int *)(param_1 + 0xdc));
    puVar2 = auStack_3c;
    puVar3 = &uStack_24;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    *(float *)(param_1 + 0x24) = (fStack_14 - fStack_20) + *(float *)(param_1 + 0x24);
    FUN_00408ae0(param_1);
    return;
  }
  *(uint *)(param_1 + 0x24) = uStack_c;
  FUN_00408ae0(param_1);
  return;
}
