// Name: FUN_004cf890
// Address: 004cf890
// Address Range: [[004cf890, 004cfac0]]
// Convention: unknown
// Signature: undefined4 FUN_004cf890(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004cf890(int param_1)

{
  int iVar1;
  byte bVar2;
  float afStackY_1080 [1008];
  int iStack_b8;
  int iStack_b4;
  uint uStack_b0;
  float local_98;
  float local_94 [5];
  float fStack_80;
  float local_74;
  float local_70;
  float local_6c;
  float fStack_68;
  float fStack_60;
  uint local_5c;
  float local_58;
  uint local_50;
  uint local_44;
  float local_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int local_24;
  int local_20;
  float *local_1c;
  float local_18;
  
  bVar2 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = (float *)(param_1 + 0x20);
  do {
    if (*(int *)(0x01E661B8 + 0x14d164) <= local_24) {
      return 0;
    }
    iVar1 = *(int *)(0x01E661B8 + local_20 + 0x14d168);
    local_98 = *(float *)(iVar1 + 0x20) - *local_1c;
    local_94[0] = *(float *)(iVar1 + 0x24) - local_1c[1];
    local_94[1] = *(float *)(iVar1 + 0x28) - local_1c[2];
    local_74 = local_98;
    local_94[(uint)bVar2 * -2 + 9] = local_94[(uint)bVar2 * -2];
    local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 10] =
         local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    if (((ABS(local_70) <= (float)_DAT_005d9d1c) &&
        (local_70 = 0.0, SQRT(local_6c * local_6c + local_74 * local_74) <= (float)_DAT_005d9d1c))
       && (iVar1 != param_1)) {
      FUN_005838f0(local_94 + 8);
      local_5c = local_50;
      local_94[(uint)bVar2 * -2 + 0xf] = local_94[(uint)bVar2 * -2 + 0x12];
      local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x10] =
           local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x13];
      local_18 = (float)FUN_0040d0c0(local_58 - *(float *)(param_1 + 0x34));
      if (ABS(local_18) <= (float)_DAT_005d9d24) {
        FUN_00408de0(iVar1,local_1c);
        local_44 = local_94[2];
        local_94[(uint)bVar2 * -2 + 0x15] = local_94[(uint)bVar2 * -2 + 3];
        local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x16] =
             local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
        if (local_3c <= 0.0) {
          (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xa0))(iVar1,&iStack_b8);
          if ((iStack_b8 != 0) && (iStack_b4 == 0)) {
            uStack_30 = uStack_b0;
            iStack_38 = iStack_b4;
            iStack_34 = iStack_b4;
            FUN_00408d70(iVar1,&iStack_38);
            fStack_68 = fStack_80;
            local_94[(uint)bVar2 * -2 + 0xc] = local_94[(uint)bVar2 * -2 + 6];
            local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xd] =
                 local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
            if (SQRT((fStack_60 - local_1c[2]) * (fStack_60 - local_1c[2]) +
                     (fStack_68 - *local_1c) * (fStack_68 - *local_1c)) <= (float)_DAT_005d9d2c) {
              *(uint *)(param_1 + 0x25600) = 0;
              *(uint *)(param_1 + 0x255f0) = 9;
              *(int *)(param_1 + 0x255f4) = iVar1;
              *(int *)(param_1 + 0x255f8) = iVar1;
              return 1;
            }
          }
        }
      }
    }
    local_24 = local_24 + 1;
    local_20 = local_20 + 4;
  } while( true );
}
