// Name: FUN_00563cb0
// Address: 00563cb0
// Address Range: [[00563cb0, 00563e8a]]
// Convention: unknown
// Signature: void FUN_00563cb0(int param_1,int param_2,int param_3,int *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00563cb0(int param_1,int param_2,int param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1068 [1016];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  
  bVar3 = 0;
  local_28 = param_4;
  local_2c = param_2 << 2;
  local_20 = 0;
  for (local_24 = 0; local_24 < *(int *)(param_1 + local_2c + 0x2c); local_24 = local_24 + 1) {
    pfVar1 = (float *)(local_20 + *(int *)(param_1 + local_2c + 0x40));
    local_1c = pfVar1;
    if (*(char *)pfVar1 == '\x01') {
      FUN_005b5080(pfVar1 + 4,(uint)*(byte *)((int)pfVar1 + 1) * 0x30 + param_3);
      local_50 = local_5c;
      (&stack0xffffffb4)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffffa8 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffac + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (&stack0xffffffbc != &stack0xffffffb0) {
        local_44 = local_50;
        local_40 = local_4c;
        local_3c = local_48;
      }
    }
    else {
      local_40 = 0.0;
      local_44 = 0.0;
      local_3c = 0.0;
      local_18 = pfVar1;
      local_14 = pfVar1 + 4;
      for (iVar2 = 0; pfVar1 = pfVar1 + 1, iVar2 < (int)(uint)*(byte *)local_1c; iVar2 = iVar2 + 1)
      {
        FUN_005b5080(local_14,(uint)*(byte *)((int)local_18 + 1) * 0x30 + param_3);
        local_80 = local_38;
        *(uint *)((int)&stack0xffffff84 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * 0xfffffffe * 4);
        *(uint *)((int)&stack0xffffff88 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        local_68 = local_80 * *pfVar1;
        local_64 = local_7c * *pfVar1;
        local_60 = local_78 * *pfVar1;
        local_74 = local_80 * *pfVar1;
        *(uint *)((int)&stack0xffffff90 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffff9c + (uint)bVar3 * -8);
        *(uint *)((int)&stack0xffffff94 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffffa0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        local_44 = local_44 + local_74;
        local_40 = local_40 + local_70;
        local_3c = local_3c + local_6c;
        local_14 = local_14 + 3;
        local_18 = (float *)((int)local_18 + 1);
      }
    }
    *local_28 = (int)ROUND(local_44 * _DAT_00605888);
    local_28[1] = (int)ROUND(local_40 * _DAT_00605888);
    local_28[2] = (int)ROUND(local_3c * _DAT_00605888);
    local_28 = local_28 + 3;
    local_20 = local_20 + 0x34;
  }
  return;
}
