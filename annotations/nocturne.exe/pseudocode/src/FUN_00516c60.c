// Name: FUN_00516c60
// Address: 00516c60
// Address Range: [[00516c60, 00516d7e]]
// Convention: unknown
// Signature: void FUN_00516c60(int param_1)

#include "nocturne.h"

void FUN_00516c60(int param_1)

{
  uint *puVar1;
  float *pfVar2;
  byte auStack_44 [24];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FUN_00454510(param_1 + 0x150);
  FUN_00409fc0(param_1);
  pfVar2 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_44);
  if (&fStack_2c != pfVar2) {
    fStack_2c = *pfVar2;
    fStack_28 = pfVar2[1];
    fStack_24 = pfVar2[2];
  }
  if (&fStack_20 != pfVar2 + 3) {
    fStack_20 = pfVar2[3];
    fStack_1c = pfVar2[4];
    fStack_18 = pfVar2[5];
  }
  fStack_14 = fStack_20 - fStack_2c;
  fStack_10 = fStack_1c - fStack_28;
  fStack_c = fStack_18 - fStack_24;
  puVar1 = (uint *)(param_1 + 0x20);
  FUN_0041a6e0(param_1 + 0x350,puVar1,param_1 + 0x30,&fStack_14,*(uint *)(param_1 + 0x2d0));
  if ((uint *)(param_1 + 0x5ac) != puVar1) {
    *(uint *)(param_1 + 0x5ac) = *puVar1;
    *(uint *)(param_1 + 0x5b0) = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x5b4) = *(uint *)(param_1 + 0x28);
  }
  if ((uint *)(param_1 + 0x5b8) != (uint *)(param_1 + 0x30)) {
    *(uint *)(param_1 + 0x5b8) = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x5bc) = *(uint *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x5c0) = *(uint *)(param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0x2cc) != 1) {
    return;
  }
  *(uint *)(param_1 + 0x5a4) = 0;
  return;
}
