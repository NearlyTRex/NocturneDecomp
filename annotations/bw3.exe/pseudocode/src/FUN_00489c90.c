// Name: FUN_00489c90
// Address: 00489c90
// Address Range: [[00489c90, 00489fba]]
// Convention: unknown
// Signature: void FUN_00489c90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00489c90(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  float10 fVar7;
  float afStackY_1044 [1015];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  uint local_4c;
  uint local_48;
  float local_44;
  float local_3c;
  int local_38;
  float local_34;
  char *local_30;
  float local_2c;
  int local_28;
  float *local_24;
  uint *local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  if (*(int *)(param_1 + 0xcecc) == 0) {
    if (0 < *(int *)(param_1 + 0xce64)) {
      local_24 = (float *)(param_1 + 0x20);
      local_20 = (uint *)(param_1 + 0x30);
      local_30 = (char *)(param_1 + 0xcf48);
      local_38 = param_1 + 0xce68;
      local_28 = 0;
      do {
        iVar2 = FUN_004dba30(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,10);
        if (*(char *)(param_1 + 0xce68) == '\0') {
          local_18 = 0.0;
          if (iVar2 != 0) {
            local_18 = 10.0;
          }
          iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          local_1c = (_DAT_005bdcdf - *(float *)(iVar2 + 0x2538) * _DAT_005bdcdb) * 10.0;
          local_60 = ((float)_DAT_005bdcef - (float)*(int *)(iVar2 + 0x20b84) * (float)_DAT_005bdce7
                     ) * 10.0;
          local_14 = (float)(5 - *(int *)(iVar2 + 0x20b80) / 0x19);
          local_18 = (float)(int)local_14 * local_18;
          if (local_1c < 0.0) {
            local_1c = 0.0;
          }
          if (local_18 < 0.0) {
            local_18 = 0.0;
          }
          if (local_60 < 0.0) {
            local_60 = 0.0;
          }
          local_14 = (float)FUN_0040ce40(0,local_1c + local_18 + local_60);
          fVar7 = (float10)local_14;
          FUN_005a3120();
          local_34 = (float)(int)ROUND(fVar7);
          local_2c = (float)(int)local_34;
          local_14 = local_34;
          if (local_2c < local_60) {
            iVar2 = FUN_0040c4f0("CAmmo_Bullet");
          }
          else if (local_60 + local_18 <= local_2c) {
            iVar2 = FUN_0040c4f0("CHealthItemSmall");
          }
          else {
            iVar2 = FUN_0040c4f0("CAmmo_Mana");
          }
        }
        else {
          iVar2 = FUN_0040c4f0(local_38);
          iVar3 = FUN_0040c840(iVar2,DAT_007e17b4);
          if (iVar3 != 0) {
            iVar4 = -1;
            pcVar5 = local_30;
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
            } while (cVar1 != '\0');
            if (iVar4 != -2) {
              FUN_004625f0(iVar3 + 0x158,local_30);
              *(uint *)(iVar3 + 0x314) = 2;
            }
          }
        }
        if (iVar2 != 0) {
          local_44 = (float)FUN_0040ce40(0xc0000000,0x40000000);
          local_14 = (float)FUN_0040ce40(0xc0000000,0x40000000);
          local_3c = local_44;
          local_58 = local_24[1];
          local_5c = *local_24 + local_14;
          local_54 = local_24[2] + local_44;
          local_50 = *local_24 + local_14;
          *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xffffffa8 + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          *(float *)(iVar2 + 0x20) = local_50;
          *(uint *)(iVar2 + 0x24) = local_4c;
          *(uint *)(iVar2 + 0x28) = local_48;
          *(uint *)(iVar2 + 0x2c) = *(uint *)(param_1 + 0x2c);
          if ((uint *)(iVar2 + 0x30) != local_20) {
            *(uint *)(iVar2 + 0x30) = *local_20;
            *(uint *)(iVar2 + 0x34) = local_20[1];
            *(uint *)(iVar2 + 0x38) = local_20[2];
          }
          (*(code *)**(uint **)(iVar2 + 0x154))(iVar2);
          FUN_004f6930(0x01D81080,iVar2);
        }
        local_28 = local_28 + 1;
      } while (local_28 < *(int *)(param_1 + 0xce64));
    }
    *(uint *)(param_1 + 0xcecc) = 1;
  }
  return;
}
