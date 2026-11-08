// Name: FUN_00465d70
// Address: 00465d70
// Address Range: [[00465d70, 00465e92]]
// Convention: unknown
// Signature: void FUN_00465d70(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

void FUN_00465d70(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  param_1[2] = param_2;
  param_1[3] = param_3;
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[4] = param_1[2];
  param_1[5] = param_1[3];
  param_1[6] = param_1[2] + *param_1 + -1;
  param_1[7] = param_1[3] + param_1[1] + -1;
  if (param_6 != 0) {
    param_1[2] = param_1[2] + *(int *)(param_6 + 8);
    param_1[3] = param_1[3] + *(int *)(param_6 + 0xc);
    param_1[4] = param_1[4] + *(int *)(param_6 + 8);
    param_1[5] = param_1[5] + *(int *)(param_6 + 0xc);
    param_1[6] = param_1[6] + *(int *)(param_6 + 8);
    param_1[7] = param_1[7] + *(int *)(param_6 + 0xc);
    if (param_1[4] < *(int *)(param_6 + 0x10)) {
      param_1[4] = *(int *)(param_6 + 0x10);
    }
    if (param_1[5] < *(int *)(param_6 + 0x14)) {
      param_1[5] = *(int *)(param_6 + 0x14);
    }
    if (*(int *)(param_6 + 0x18) < param_1[6]) {
      param_1[6] = *(int *)(param_6 + 0x18);
    }
    if (*(int *)(param_6 + 0x1c) < param_1[7]) {
      param_1[7] = *(int *)(param_6 + 0x1c);
    }
  }
  if (param_1[4] < 0) {
    param_1[4] = 0;
  }
  if (param_1[5] < 0) {
    param_1[5] = 0;
  }
  if (DAT_006141b8 <= param_1[6]) {
    param_1[6] = DAT_006141b8 + -1;
  }
  if (param_1[7] < DAT_006141bc) {
    return;
  }
  param_1[7] = DAT_006141bc + -1;
  return;
}
