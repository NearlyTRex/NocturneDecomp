// Name: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00565830
// Address: 00565830
// Address Range: [[00565830, 00565b0e]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_00565830(CDeformableModel *this_ptr,int bone_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_00565830(CDeformableModel *this_ptr,int bone_index)

{
  CDeformableModelInstance *pCVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
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
  CDeformableModel *local_3c;
  int local_38;
  CDeformableModel *local_34;
  int local_30;
  int local_2c;
  int local_28;
  CDeformableModelInstance *local_24;
  ushort *local_20;
  int local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  bVar8 = 0;
  local_40 = 0.0;
  local_48 = 1e+30;
  local_30 = 0;
  local_44 = 0;
  if (1 < *(int *)&this_ptr->field_0xc00) {
    pCVar1 = (CDeformableModelInstance *)FUN_005c0f32(0x23a4);
    local_24 = (CDeformableModelInstance *)0x0;
    if (pCVar1 != (CDeformableModelInstance *)0x0) {
      local_24 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00567370(pCVar1);
    }
    if (local_24 == (CDeformableModelInstance *)0x0) {
      _DAT_01d1d400 = "..\\core\\skeleton.cpp";
      _DAT_01d1d404 = 0x609;
      core_main_c_FUN_005030e0("Out of memory");
    }
    pCVar1 = local_24;
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50(local_24,this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(pCVar1);
    core_skeleton_cpp_FUN_00569180(pCVar1);
    core_skeleton_cpp_FUN_00569890(pCVar1,0);
    core_skeleton_cpp_FUN_00569040(pCVar1,bone_index);
    local_78 = local_6c;
    *(uint *)((int)&stack0xffffff8c + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffff98 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffff90 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    local_38 = 0;
    if (0 < *(int *)&this_ptr->field_0xc00) {
      local_3c = this_ptr;
      do {
        local_34 = local_3c;
        local_28 = local_30 * 0x12;
        local_18 = 0.0;
        local_1c = 0;
        local_2c = 0;
        local_14 = 0.0;
        if (0 < *(int *)&local_3c->field_0xc24) {
          do {
            puVar2 = (ushort *)(*(int *)&this_ptr->field_0x7c + local_28);
            local_20 = puVar2 + 3;
            do {
              pbVar7 = (byte *)(*(int *)&this_ptr->field_0x40 + (uint)*puVar2 * 0x34);
              iVar3 = 0;
              pbVar5 = pbVar7;
              pbVar6 = pbVar7;
              while (iVar3 < (int)(uint)*pbVar7) {
                if ((uint)pbVar6[1] == bone_index) {
                  local_14 = local_14 + *(float *)(pbVar5 + 4);
                  pbVar5 = pbVar5 + 4;
                  iVar3 = iVar3 + 1;
                  pbVar6 = pbVar6 + 1;
                }
                else {
                  pbVar5 = pbVar5 + 4;
                  iVar3 = iVar3 + 1;
                  pbVar6 = pbVar6 + 1;
                }
              }
              piVar4 = (int *)((uint)*puVar2 * 0xc + *(int *)&local_24->field_0x2324);
              local_60 = (float)*piVar4 * _DAT_00605890;
              local_5c = (float)piVar4[1] * _DAT_00605890;
              local_58 = (float)piVar4[2] * _DAT_00605890;
              puVar2 = puVar2 + 1;
              local_1c = local_1c + 1;
              local_18 = (local_58 - local_70) * (local_58 - local_70) +
                         (local_5c - local_74) * (local_5c - local_74) +
                         (local_60 - local_78) * (local_60 - local_78) + local_18;
            } while (puVar2 != local_20);
            local_30 = local_30 + 1;
            local_2c = local_2c + 1;
            local_28 = local_28 + 0x12;
          } while (local_2c < *(int *)&local_3c->field_0xc24);
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
        local_3c = (CDeformableModel *)&local_3c->field_0x60;
        local_38 = local_38 + 1;
      } while (local_38 < *(int *)&this_ptr->field_0xc00);
    }
    if (local_24 != (CDeformableModelInstance *)0x0) {
      (*(code *)**(uint **)&local_24->field_0x50)(local_24,2);
    }
    return local_44;
  }
  return 0;
}
