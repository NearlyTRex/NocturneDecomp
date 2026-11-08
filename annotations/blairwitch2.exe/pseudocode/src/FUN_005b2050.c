// Name: FUN_005b2050
// Address: 005b2050
// Address Range: [[005b2050, 005b228c]]
// Convention: unknown
// Signature: void FUN_005b2050(float *param_1,float *param_2,float *param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b2050(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1034 [1016];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float *local_1c;
  float *local_18;
  int local_14;
  
  bVar4 = 0;
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
  FUN_00449280(param_1 + 6,param_1 + 3);
  fVar2 = (float)_DAT_005f12c8;
  param_1[0x25] = param_4 * fVar2;
  fVar1 = (float)_DAT_005f12d0;
  param_1[0x26] =
       param_4 * fVar2 * fVar1 * (param_1[0x2b] * param_1[0x2b] + param_1[0x2a] * param_1[0x2a]);
  param_1[0x27] =
       param_1[0x25] * fVar1 * (param_1[0x2b] * param_1[0x2b] + param_1[0x29] * param_1[0x29]);
  param_1[0x28] =
       param_1[0x25] * fVar1 * (param_1[0x2a] * param_1[0x2a] + param_1[0x29] * param_1[0x29]);
  param_1[0x1b] = 0.0;
  param_1[0x1a] = param_1[0x1b];
  param_1[0x19] = param_1[0x1a];
  param_1[0x24] = 0.0;
  param_1[0x23] = param_1[0x24];
  param_1[0x22] = param_1[0x23];
  param_1[0x15] = 0.0;
  param_1[0x14] = param_1[0x15];
  param_1[0x13] = param_1[0x14];
  param_1[0x1e] = 0.0;
  param_1[0x1d] = param_1[0x1e];
  param_1[0x1c] = param_1[0x1d];
  param_1[0x18] = 0.0;
  param_1[0x17] = param_1[0x18];
  param_1[0x16] = param_1[0x17];
  param_1[0x21] = 0.0;
  param_1[0x20] = param_1[0x21];
  param_1[0x1f] = param_1[0x20];
  param_1[0x12] = 0.0;
  param_1[0x11] = param_1[0x12];
  param_1[0x10] = param_1[0x11];
  local_14 = 0;
  if (0 < (int)param_1[0x2c]) {
    local_1c = param_1 + 0x2d;
    pfVar3 = param_1 + 0x30;
    local_18 = param_1 + 6;
    do {
      FUN_00449530(local_18,local_1c + local_14 * 0xd);
      local_34 = local_28;
      *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      local_40 = *param_1 + local_34;
      local_3c = param_1[1] + local_30;
      local_38 = param_1[2] + local_2c;
      local_4c = *param_1 + local_34;
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      if (pfVar3 != &stack0xffffffb4) {
        *pfVar3 = local_4c;
        pfVar3[1] = local_48;
        pfVar3[2] = local_44;
      }
      pfVar3 = pfVar3 + 0xd;
      local_14 = local_14 + 1;
    } while (local_14 < (int)param_1[0x2c]);
  }
  param_1[0x95] = 1.4013e-45;
  return;
}
