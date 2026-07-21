// Name: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0
// Address: 00519be0
// Address Range: [[00519be0, 00519eb1]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0(int param_1,uint param_2)

{
  int iVar1;
  ushort *puVar2;
  byte *pbVar3;
  int *piVar4;
  byte *pbVar5;
  byte *pbVar6;
  float local_6c;
  float local_68;
  float local_64;
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
  
  local_40 = 0.0;
  local_48 = 1e+30;
  local_30 = 0;
  local_44 = 0;
  if (1 < *(int *)(param_1 + 0xc00)) {
    iVar1 = FUN_0056497c(0x22b4);
    local_24 = 0;
    if (iVar1 != 0) {
      local_24 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660(iVar1);
    }
    if (local_24 == 0) {
      _DAT_01cc4800 = "..\\core\\skeleton.cpp";
      _DAT_01cc4804 = 0x5f0;
      FUN_004c8440("Out of memory");
    }
    iVar1 = local_24;
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00(local_24,param_1);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(iVar1);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(iVar1);
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(iVar1,0);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
              (iVar1,&local_6c,param_2);
    local_38 = 0;
    if (0 < *(int *)(param_1 + 0xc00)) {
      local_3c = param_1;
      do {
        local_34 = local_3c;
        local_2c = local_30 * 0x12;
        local_18 = 0.0;
        local_1c = 0;
        local_28 = 0;
        local_14 = 0.0;
        if (0 < *(int *)(local_3c + 0xc24)) {
          do {
            puVar2 = (ushort *)(*(int *)(param_1 + 0x7c) + local_2c);
            local_20 = puVar2 + 3;
            do {
              pbVar6 = (byte *)(*(int *)(param_1 + 0x40) + (uint)*puVar2 * 0x34);
              iVar1 = 0;
              pbVar3 = pbVar6;
              pbVar5 = pbVar6;
              while (iVar1 < (int)(uint)*pbVar6) {
                if (pbVar5[1] == param_2) {
                  local_14 = local_14 + *(float *)(pbVar3 + 4);
                  pbVar3 = pbVar3 + 4;
                  iVar1 = iVar1 + 1;
                  pbVar5 = pbVar5 + 1;
                }
                else {
                  pbVar3 = pbVar3 + 4;
                  iVar1 = iVar1 + 1;
                  pbVar5 = pbVar5 + 1;
                }
              }
              piVar4 = (int *)(*(int *)(local_24 + 0x2234) + (uint)*puVar2 * 0xc);
              local_60 = (float)*piVar4 * _DAT_005a1eb0;
              local_5c = (float)piVar4[1] * _DAT_005a1eb0;
              local_58 = (float)piVar4[2] * _DAT_005a1eb0;
              puVar2 = puVar2 + 1;
              local_1c = local_1c + 1;
              local_18 = (local_58 - local_64) * (local_58 - local_64) +
                         (local_5c - local_68) * (local_5c - local_68) +
                         (local_60 - local_6c) * (local_60 - local_6c) + local_18;
            } while (puVar2 != local_20);
            local_30 = local_30 + 1;
            local_28 = local_28 + 1;
            local_2c = local_2c + 0x12;
          } while (local_28 < *(int *)(local_3c + 0xc24));
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
