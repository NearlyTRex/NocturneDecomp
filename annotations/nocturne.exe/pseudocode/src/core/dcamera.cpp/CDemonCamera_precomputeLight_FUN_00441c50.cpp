// Name: core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_00441c50
// Address: 00441c50
// Address Range: [[00441c50, 004421a4]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_00441c50(int param_1,int param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_00441c50(int param_1,int param_2,int *param_3)

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
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  float *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  
  bVar6 = 0;
  local_3c = 0x80;
  local_40 = 0;
  iVar1 = _strcmp(param_2 + 0x1c74,"movscrn.raw");
  if (iVar1 == 0) {
    local_40 = 1;
    local_3c = 0x100;
  }
  if (param_3 == (int *)0x0) {
    _DAT_01216608 = param_3;
    _DAT_00b0e604 = param_3;
  }
  uVar3 = (int)_DAT_00b0e604 + 1;
  iVar1 = (int)_DAT_00b0e604 * 0x4b000 + 0xb0e608;
  if (0x18 < uVar3) {
    iVar1 = 0;
  }
  _DAT_00b0e604 = (int *)uVar3;
  *(int *)(param_2 + 0x1c48) = iVar1;
  uVar2 = (int)_DAT_00b0e604 + 1;
  iVar1 = uVar3 * 0x4b000 + 0xb0e608;
  if (0x18 < uVar2) {
    iVar1 = 0;
  }
  _DAT_00b0e604 = (int *)uVar2;
  *(int *)(param_2 + 0x1c4c) = iVar1;
  _DAT_00b0e604 = (int *)((int)_DAT_00b0e604 + 1);
  iVar1 = uVar2 * 0x4b000 + 0xb0e608;
  if (0x18 < _DAT_00b0e604) {
    iVar1 = 0;
  }
  *(int *)(param_2 + 0x1c50) = iVar1;
  if (((*(int *)(param_2 + 0x1c48) == 0) || (*(int *)(param_2 + 0x1c4c) == 0)) ||
     (*(int *)(param_2 + 0x1c50) == 0)) {
    _DAT_01cc4800 = "..\\core\\dcamera.cpp";
    _DAT_01cc4804 = 0x6ae;
    FUN_004c8440("CDemonCamera::precomputeLight - Too many lights visible from camera %s",param_1);
  }
  core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00451a60(param_2);
  if ((param_3 == (int *)0x0) || (*(int *)(param_1 + 0x140) != 0x1e0)) {
    local_78 = 0;
    local_80 = 0;
    local_7c = *(int *)(param_1 + 0x150) + -1;
    local_74 = *(int *)(param_1 + 0x154) + -1;
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
    local_50 = local_80 * 4;
    local_44 = local_78 * 0x500;
    local_54 = local_78 * 0xf00 + 0x7f7378;
    local_4c = local_78 * 0xf00 + 0x9bb178;
    local_48 = local_78 * 4 + param_2;
    do {
      local_38 = 999;
      local_30 = local_54 + local_58;
      local_28 = (float *)(local_4c + local_58);
      local_34 = 0;
      local_20 = (int *)(local_50 + *(int *)(param_2 + 0x1c48) + local_44);
      local_1c = (int *)(local_50 + *(int *)(param_2 + 0x1c4c) + local_44);
      local_24 = (int *)(local_50 + *(int *)(param_2 + 0x1c50) + local_44);
      local_18 = local_80;
      if (local_80 <= local_7c) {
        do {
          if (((local_18 < 1) || (local_2c < 1)) ||
             ((iVar1 = local_18 * *(int *)(param_1 + 0x14c), iVar5 = *(int *)(param_1 + 0x13c) + -2,
              iVar1 - iVar5 != 0 && iVar5 <= iVar1 ||
              (iVar5 = local_2c * *(int *)(param_1 + 0x14c), iVar1 = *(int *)(param_1 + 0x140) + -2,
              iVar5 - iVar1 != 0 && iVar1 <= iVar5)))) {
LAB_00441e9f:
            *local_20 = 0;
            *local_1c = 0;
LAB_00441eb7:
            *local_24 = 0;
          }
          else {
            if ((local_40 != 0) ||
               (0.0 <= local_28[2] * *(float *)(param_2 + 0x130) +
                       *local_28 * *(float *)(param_2 + 0x118) +
                       local_28[1] * *(float *)(param_2 + 0x124))) {
              core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
                        (param_2,local_30);
              local_64 = local_70;
              (&stack0xffffffa0)[(uint)bVar6 * 0xfffffffe] =
                   *(uint *)(&stack0xffffff94 + (uint)bVar6 * -8);
              *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                   *(uint *)(&stack0xffffff98 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
              if (local_5c < 1) goto LAB_00441e9f;
              *local_20 = local_5c - local_3c;
              iVar1 = core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0044ec60
                                (param_2,&stack0xffffff9c,local_18,local_2c);
              *local_1c = iVar1;
              if (iVar1 != 0) {
                *local_24 = ((local_60 >> (*(byte *)(param_2 + 0x1ccc) & 0x1f) &
                             *(uint *)(param_2 + 0x1c68)) << (*(byte *)(param_2 + 0x1c60) & 0x1f)) +
                            (local_64 >> (*(byte *)(param_2 + 0x1cc8) & 0x1f) &
                            *(uint *)(param_2 + 0x1c68));
                if (local_34 < local_18) {
                  local_34 = local_18;
                }
                if (local_18 < local_38) {
                  local_38 = local_18;
                }
                goto LAB_00441ebd;
              }
              *local_20 = 0;
              *local_1c = 0;
              goto LAB_00441eb7;
            }
            *local_20 = 0;
            *local_1c = 0;
            *local_24 = 0;
          }
LAB_00441ebd:
          local_28 = local_28 + 3;
          local_30 = local_30 + 0xc;
          local_20 = local_20 + 1;
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
          local_18 = local_18 + 1;
        } while (local_18 <= local_7c);
      }
      local_44 = local_44 + 0x500;
      local_2c = local_2c + 1;
      *(int *)(local_48 + 0x14c8) = local_38;
      *(int *)(local_48 + 0x1888) = local_34;
      local_4c = local_4c + 0xf00;
      local_54 = local_54 + 0xf00;
      local_48 = local_48 + 4;
    } while (local_2c <= local_74);
  }
  return;
}
