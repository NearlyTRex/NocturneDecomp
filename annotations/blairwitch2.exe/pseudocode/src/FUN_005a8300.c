// Name: FUN_005a8300
// Address: 005a8300
// Address Range: [[005a8300, 005a849a]]
// Convention: unknown
// Signature: void FUN_005a8300(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,float *param_10,undefined4 *param_11,undefined4 *param_12,undefined4 param_13)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a8300(float *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,float *param_10,uint *param_11,uint *param_12,uint param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  float local_1c [3];
  
  if (param_1[4] != 0.0) {
    if (param_1 != (float *)&DAT_0265370c) {
      *param_1 = _DAT_0265370c;
      param_1[1] = _DAT_02653710;
      param_1[2] = _DAT_02653714;
    }
    if (param_1[0xe] == 0.0) {
      fVar1 = param_1[5];
      if (param_1 != (float *)((int)fVar1 + 0x20)) {
        *param_1 = *(float *)((int)fVar1 + 0x20);
        param_1[1] = *(float *)((int)fVar1 + 0x24);
        param_1[2] = *(float *)((int)fVar1 + 0x28);
      }
    }
    puVar5 = (uint *)((int)param_1[0xf] + (int)param_1[7] * 0x60);
    puVar5[1] = param_2;
    puVar5[2] = param_2;
    puVar5[3] = param_3;
    puVar5[4] = param_4;
    puVar5[6] = param_5;
    puVar5[7] = param_6;
    puVar5[8] = param_13;
    puVar5[0x15] = param_1;
    if ((float *)(puVar5 + 9) != param_1) {
      puVar5[9] = *param_1;
      puVar5[10] = param_1[1];
      puVar5[0xb] = param_1[2];
    }
    if (param_10 != (float *)0x0) {
      fVar1 = param_1[1];
      fVar2 = param_1[2];
      fVar3 = param_10[1];
      fVar4 = param_10[2];
      if ((float *)(puVar5 + 9) != local_1c) {
        puVar5[9] = *param_1 + *param_10;
        puVar5[10] = fVar1 + fVar3;
        puVar5[0xb] = fVar2 + fVar4;
      }
    }
    if ((param_12 != (uint *)0x0) && (puVar5 + 0xf != param_12)) {
      puVar5[0xf] = *param_12;
      puVar5[0x10] = param_12[1];
      puVar5[0x11] = param_12[2];
    }
    if ((param_11 != (uint *)0x0) && (puVar5 + 0xc != param_11)) {
      puVar5[0xc] = *param_11;
      puVar5[0xd] = param_11[1];
      puVar5[0xe] = param_11[2];
    }
    *puVar5 = 1;
    puVar5[0x12] = param_7;
    puVar5[0x13] = param_8;
    puVar5[0x14] = param_9;
    fVar1 = param_1[7];
    param_1[7] = (float)((int)fVar1 + 1);
    if ((int)param_1[6] <= (int)fVar1 + 1) {
      param_1[7] = 0.0;
      return;
    }
  }
  return;
}
