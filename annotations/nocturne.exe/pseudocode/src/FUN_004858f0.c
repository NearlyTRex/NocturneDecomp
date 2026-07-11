// Name: FUN_004858f0
// Address: 004858f0
// Address Range: [[004858f0, 00485990]]
// Convention: unknown
// Signature: void FUN_004858f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,undefined4 *param_6,int param_7,int param_8,int param_9,undefined4 param_10,undefined4 param_11)

#include "nocturne.h"

void FUN_004858f0(uint *param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,uint *param_6,int param_7,int param_8,int param_9,uint param_10,uint param_11)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  if (param_1 + 3 != param_3) {
    param_1[3] = *param_3;
    param_1[4] = param_3[1];
    param_1[5] = param_3[2];
  }
  param_1[6] = param_4;
  param_1[7] = param_5;
  if ((0.0 < (float)param_1[7]) && (param_1 + 8 != param_6)) {
    param_1[8] = *param_6;
    param_1[9] = param_6[1];
    param_1[10] = param_6[2];
  }
  param_1[0xb] = param_7 << 7;
  param_1[0xc] = param_8 << 7;
  param_1[0xd] = param_9 << 7;
  param_1[0xe] = param_10;
  param_1[0xf] = param_11;
  return;
}
