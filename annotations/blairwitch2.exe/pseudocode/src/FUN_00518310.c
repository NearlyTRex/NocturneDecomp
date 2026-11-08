// Name: FUN_00518310
// Address: 00518310
// Address Range: [[00518310, 005184aa]]
// Convention: unknown
// Signature: void FUN_00518310(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00518310(int param_1)

{
  uint *puVar1;
  float *pfVar2;
  byte bVar3;
  uint auStackY_1874 [1523];
  uint local_98;
  uint local_88;
  uint local_78;
  float local_74 [4];
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  uint local_3c;
  float afStack_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar3 = 0;
  if (*(float *)(param_1 + 0x438) < 0.0) {
    *(uint *)(param_1 + 0x438) = 0;
  }
  if (1.0 < *(float *)(param_1 + 0x438)) {
    *(uint *)(param_1 + 0x438) = 0x3f800000;
  }
  puVar1 = (uint *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x44c) == '\0') {
    pfVar2 = (float *)(param_1 + 0x438);
    local_74[2] = *(float *)(param_1 + 0x484) * *pfVar2;
    local_74[3] = *(float *)(param_1 + 0x488) * *pfVar2;
    local_64 = *(float *)(param_1 + 0x48c) * *pfVar2;
    local_18 = 1.0 - *(float *)(param_1 + 0x438);
    local_48 = *(float *)(param_1 + 0x478) * local_18;
    local_44 = *(float *)(param_1 + 0x47c) * local_18;
    local_40 = *(float *)(param_1 + 0x480) * local_18;
    local_60 = local_48 + local_74[2];
    local_5c = local_44 + local_74[3];
    local_58 = local_40 + local_64;
    *(float *)(param_1 + 0x20) = local_60;
    *(float *)(param_1 + 0x24) = local_5c;
    *(float *)(param_1 + 0x28) = local_58;
    local_54 = local_60;
    local_50 = local_5c;
    local_4c = local_58;
    afStack_38[2] = local_74[2];
    afStack_38[3] = local_74[3];
    local_28 = local_64;
    local_24 = local_48;
    local_20 = local_44;
    local_1c = local_40;
    FUN_00593df0(param_1 + 0x490,param_1 + 0x4a0,*(uint *)(param_1 + 0x438));
    local_98 = local_88;
    *(uint *)((int)&stack0xffffff6c + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff7c + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffff70 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff80 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xffffff70 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff80 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    FUN_005940b0(&stack0xffffff68);
    local_78 = local_3c;
    *(float *)((int)local_74 + (uint)bVar3 * -8) = afStack_38[(uint)bVar3 * 0xfffffffe];
    local_74[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 1] =
         afStack_38[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 1];
    if (puVar1 != &local_78) {
      *puVar1 = local_78;
      *(float *)(param_1 + 0x34) = local_74[0];
      *(float *)(param_1 + 0x38) = local_74[1];
      return;
    }
  }
  else {
    local_14 = *(int *)(param_1 + 0x46c);
    FUN_00438c40((int *)(param_1 + 0x46c),(float)local_14 * *(float *)(param_1 + 0x438),
                 (float *)(param_1 + 0x20),puVar1);
  }
  return;
}
