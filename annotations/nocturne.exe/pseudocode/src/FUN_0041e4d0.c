// Name: FUN_0041e4d0
// Address: 0041e4d0
// Address Range: [[0041e4d0, 0041e5d6]]
// Convention: unknown
// Signature: void FUN_0041e4d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e4d0(int param_1)

{
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  byte auStack_34 [12];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  *(uint *)(param_1 + 0x5e0) = 0;
  if ((0.0 < *(float *)(param_1 + 0x388)) && (*(byte **)(param_1 + 0x68) == &DAT_0078a123)) {
    if (*(int *)(param_1 + 0x2c8) != 0) {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&fStack_4c);
      fStack_1c = fStack_4c + fStack_40;
      fStack_18 = fStack_48 + fStack_3c;
      fStack_28 = fStack_1c * _DAT_00579809;
      fStack_24 = fStack_18 * _DAT_00579809;
      fStack_14 = fStack_44 + fStack_38;
      fStack_20 = fStack_14 * _DAT_00579809;
      FUN_0040a240(param_1,auStack_34,&fStack_28);
      fStack_10 = fStack_40 - fStack_4c;
      fStack_c = fStack_3c - fStack_48;
      fStack_8 = fStack_38 - fStack_44;
      FUN_0041a6e0(param_1 + 0x38c,auStack_34,param_1 + 0x30,&fStack_10,
                   *(uint *)(param_1 + 0x388));
      return;
    }
    *(uint *)(param_1 + 0x5e0) = 0xffffffff;
  }
  return;
}
