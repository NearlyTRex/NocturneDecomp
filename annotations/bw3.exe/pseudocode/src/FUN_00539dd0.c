// Name: FUN_00539dd0
// Address: 00539dd0
// Address Range: [[00539dd0, 00539ed8]]
// Convention: unknown
// Signature: float FUN_00539dd0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float FUN_00539dd0(int param_1,float *param_2)

{
  float *pfVar1;
  byte bVar2;
  float afStackY_1038 [1016];
  float local_50;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar2 = 0;
  local_1c = 0;
  if (0 < *(int *)(param_1 + 0x15aed4)) {
    local_18 = param_1 + 0x15aed8;
    local_20 = param_1 + 0x15aef0;
    do {
      pfVar1 = (float *)(local_1c * 0x44 + local_18);
      local_44 = *param_2 - *pfVar1;
      local_40 = param_2[1] - pfVar1[1];
      local_3c = param_2[2] - pfVar1[2];
      local_38 = *param_2 - *pfVar1;
      *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8);
      *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      FUN_0045b870(local_20,&stack0xffffffc8);
      local_2c = local_50;
      *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffb4 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (((ABS(local_2c) <= pfVar1[3]) && (ABS(local_28) <= pfVar1[4])) &&
         (ABS(local_24) <= pfVar1[5])) {
        return pfVar1[0x10];
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 0x44;
    } while (local_1c < *(int *)(param_1 + 0x15aed4));
  }
  return *(float *)(param_1 + 0x15aed0);
}
