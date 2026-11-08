// Name: FUN_00565830
// Address: 00565830
// Address Range: [[00565830, 00565b0e]]
// Convention: unknown
// Signature: int FUN_00565830(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00565830(int param_1,uint param_2)

{
  int iVar1;
  ushort *puVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  float afStackY_1060 [1015];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_58;
  float local_48;
  int local_44;
  float local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  ushort *local_20;
  int local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  bVar7 = 0;
  local_40 = 0.0;
  local_48 = 1e+30;
  local_30 = 0;
  local_44 = 0;
  if (1 < *(int *)(param_1 + 0xc00)) {
    iVar1 = FUN_005c0f32(0x23a4);
    local_24 = 0;
    if (iVar1 != 0) {
      local_24 = FUN_00567370(iVar1);
    }
    if (local_24 == 0) {
      _DAT_01d1d400 = "..\\core\\skeleton.cpp";
      _DAT_01d1d404 = 0x609;
      FUN_005030e0("Out of memory");
    }
    iVar1 = local_24;
    FUN_00569b50(local_24,param_1);
    FUN_00567500(iVar1);
    FUN_00569180(iVar1);
    FUN_00569890(iVar1,0);
    FUN_00569040(iVar1,param_2);
    local_78 = local_6c;
    *(uint *)((int)&stack0xffffff8c + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xffffff90 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffff9c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    local_38 = 0;
    if (0 < *(int *)(param_1 + 0xc00)) {
      local_3c = param_1;
      do {
        local_34 = local_3c;
        local_28 = local_30 * 0x12;
        local_18 = 0.0;
        local_1c = 0;
        local_2c = 0;
        local_14 = 0.0;
        if (0 < *(int *)(local_3c + 0xc24)) {
          do {
            puVar2 = (ushort *)(*(int *)(param_1 + 0x7c) + local_28);
            local_20 = puVar2 + 3;
            do {
              pbVar6 = (byte *)(*(int *)(param_1 + 0x40) + (uint)*puVar2 * 0x34);
              iVar1 = 0;
              pbVar4 = pbVar6;
              pbVar5 = pbVar6;
              while (iVar1 < (int)(uint)*pbVar6) {
                if (pbVar5[1] == param_2) {
                  local_14 = local_14 + *(float *)(pbVar4 + 4);
                  pbVar4 = pbVar4 + 4;
                  iVar1 = iVar1 + 1;
                  pbVar5 = pbVar5 + 1;
                }
                else {
                  pbVar4 = pbVar4 + 4;
                  iVar1 = iVar1 + 1;
                  pbVar5 = pbVar5 + 1;
                }
              }
              piVar3 = (int *)((uint)*puVar2 * 0xc + *(int *)(local_24 + 0x2324));
              local_60 = (float)*piVar3 * _DAT_00605890;
              local_5c = (float)piVar3[1] * _DAT_00605890;
              local_58 = (float)piVar3[2] * _DAT_00605890;
              puVar2 = puVar2 + 1;
              local_1c = local_1c + 1;
              local_18 = (local_58 - local_70) * (local_58 - local_70) +
                         (local_5c - local_74) * (local_5c - local_74) +
                         (local_60 - local_78) * (local_60 - local_78) + local_18;
            } while (puVar2 != local_20);
            local_30 = local_30 + 1;
            local_2c = local_2c + 1;
            local_28 = local_28 + 0x12;
          } while (local_2c < *(int *)(local_3c + 0xc24));
        }
        if (local_14 <= local_40) {
          if (ABS(local_40) == 0.0) {
            local_10 = local_1c;
            local_18 = local_18 / (float)local_1c;
            if (local_18 < local_48) {
              local_44 = local_38;
              local_48 = local_18;
            }
          }
        }
        else {
          local_40 = local_14;
          local_44 = local_38;
        }
        local_3c = local_3c + 0x60;
        local_38 = local_38 + 1;
      } while (local_38 < *(int *)(param_1 + 0xc00));
    }
    if (local_24 != 0) {
      (*(code *)**(uint **)(local_24 + 0x50))(local_24,2);
    }
    return local_44;
  }
  return 0;
}
