// Name: FUN_0044e8e0
// Address: 0044e8e0
// Address Range: [[0044e8e0, 0044ee26]]
// Convention: unknown
// Signature: void FUN_0044e8e0(int param_1,int param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e8e0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  int aiStackY_185c [1523];
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  byte *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  byte *local_30;
  int local_2c;
  float *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  
  bVar6 = 0;
  local_40 = 0x80;
  local_3c = 0;
  iVar1 = FUN_005c0f80(param_2 + 0x1c74,"@movscrn.raw" + 1);
  if (iVar1 == 0) {
    local_3c = 1;
    local_40 = 0x100;
  }
  if (param_3 == (int *)0x0) {
    _DAT_01289ca8 = param_3;
    _DAT_00b81ca4 = param_3;
  }
  uVar3 = (int)_DAT_00b81ca4 + 1;
  iVar1 = (int)_DAT_00b81ca4 * 0x4b000 + 0xb81ca8;
  if (0x18 < uVar3) {
    iVar1 = 0;
  }
  _DAT_00b81ca4 = (int *)uVar3;
  *(int *)(param_2 + 0x1c48) = iVar1;
  uVar2 = (int)_DAT_00b81ca4 + 1;
  iVar1 = uVar3 * 0x4b000 + 0xb81ca8;
  if (0x18 < uVar2) {
    iVar1 = 0;
  }
  _DAT_00b81ca4 = (int *)uVar2;
  *(int *)(param_2 + 0x1c4c) = iVar1;
  _DAT_00b81ca4 = (int *)((int)_DAT_00b81ca4 + 1);
  iVar1 = uVar2 * 0x4b000 + 0xb81ca8;
  if (0x18 < _DAT_00b81ca4) {
    iVar1 = 0;
  }
  *(int *)(param_2 + 0x1c50) = iVar1;
  if (((*(int *)(param_2 + 0x1c48) == 0) || (*(int *)(param_2 + 0x1c4c) == 0)) ||
     (*(int *)(param_2 + 0x1c50) == 0)) {
    _DAT_01d1d400 = "..\\core\\dcamera.cpp";
    _DAT_01d1d404 = 0x6ca;
    FUN_005030e0("CDemonCamera::precomputeLight - Too many lights visible from camera %s",param_1 + 0x40);
  }
  FUN_00465780(param_2);
  if ((param_3 == (int *)0x0) || (*(int *)(param_1 + 0x148) != 0x1e0)) {
    local_7c = *(int *)(param_1 + 0x150) + -1;
    local_78 = 0;
    local_74 = *(int *)(param_1 + 0x154) + -1;
    local_80 = 0;
  }
  else {
    piVar4 = param_3 + (uint)bVar6 * -2 + 1;
    local_80 = *param_3;
    *(int *)((int)&stack0xffffff84 + (uint)bVar6 * -8) = *piVar4;
    *(int *)((int)&stack0xffffff88 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         piVar4[(uint)bVar6 * -2 + 1];
    ((int *)((int)&stack0xffffff88 + (uint)bVar6 * -8 + (uint)bVar6 * -8))[(uint)bVar6 * -2 + 1] =
         (piVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    iVar5 = 0;
    iVar1 = param_2;
    if (0 < local_78) {
      do {
        *(uint *)(iVar1 + 0x14c8) = 999;
        iVar5 = iVar5 + 1;
        *(uint *)(iVar1 + 0x1888) = 0;
        iVar1 = iVar1 + 4;
      } while (iVar5 < local_78);
    }
    iVar1 = local_74 + 1;
    if (iVar1 < *(int *)(param_1 + 0x154)) {
      iVar5 = iVar1 * 4 + param_2;
      do {
        *(uint *)(iVar5 + 0x14c8) = 999;
        *(uint *)(iVar5 + 0x1888) = 0;
        iVar1 = iVar1 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar1 < *(int *)(param_1 + 0x154));
    }
  }
  local_2c = local_78;
  if (local_78 <= local_74) {
    local_58 = local_80 * 0xc;
    local_4c = local_80 * 4;
    local_44 = local_78 * 0x500;
    local_50 = &DAT_00857cd8 + local_78 * 0xf00;
    local_54 = local_78 * 0xf00 + 0xa1bad8;
    local_48 = local_78 * 4 + param_2;
    do {
      local_30 = local_50 + local_58;
      local_34 = 999;
      local_28 = (float *)(local_54 + local_58);
      local_20 = (int *)(local_4c + *(int *)(param_2 + 0x1c48) + local_44);
      local_1c = (int *)(local_4c + *(int *)(param_2 + 0x1c4c) + local_44);
      local_38 = 0;
      local_24 = (int *)(local_4c + *(int *)(param_2 + 0x1c50) + local_44);
      local_18 = local_80;
      if (local_80 <= local_7c) {
        do {
          if ((((local_18 < 1) || (local_2c < 1)) ||
              ((iVar1 = local_18 * *(int *)(param_1 + 0x14c), iVar5 = *(int *)(param_1 + 0x144) + -2
               , iVar1 - iVar5 != 0 && iVar5 <= iVar1 ||
               (iVar5 = local_2c * *(int *)(param_1 + 0x14c), iVar1 = *(int *)(param_1 + 0x148) + -2
               , iVar5 - iVar1 != 0 && iVar1 <= iVar5)))) ||
             ((local_3c == 0 &&
              (local_28[2] * *(float *)(param_2 + 0x30) +
               *local_28 * *(float *)(param_2 + 0x18) + local_28[1] * *(float *)(param_2 + 0x24) <
               0.0)))) {
LAB_0044eb3f:
            *local_20 = 0;
            *local_1c = 0;
LAB_0044eb57:
            *local_24 = 0;
          }
          else {
            FUN_0044e2a0(param_2,local_30);
            local_64 = local_70;
            (&stack0xffffffa0)[(uint)bVar6 * 0xfffffffe] =
                 *(uint *)(&stack0xffffff94 + (uint)bVar6 * -8);
            *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xffffff98 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            if (local_5c < 1) goto LAB_0044eb3f;
            *local_20 = local_5c - local_40;
            iVar1 = FUN_00463010(param_2,&stack0xffffff9c,local_18,local_2c);
            *local_1c = iVar1;
            if (iVar1 == 0) {
              *local_20 = 0;
              *local_1c = 0;
              goto LAB_0044eb57;
            }
            *local_24 = ((local_60 >> (*(byte *)(param_2 + 0x1ccc) & 0x1f) &
                         *(uint *)(param_2 + 0x1c68)) << (*(byte *)(param_2 + 0x1c60) & 0x1f)) +
                        (local_64 >> (*(byte *)(param_2 + 0x1cc8) & 0x1f) &
                        *(uint *)(param_2 + 0x1c68));
            if (local_38 < local_18) {
              local_38 = local_18;
            }
            if (local_18 < local_34) {
              local_34 = local_18;
            }
          }
          local_28 = local_28 + 3;
          local_30 = local_30 + 0xc;
          local_20 = local_20 + 1;
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
          local_18 = local_18 + 1;
        } while (local_18 <= local_7c);
      }
      local_44 = local_44 + 0x500;
      local_54 = local_54 + 0xf00;
      local_50 = local_50 + 0xf00;
      *(int *)(local_48 + 0x14c8) = local_34;
      *(int *)(local_48 + 0x1888) = local_38;
      local_48 = local_48 + 4;
      local_2c = local_2c + 1;
    } while (local_2c <= local_74);
  }
  return;
}
