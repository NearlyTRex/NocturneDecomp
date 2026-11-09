// Name: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00544380
// Address: 00544380
// Address Range: [[00544380, 0054492e]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_00544380(CDeformableModel *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_00544380(CDeformableModel *this_ptr)

{
  float *pfVar1;
  byte *pbVar2;
  CDeformableModel *pCVar3;
  CSkeleton *pCVar5;
  CDeformableModelInstance *pCVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  byte *pbVar11;
  ushort *puVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  byte bVar17;
  float afStackY_10b0 [916];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
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
  float local_3c;
  int local_38;
  int local_34;
  CDeformableModel *local_30;
  int local_2c;
  int local_28;
  CDeformableModelInstance *local_24;
  int local_20;
  ushort *local_1c;
  float local_18;
  byte *puVar4;
  
  bVar17 = 0;
  if (*(int *)&this_ptr->field_0xc00 < 2) {
    *(uint *)&this_ptr->field_0xc60 = 0;
    pCVar3 = this_ptr;
    do {
      puVar4 = &pCVar3->field_0x4;
      *(uint *)&pCVar3->field_0x26fc = 0;
      pCVar3 = (CDeformableModel *)puVar4;
    } while (puVar4 != &this_ptr->field_0x190);
  }
  else {
    core_skeleton_cpp_FUN_00541540(this_ptr);
    pCVar5 = core_skeleton_cpp_FUN_005415d0(this_ptr);
    local_28 = *(int *)&pCVar5->field_0x1d1f8;
    pCVar6 = (CDeformableModelInstance *)FUN_005b8be2(0x22b4);
    local_24 = (CDeformableModelInstance *)0x0;
    if (pCVar6 != (CDeformableModelInstance *)0x0) {
      local_24 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00544cd0(pCVar6);
    }
    if (local_24 == (CDeformableModelInstance *)0x0) {
      _DAT_01d046a0 = "..\\core\\skeleton.cpp";
      _DAT_01d046a4 = 0x7e2;
      core_main_c_FUN_004e4500("CDeformableModel::computePartDominantBones - out of memory!");
    }
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0(local_24,this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60(local_24);
    pCVar6 = local_24;
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(local_24);
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(pCVar6,0);
    local_38 = 0;
    if (0 < *(int *)&this_ptr->field_0xc00) {
      local_30 = this_ptr;
      iVar10 = 0;
      do {
        local_34 = *(int *)&local_30->field_0xc24 + iVar10;
        if (0 < local_28) {
          iVar16 = local_28 * 4;
          iVar14 = 0;
          do {
            iVar7 = iVar14 + 4;
            *(uint *)(&stack0xfffffda8 + iVar14) = 0;
            iVar14 = iVar7;
          } while (iVar7 < iVar16);
        }
        if (iVar10 < local_34) {
          local_20 = iVar10 * 0x12;
          local_2c = local_34 * 0x12;
          do {
            puVar12 = (ushort *)(*(int *)&this_ptr->field_0x7c + local_20);
            piVar8 = (int *)(*(int *)&local_24->field_0x2234 + (uint)*puVar12 * 0xc);
            local_8c = (float)*piVar8 * _DAT_005fb9a0;
            local_88 = (float)piVar8[1] * _DAT_005fb9a0;
            local_84 = (float)piVar8[2] * _DAT_005fb9a0;
            piVar8 = (int *)((uint)puVar12[1] * 0xc + *(int *)&local_24->field_0x2234);
            local_98 = (float)*piVar8 * _DAT_005fb9a0;
            local_94 = (float)piVar8[1] * _DAT_005fb9a0;
            local_90 = (float)piVar8[2] * _DAT_005fb9a0;
            piVar9 = (int *)(*(int *)&local_24->field_0x2234 + (uint)puVar12[2] * 0xc);
            local_68 = (float)*piVar9 * _DAT_005fb9a0;
            local_64 = (float)piVar9[1] * _DAT_005fb9a0;
            local_60 = (float)piVar9[2] * _DAT_005fb9a0;
            local_c8 = (float)*piVar9 * _DAT_005fb9a0 - (float)*piVar8 * _DAT_005fb9a0;
            local_c4 = (float)piVar9[1] * _DAT_005fb9a0 - (float)piVar8[1] * _DAT_005fb9a0;
            local_c0 = (float)piVar9[2] * _DAT_005fb9a0 - (float)piVar8[2] * _DAT_005fb9a0;
            local_80 = local_c8;
            (&stack0xffffff84)[(uint)bVar17 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xffffff3c + (uint)bVar17 * -8);
            *(uint *)((int)&stack0xffffff88 + (uint)bVar17 * -8 + (uint)bVar17 * -8) =
                 *(uint *)((int)&stack0xffffff40 + (uint)bVar17 * -8 + (uint)bVar17 * -8);
            if (&stack0xffffffb0 != &stack0xffffff80) {
              local_50 = local_80;
              local_4c = local_7c;
              local_48 = local_78;
            }
            local_40 = local_94 - local_88;
            local_3c = local_90 - local_84;
            local_44 = local_98 - local_8c;
            local_a4 = local_98 - local_8c;
            (&stack0xffffff60)[(uint)bVar17 * 0xfffffffe] =
                 (&stack0xffffffc0)[(uint)bVar17 * 0xfffffffe];
            *(uint *)((int)&stack0xffffff64 + (uint)bVar17 * -8 + (uint)bVar17 * -8) =
                 *(uint *)((int)&stack0xffffffc4 + (uint)bVar17 * -8 + (uint)bVar17 * -8);
            if (&stack0xffffff8c != &stack0xffffff5c) {
              local_74 = local_a4;
              local_70 = local_a0;
              local_6c = local_9c;
            }
            local_5c = local_4c * local_6c - local_48 * local_70;
            local_58 = local_48 * local_74 - local_50 * local_6c;
            local_54 = local_50 * local_70 - local_4c * local_74;
            local_bc = local_5c;
            (&stack0xffffff48)[(uint)bVar17 * 0xfffffffe] =
                 (&stack0xffffffa8)[(uint)bVar17 * 0xfffffffe];
            *(uint *)((int)&stack0xffffff4c + (uint)bVar17 * -8 + (uint)bVar17 * -8) =
                 *(uint *)((int)&stack0xffffffac + (uint)bVar17 * -8 + (uint)bVar17 * -8);
            if (&stack0xffffff50 != &stack0xffffff44) {
              local_b0 = local_bc;
              local_ac = local_b8;
              local_a8 = local_b4;
            }
            local_1c = puVar12 + 3;
            local_18 = SQRT(local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac);
            do {
              pbVar15 = (byte *)((uint)*puVar12 * 0x34 + *(int *)&this_ptr->field_0x40);
              pbVar11 = pbVar15;
              pbVar13 = pbVar15;
              for (iVar10 = 0; iVar10 < (int)(uint)*pbVar15; iVar10 = iVar10 + 1) {
                pfVar1 = (float *)(pbVar13 + 4);
                pbVar2 = pbVar11 + 1;
                pbVar13 = pbVar13 + 4;
                pbVar11 = pbVar11 + 1;
                *(float *)(&stack0xfffffda8 + (uint)*pbVar2 * 4) =
                     *pfVar1 * local_18 + *(float *)(&stack0xfffffda8 + (uint)*pbVar2 * 4);
              }
              puVar12 = puVar12 + 1;
            } while (puVar12 != local_1c);
            local_20 = local_20 + 0x12;
          } while (local_20 < local_2c);
        }
        iVar16 = 1;
        iVar10 = 0;
        if (1 < local_28) {
          iVar14 = 4;
          do {
            if (*(float *)(&stack0xfffffda8 + iVar10 * 4) < *(float *)(&stack0xfffffda8 + iVar14)) {
              iVar10 = iVar16;
            }
            iVar16 = iVar16 + 1;
            iVar14 = iVar14 + 4;
          } while (iVar16 < local_28);
        }
        local_38 = local_38 + 1;
        *(int *)&local_30->field_0xc60 = iVar10;
        local_30 = (CDeformableModel *)&local_30->field_0x60;
        iVar10 = local_34;
      } while (local_38 < *(int *)&this_ptr->field_0xc00);
    }
    if (local_24 != (CDeformableModelInstance *)0x0) {
      (*(code *)**(uint **)&local_24->field_0x50)(local_24,2);
    }
    iVar10 = 0;
    pCVar3 = this_ptr;
    if (0 < local_28) {
      do {
        iVar16 = core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_005431b0
                           (this_ptr,iVar10);
        iVar10 = iVar10 + 1;
        *(int *)&pCVar3->field_0x26fc = iVar16;
        pCVar3 = (CDeformableModel *)&pCVar3->field_0x4;
      } while (iVar10 < local_28);
      return;
    }
  }
  return;
}
