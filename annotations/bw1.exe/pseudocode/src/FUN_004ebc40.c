// Name: FUN_004ebc40
// Address: 004ebc40
// Address Range: [[004ebc40, 004ebe70]]
// Convention: unknown
// Signature: undefined4 FUN_004ebc40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ebc40(int param_1)

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
    if (*(int *)(0x01E82168 + 0x14d164) <= local_24) {
      return 0;
    }
    iVar1 = *(int *)(0x01E82168 + local_20 + 0x14d168);
    local_98 = *(float *)(iVar1 + 0x20) - *local_1c;
    local_94[0] = *(float *)(iVar1 + 0x24) - local_1c[1];
    local_94[1] = *(float *)(iVar1 + 0x28) - local_1c[2];
    local_74 = local_98;
    local_94[(uint)bVar2 * -2 + 9] = local_94[(uint)bVar2 * -2];
    local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 10] =
         local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    if (((ABS(local_70) <= (float)_DAT_005e48e5) &&
        (local_70 = 0.0, SQRT(local_6c * local_6c + local_74 * local_74) <= (float)_DAT_005e48e5))
       && (iVar1 != param_1)) {
      FUN_005a7520(local_94 + 8);
      local_5c = local_50;
      local_94[(uint)bVar2 * -2 + 0xf] = local_94[(uint)bVar2 * -2 + 0x12];
      local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x10] =
           local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x13];
      local_18 = (float)FUN_0040cd60(local_58 - *(float *)(param_1 + 0x34));
      if (ABS(local_18) <= (float)_DAT_005e48ed) {
        FUN_00408bb0(iVar1,local_1c);
        local_44 = local_94[2];
        local_94[(uint)bVar2 * -2 + 0x15] = local_94[(uint)bVar2 * -2 + 3];
        local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x16] =
             local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
        if (local_3c <= 0.0) {
          (**(code **)(*(int *)(iVar1 + 0x154) + 0x98))(iVar1,&iStack_b8);
          if ((iStack_b8 != 0) && (iStack_b4 == 0)) {
            uStack_30 = uStack_b0;
            iStack_38 = iStack_b4;
            iStack_34 = iStack_b4;
            FUN_00408b40(iVar1,&iStack_38);
            fStack_68 = fStack_80;
            local_94[(uint)bVar2 * -2 + 0xc] = local_94[(uint)bVar2 * -2 + 6];
            local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xd] =
                 local_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
            if (SQRT((fStack_60 - local_1c[2]) * (fStack_60 - local_1c[2]) +
                     (fStack_68 - *local_1c) * (fStack_68 - *local_1c)) <= (float)_DAT_005e48f5) {
              *(uint *)(param_1 + 0x1ff70) = 0;
              *(uint *)(param_1 + 0x1ff60) = 9;
              *(int *)(param_1 + 0x1ff64) = iVar1;
              *(int *)(param_1 + 0x1ff68) = iVar1;
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
