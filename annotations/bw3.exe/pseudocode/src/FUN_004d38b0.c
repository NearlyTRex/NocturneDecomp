// Name: FUN_004d38b0
// Address: 004d38b0
// Address Range: [[004d38b0, 004d3ae0]]
// Convention: unknown
// Signature: undefined4 FUN_004d38b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004d38b0(int param_1)

{
  int iVar1;
  byte bVar2;
  float afStackY_1080 [1008];
  int iStack_b8;
  int iStack_b4;
  uint uStack_b0;
  float fStack_98;
  float afStack_94 [4];
  float local_84;
  uint local_80;
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
    if (*(int *)(0x01ED78C8 + 0x14d164) <= local_24) {
      return 0;
    }
    iVar1 = *(int *)(0x01ED78C8 + local_20 + 0x14d168);
    afStack_94[2] = *(float *)(iVar1 + 0x20) - *local_1c;
    afStack_94[3] = *(float *)(iVar1 + 0x24) - local_1c[1];
    local_84 = *(float *)(iVar1 + 0x28) - local_1c[2];
    local_74 = afStack_94[2];
    afStack_94[(uint)bVar2 * -2 + 9] = afStack_94[(uint)bVar2 * -2 + 3];
    afStack_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 10] =
         afStack_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
    if (((ABS(local_70) <= (float)_DAT_005c4db5) &&
        (local_70 = 0.0, SQRT(local_6c * local_6c + local_74 * local_74) <= (float)_DAT_005c4db5))
       && (iVar1 != param_1)) {
      FUN_00576250(afStack_94 + 8);
      local_5c = local_50;
      afStack_94[(uint)bVar2 * -2 + 0xf] = afStack_94[(uint)bVar2 * -2 + 0x12];
      afStack_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x10] =
           afStack_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x13];
      local_18 = (float)FUN_0040cfa0(local_58 - *(float *)(param_1 + 0x34));
      if (ABS(local_18) <= (float)_DAT_005c4dbd) {
        FUN_00408bf0(iVar1,local_1c);
        local_44 = local_80;
        afStack_94[(uint)bVar2 * -2 + 0x15] = afStack_94[(uint)bVar2 * -2 + 6];
        afStack_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x16] =
             afStack_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
        if (local_3c <= 0.0) {
          (**(code **)(*(int *)(iVar1 + 0x154) + 0x98))(iVar1,&iStack_b8);
          if ((iStack_b8 != 0) && (iStack_b4 == 0)) {
            uStack_30 = uStack_b0;
            iStack_38 = iStack_b4;
            iStack_34 = iStack_b4;
            FUN_00408b80(iVar1,&iStack_38);
            fStack_68 = fStack_98;
            afStack_94[(uint)bVar2 * -2 + 0xc] = afStack_94[(uint)bVar2 * -2];
            afStack_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xd] =
                 afStack_94[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
            if (SQRT((fStack_60 - local_1c[2]) * (fStack_60 - local_1c[2]) +
                     (fStack_68 - *local_1c) * (fStack_68 - *local_1c)) <= (float)_DAT_005c4dc5) {
              *(uint *)(param_1 + 0x20b7c) = 0;
              *(uint *)(param_1 + 0x20b68) = 10;
              *(int *)(param_1 + 0x20b6c) = iVar1;
              *(int *)(param_1 + 0x20b70) = iVar1;
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
