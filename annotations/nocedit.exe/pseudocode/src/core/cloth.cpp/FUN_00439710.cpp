// Name: core_cloth.cpp_FUN_00439710
// Address: 00439710
// Address Range: [[00439710, 0043a108]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_00439710()
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043c950 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c290 (0043c290) at 0043c2bc [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c430 (0043c430) at 0043c4df [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d5ea [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2c40 (004d2c40) at 004d2c8b [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f5cb [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_00520500 (00520500) at 00520526 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d88e0 (005d88e0) at 005d8ae9 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 (005e56c0) at 005e5748 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065bb3c
// Function calls:
//   core_cloth.cpp_ConnectingVerticesCheck_FUN_004394e0
//   core_cloth.cpp_OrientBoneCheck_FUN_0043a110
//   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_cloth.cpp_FUN_00439710(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void core_cloth_cpp_FUN_00439710
               (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,int param_5,
               undefined4 *param_6,undefined4 *param_7,int param_8,CDeformableModelInstance *param_9
               ,int param_10,CDeformableModelInstance *param_11,undefined4 param_12,
               CDeformableModelInstance *param_13)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  CDeformableModel *this_ptr;
  CVector3f *pCVar9;
  CDeformableModelInstance *pCVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  undefined4 *puVar21;
  BADSPACEBASE *in_ESP;
  byte *pbVar22;
  byte *pbVar23;
  float *pfVar24;
  CVector3f *pCVar25;
  float fVar26;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  CVector3f local_c4;
  float fStack_b8;
  float local_b4;
  float local_b0;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  CDeformableModel *local_7c;
  int local_78;
  int *local_70;
  int local_6c;
  float *local_68;
  CMatrix3x4f *local_60;
  float local_5c;
  float *local_58;
  int local_54;
  int local_50;
  float local_4c;
  float *local_48;
  CMatrix3x4f *local_44;
  float local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar7 = 0;
  if (0 < *(int *)(param_5 + 0x104)) {
    iVar12 = 0;
    do {
      *(int *)(*(int *)(param_5 + 0x3fe3c) + iVar12) = iVar7;
      iVar7 = iVar7 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar7 < *(int *)(param_5 + 0x104));
  }
  for (local_28 = 0; local_28 < *(int *)(param_5 + 0x104) + -1; local_28 = local_28 + 1) {
    iVar7 = local_28 + 1;
    if (iVar7 < *(int *)(param_5 + 0x104)) {
      local_88 = (float)(local_28 * 4);
      iVar12 = iVar7 * 4;
      do {
        piVar13 = (int *)((int)local_88 + *(int *)(param_5 + 0x3fe3c));
        iVar3 = *piVar13;
        iVar4 = *(int *)(iVar12 + *(int *)(param_5 + 0x3fe3c));
        local_78 = iVar3 * 0xc + *(int *)(param_5 + 0x10c);
        if (*(int *)(local_78 + 4) < *(int *)(iVar4 * 0xc + *(int *)(param_5 + 0x10c) + 4)) {
          *piVar13 = iVar4;
          *(int *)(iVar12 + *(int *)(param_5 + 0x3fe3c)) = iVar3;
        }
        local_8c = (float)(iVar4 * 0xc);
        puVar14 = (uint *)(iVar3 * 0xc + *(int *)(param_5 + 0x10c));
        if ((puVar14[1] == *(uint *)(*(int *)(param_5 + 0x10c) + (int)local_8c + 4)) &&
           (uVar5 = *puVar14, uVar15 = (int)uVar5 >> 0x1f,
           uVar6 = *(uint *)(*(int *)(param_5 + 0x10c) + (int)local_8c), uVar16 = (int)uVar6 >> 0x1f
           , (int)((uVar6 ^ uVar16) - uVar16) < (int)((uVar5 ^ uVar15) - uVar15))) {
          *(int *)(*(int *)(param_5 + 0x3fe3c) + (int)local_88) = iVar4;
          *(int *)(iVar12 + *(int *)(param_5 + 0x3fe3c)) = iVar3;
        }
        iVar7 = iVar7 + 1;
        iVar12 = iVar12 + 4;
      } while (iVar7 < *(int *)(param_5 + 0x104));
    }
  }
  if ((undefined4 *)(param_5 + 0x3fe48) != param_6) {
    *(undefined4 *)(param_5 + 0x3fe48) = *param_6;
    *(undefined4 *)(param_5 + 0x3fe4c) = param_6[1];
    *(undefined4 *)(param_5 + 0x3fe50) = param_6[2];
  }
  if ((undefined4 *)(param_5 + 0x3fe54) != param_7) {
    *(undefined4 *)(param_5 + 0x3fe54) = *param_7;
    *(undefined4 *)(param_5 + 0x3fe58) = param_7[1];
    *(undefined4 *)(param_5 + 0x3fe5c) = param_7[2];
  }
  iVar7 = 0;
  if (0 < *(int *)(param_5 + 0x104)) {
    puVar11 = (undefined4 *)(param_5 + 0x5798);
    puVar17 = (undefined4 *)(param_5 + 0x56e4);
    puVar8 = (undefined4 *)(param_5 + 0x56f0);
    do {
      puVar21 = (undefined4 *)(iVar7 * 0x11c + param_5 + 0x56d8);
      if (puVar21 != puVar11) {
        *puVar21 = *puVar11;
        puVar21[1] = puVar11[1];
        puVar21[2] = puVar11[2];
      }
      puVar17[2] = 0;
      puVar17[1] = puVar17[2];
      *puVar17 = puVar17[1];
      puVar8[2] = 0;
      puVar11 = puVar11 + 0x47;
      puVar8[5] = 0;
      iVar7 = iVar7 + 1;
      puVar8[1] = puVar8[2];
      puVar8[4] = puVar8[5];
      *puVar8 = puVar8[1];
      puVar8[3] = puVar8[5];
      puVar17 = puVar17 + 0x47;
      puVar8 = puVar8 + 0x47;
    } while (iVar7 < *(int *)(param_5 + 0x104));
  }
  core_cloth_cpp_ConnectingVerticesCheck_FUN_004394e0();
  iVar7 = 0;
  if (0 < *(int *)(param_5 + 0x3f028)) {
    do {
      param_6[*(int *)(param_5 + 0x3f02c) * 0x47 + 0x15d3] = 1;
      iVar7 = iVar7 + 1;
      param_5 = param_5 + 4;
    } while (iVar7 < (int)param_6[0xfc0a]);
  }
  if (param_9 != (CDeformableModelInstance *)0x0) {
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(param_9);
    local_7c = this_ptr;
    core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
    iVar7 = 0;
    if (0 < *(int *)(param_8 + 0x104)) {
      pfVar18 = (float *)(param_8 + 0x56d8);
      iVar12 = 0;
      pfVar20 = (float *)(param_8 + 0x5798);
      do {
        local_d8 = *pfVar20 + this_ptr->bbox_pool[0].min.x;
        fStack_d4 = pfVar20[1] + this_ptr->bbox_pool[0].min.y;
        fStack_d0 = pfVar20[2] + this_ptr->bbox_pool[0].min.z;
        if (pfVar18 != &local_d8) {
          *pfVar18 = local_d8;
          pfVar18[1] = fStack_d4;
          pfVar18[2] = fStack_d0;
        }
        piVar13 = (int *)(*(int *)(param_8 + 0x10c) + iVar12);
        pfVar20 = pfVar20 + 0x47;
        *piVar13 = (int)ROUND(*pfVar18 * _DAT_0065bb3c);
        piVar13[1] = (int)ROUND(pfVar18[1] * _DAT_0065bb3c);
        piVar13[2] = (int)ROUND(pfVar18[2] * _DAT_0065bb3c);
        iVar7 = iVar7 + 1;
        pfVar18 = pfVar18 + 0x47;
        iVar12 = iVar12 + 0xc;
      } while (iVar7 < *(int *)(param_8 + 0x104));
    }
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(param_11);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(param_11);
    local_18 = 0;
    if (0 < *(int *)(param_10 + 0x3f028)) {
      local_60 = (param_11->bone_transform).bone_world_matrices;
      local_6c = param_10 + 0x56d8;
      local_34 = param_10;
      do {
        pfVar18 = (float *)(local_6c + *(int *)(local_34 + 0x3f02c) * 0x11c);
        fVar26 = 1e+30;
        iVar7 = 0;
        if (0 < local_70[0xb]) {
          local_38 = 0;
          do {
            fStack_b8 = 0.0;
            local_b4 = 0.0;
            pfVar19 = (float *)(local_38 + local_70[0x10]);
            local_b0 = 0.0;
            pCVar25 = (CVector3f *)(pfVar19 + 4);
            pfVar20 = pfVar19;
            local_68 = pfVar19;
            for (iVar12 = 0; pfVar20 = pfVar20 + 1, iVar12 < (int)(uint)*(byte *)local_68;
                iVar12 = iVar12 + 1) {
              pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                 (&local_ac,pCVar25,local_60 + *(byte *)((int)pfVar19 + 1));
              local_90 = pCVar9->x * *pfVar20;
              local_8c = pCVar9->y * *pfVar20;
              local_88 = pCVar9->z * *pfVar20;
              pfVar19 = (float *)((int)pfVar19 + 1);
              pCVar25 = pCVar25 + 1;
              local_b4 = local_b4 + local_90;
              local_b0 = local_b0 + local_8c;
              local_ac.x = local_ac.x + local_88;
            }
            local_88 = *pfVar18 - fStack_b8;
            local_84 = pfVar18[1] - local_b4;
            local_80 = pfVar18[2] - local_b0;
            local_5c = local_80 * local_80 + local_88 * local_88 + local_84 * local_84;
            if (local_5c < fVar26) {
              fVar26 = local_5c;
              unaff_EBX = iVar7;
            }
            local_38 = local_38 + 0x34;
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_70[0xb]);
        }
        pbVar22 = (byte *)(unaff_EBX * 0x34 + local_70[0x10]);
        bVar2 = *pbVar22;
        iVar7 = 0;
        pfVar18[0x37] = (float)(uint)bVar2;
        if ((float)(uint)bVar2 != 0.0) {
          pfVar19 = pfVar18 + 0x3b;
          pfVar20 = (float *)(pbVar22 + 0x10);
          pbVar23 = pbVar22;
          pfVar24 = pfVar18;
          do {
            pfVar24[0x38] = (float)(uint)pbVar22[1];
            if (pfVar19 != pfVar20) {
              *pfVar19 = *pfVar20;
              pfVar19[1] = pfVar20[1];
              pfVar19[2] = pfVar20[2];
            }
            pfVar1 = (float *)(pbVar23 + 4);
            pfVar19 = pfVar19 + 3;
            pfVar20 = pfVar20 + 3;
            pbVar22 = pbVar22 + 1;
            pbVar23 = pbVar23 + 4;
            iVar7 = iVar7 + 1;
            pfVar24[0x44] = *pfVar1;
            pfVar24 = pfVar24 + 1;
          } while (iVar7 < (int)pfVar18[0x37]);
        }
        local_34 = local_34 + 4;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(param_10 + 0x3f028));
    }
    iVar7 = 0;
    if (0 < *(int *)(param_10 + 0x3ce8c)) {
      do {
        core_cloth_cpp_OrientBoneCheck_FUN_0043a110();
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_10 + 0x3ce8c));
    }
    local_7c = (CDeformableModel *)0x0;
    if (0 < *(int *)(param_10 + 0x3f028)) {
      local_44 = (param_13->bone_transform).bone_world_matrices;
      local_54 = param_10 + 0x56d8;
      local_24 = 0;
      local_20 = param_10;
      do {
        local_1c = 0;
        local_58 = (float *)(local_54 + *(int *)(local_20 + 0x3f02c) * 0x11c);
        local_2c = 0;
        local_28 = local_24 + param_10;
        while (local_1c < *local_70) {
          local_4c = 1e+30;
          local_30 = 0;
          local_3c = local_2c;
          for (iVar7 = 0; iVar7 < *(int *)((int)local_70 + local_3c + 0x2c); iVar7 = iVar7 + 1) {
            pfVar20 = (float *)(local_30 + *(int *)((int)local_70 + local_3c + 0x40));
            local_dc = 0.0;
            local_d8 = 0.0;
            pCVar25 = (CVector3f *)(pfVar20 + 4);
            fStack_d4 = 0.0;
            pfVar18 = pfVar20;
            local_48 = pfVar20;
            for (iVar12 = 0; pfVar18 = pfVar18 + 1, iVar12 < (int)(uint)*(byte *)local_48;
                iVar12 = iVar12 + 1) {
              pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                 (&local_c4,pCVar25,local_44 + *(byte *)((int)pfVar20 + 1));
              local_dc = pCVar9->z * *pfVar18;
              pfVar20 = (float *)((int)pfVar20 + 1);
              pCVar25 = pCVar25 + 1;
              local_d8 = local_d8 + pCVar9->x * *pfVar18;
              fStack_d4 = fStack_d4 + pCVar9->y * *pfVar18;
              fStack_d0 = fStack_d0 + local_dc;
            }
            local_a0 = *local_58 - local_dc;
            local_9c = local_58[1] - local_d8;
            local_98 = local_58[2] - fStack_d4;
            local_40 = local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c;
            if (local_40 < local_4c) {
              local_50 = iVar7;
              local_4c = local_40;
            }
            local_30 = local_30 + 0x34;
          }
          local_2c = local_2c + 4;
          local_1c = local_1c + 1;
          *(int *)(local_28 + 0x3f1bc) = local_50;
          local_28 = local_28 + 400;
        }
        local_24 = local_24 + 4;
        local_20 = local_20 + 4;
        local_7c = (CDeformableModel *)((int)local_7c + 1);
      } while ((int)local_7c < *(int *)(param_10 + 0x3f028));
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(param_13);
  }
  iVar7 = 0;
  pCVar10 = param_11;
  if (0 < (int)param_11->transformed_vertices[0xe].y) {
    do {
      pCVar10[2].bone_transform.bone_world_matrices[0x14].m[0].y = -NAN;
      iVar7 = iVar7 + 1;
      pCVar10 = (CDeformableModelInstance *)&pCVar10->transformed_vertices[0x10].y;
    } while (iVar7 < (int)param_11->transformed_vertices[0xe].y);
  }
  param_11[0x1d].bone_transform.bone_world_matrices[8].m[0].y = 0.0;
  param_11[0x1d].bone_transform.bone_world_matrices[8].m[0].x =
       param_11[0x1d].bone_transform.bone_world_matrices[8].m[0].y;
  param_11[0x1d].bone_transform.bone_world_matrices[8].m[0].w =
       param_11[0x1d].bone_transform.bone_world_matrices[8].m[0].x;
  return;
}


// Assembly code:
// 00439710: PUSH EBX
//   Label: core_cloth.cpp_FUN_00439710
// 00439711: PUSH ESI
// 00439712: PUSH EDI
// 00439713: PUSH EBP
// 00439714: SUB ESP,0xec
// 0043971a: MOV EDX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439721: MOV ECX,dword ptr [EDX + 0x104]
// 00439727: XOR EAX,EAX
// 00439729: TEST ECX,ECX
// 0043972b: JLE 0x00439760
//   XREF to: 00439760 (CONDITIONAL_JUMP)
// 0043972d: XOR EDX,EDX
// 0043972f: MOV ECX,dword ptr [ESP + 0x100]
//   Label: LAB_0043972f
//   XREF to: Stack[0x4] (READ)
// 00439736: MOV ECX,dword ptr [ECX + 0x3fe3c]
// 0043973c: MOV dword ptr [ECX + EDX*0x1],EAX
// 0043973f: MOV ECX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439746: INC EAX
// 00439747: MOV EBX,dword ptr [ECX + 0x104]
// 0043974d: ADD EDX,0x4
// 00439750: CMP EAX,EBX
// 00439752: JL 0x0043972f
//   XREF to: 0043972f (CONDITIONAL_JUMP)
// 00439754: LEA EAX,[EAX]
// 0043975a: LEA EDX,[EDX]
// 00439760: XOR ESI,ESI
//   Label: LAB_00439760
// 00439762: MOV dword ptr [ESP + 0xd4],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 00439769: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_00439769
//   XREF to: Stack[0x4] (READ)
// 00439770: MOV EAX,dword ptr [EAX + 0x104]
// 00439776: MOV EDI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x28] (READ)
// 0043977d: DEC EAX
// 0043977e: CMP EAX,EDI
// 00439780: JLE 0x004398a7
//   XREF to: 004398a7 (CONDITIONAL_JUMP)
// 00439786: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 0043978d: LEA EBP,[EDI + 0x1]
// 00439790: CMP EBP,dword ptr [EAX + 0x104]
// 00439796: JGE 0x0043989b
//   XREF to: 0043989b (CONDITIONAL_JUMP)
// 0043979c: LEA EAX,[EDI*0x4 + 0x0]
// 004397a3: LEA EBX,[EBP*0x4 + 0x0]
// 004397aa: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 004397ae: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_004397ae
//   XREF to: Stack[0x4] (READ)
// 004397b5: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x88] (READ)
// 004397b9: MOV EAX,dword ptr [EAX + 0x3fe3c]
// 004397bf: ADD EDX,EAX
// 004397c1: MOV EDI,dword ptr [EDX]
// 004397c3: MOV ESI,dword ptr [EBX + EAX*0x1]
// 004397c6: IMUL EAX,EDI,0xc
// 004397c9: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 004397d0: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 004397d7: MOV ECX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x78] (READ)
// 004397de: MOV EAX,dword ptr [EAX + 0x10c]
// 004397e4: ADD ECX,EAX
// 004397e6: MOV dword ptr [ESP + 0x84],ECX
//   XREF to: Stack[-0x78] (WRITE)
// 004397ed: IMUL ECX,ESI,0xc
// 004397f0: ADD ECX,EAX
// 004397f2: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x78] (READ)
// 004397f9: MOV EAX,dword ptr [EAX + 0x4]
// 004397fc: CMP EAX,dword ptr [ECX + 0x4]
// 004397ff: JGE 0x00439813
//   XREF to: 00439813 (CONDITIONAL_JUMP)
// 00439801: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439808: MOV dword ptr [EDX],ESI
// 0043980a: MOV EAX,dword ptr [EAX + 0x3fe3c]
// 00439810: MOV dword ptr [EBX + EAX*0x1],EDI
// 00439813: IMUL EDX,EDI,0xc
//   Label: LAB_00439813
// 00439816: IMUL ECX,ESI,0xc
// 00439819: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439820: MOV EAX,dword ptr [EAX + 0x10c]
// 00439826: ADD EDX,EAX
// 00439828: MOV dword ptr [ESP + 0x70],ECX
//   XREF to: Stack[-0x8c] (WRITE)
// 0043982c: ADD EAX,ECX
// 0043982e: MOV ECX,dword ptr [EDX + 0x4]
// 00439831: CMP ECX,dword ptr [EAX + 0x4]
// 00439834: JNZ 0x00439882
//   XREF to: 00439882 (CONDITIONAL_JUMP)
// 00439836: MOV EAX,dword ptr [EDX]
// 00439838: CDQ
// 00439839: XOR EAX,EDX
// 0043983b: SUB EAX,EDX
// 0043983d: MOV ECX,EAX
// 0043983f: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439846: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x8c] (READ)
// 0043984a: MOV EAX,dword ptr [EAX + 0x10c]
// 00439850: ADD EAX,EDX
// 00439852: MOV EAX,dword ptr [EAX]
// 00439854: CDQ
// 00439855: XOR EAX,EDX
// 00439857: SUB EAX,EDX
// 00439859: CMP ECX,EAX
// 0043985b: JLE 0x00439882
//   XREF to: 00439882 (CONDITIONAL_JUMP)
// 0043985d: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439864: MOV ECX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x88] (READ)
// 00439868: MOV EAX,dword ptr [EAX + 0x3fe3c]
// 0043986e: ADD EAX,ECX
// 00439870: MOV dword ptr [EAX],ESI
// 00439872: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439879: MOV EAX,dword ptr [EAX + 0x3fe3c]
// 0043987f: MOV dword ptr [EBX + EAX*0x1],EDI
// 00439882: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_00439882
//   XREF to: Stack[0x4] (READ)
// 00439889: INC EBP
// 0043988a: MOV ECX,dword ptr [EAX + 0x104]
// 00439890: ADD EBX,0x4
// 00439893: CMP EBP,ECX
// 00439895: JL 0x004397ae
//   XREF to: 004397ae (CONDITIONAL_JUMP)
// 0043989b: INC dword ptr [ESP + 0xd4]
//   Label: LAB_0043989b
//   XREF to: Stack[-0x28] (READ_WRITE)
// 004398a2: JMP 0x00439769
//   XREF to: 00439769 (UNCONDITIONAL_JUMP)
// 004398a7: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_004398a7
//   XREF to: Stack[0x4] (READ)
// 004398ae: MOV EBP,dword ptr [ESP + 0x104]
//   XREF to: Stack[0x8] (READ)
// 004398b5: ADD EAX,0x3fe48
// 004398ba: CMP EAX,EBP
// 004398bc: JZ 0x004398d0
//   XREF to: 004398d0 (CONDITIONAL_JUMP)
// 004398be: MOV EDX,EBP
// 004398c0: MOV ECX,dword ptr [EDX]
// 004398c2: MOV dword ptr [EAX],ECX
// 004398c4: MOV ECX,dword ptr [EDX + 0x4]
// 004398c7: MOV dword ptr [EAX + 0x4],ECX
// 004398ca: MOV ECX,dword ptr [EDX + 0x8]
// 004398cd: MOV dword ptr [EAX + 0x8],ECX
// 004398d0: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_004398d0
//   XREF to: Stack[0x4] (READ)
// 004398d7: MOV EDX,dword ptr [ESP + 0x108]
//   XREF to: Stack[0xc] (READ)
// 004398de: ADD EAX,0x3fe54
// 004398e3: CMP EAX,EDX
// 004398e5: JZ 0x004398f7
//   XREF to: 004398f7 (CONDITIONAL_JUMP)
// 004398e7: MOV ECX,dword ptr [EDX]
// 004398e9: MOV dword ptr [EAX],ECX
// 004398eb: MOV ECX,dword ptr [EDX + 0x4]
// 004398ee: MOV dword ptr [EAX + 0x4],ECX
// 004398f1: MOV ECX,dword ptr [EDX + 0x8]
// 004398f4: MOV dword ptr [EAX + 0x8],ECX
// 004398f7: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_004398f7
//   XREF to: Stack[0x4] (READ)
// 004398fe: MOV ECX,dword ptr [EAX + 0x104]
// 00439904: XOR EBP,EBP
// 00439906: TEST ECX,ECX
// 00439908: JLE 0x004399b3
//   XREF to: 004399b3 (CONDITIONAL_JUMP)
// 0043990e: LEA ESI,[EAX + 0x56d8]
// 00439914: LEA ECX,[ESI + 0xc0]
// 0043991a: LEA EAX,[ESI + 0x18]
// 0043991d: LEA EDX,[ESI + 0xc]
// 00439920: IMUL EBX,EBP,0x11c
//   Label: LAB_00439920
// 00439926: ADD EBX,ESI
// 00439928: CMP EBX,ECX
// 0043992a: JZ 0x0043993c
//   XREF to: 0043993c (CONDITIONAL_JUMP)
// 0043992c: MOV EDI,dword ptr [ECX]
// 0043992e: MOV dword ptr [EBX],EDI
// 00439930: MOV EDI,dword ptr [ECX + 0x4]
// 00439933: MOV dword ptr [EBX + 0x4],EDI
// 00439936: MOV EDI,dword ptr [ECX + 0x8]
// 00439939: MOV dword ptr [EBX + 0x8],EDI
// 0043993c: MOV EBX,dword ptr [ESP + 0x100]
//   Label: LAB_0043993c
//   XREF to: Stack[0x4] (READ)
// 00439943: MOV dword ptr [EDX + 0x8],0x0
// 0043994a: ADD EAX,0x11c
// 0043994f: MOV EDI,dword ptr [EDX + 0x8]
// 00439952: MOV dword ptr [EDX + 0x4],EDI
// 00439955: MOV EDI,dword ptr [EDX + 0x4]
// 00439958: MOV dword ptr [EDX],EDI
// 0043995a: MOV dword ptr [EAX + 0xfffffeec],0x0
// 00439964: ADD ECX,0x11c
// 0043996a: MOV dword ptr [EAX + 0xfffffef8],0x0
// 00439974: INC EBP
// 00439975: FLD float ptr [EAX + 0xfffffef8]
// 0043997b: MOV EDI,dword ptr [EAX + 0xfffffeec]
// 00439981: MOV dword ptr [EAX + 0xfffffee8],EDI
// 00439987: FST float ptr [EAX + 0xfffffef4]
// 0043998d: MOV EDI,dword ptr [EAX + 0xfffffee8]
// 00439993: MOV dword ptr [EAX + 0xfffffee4],EDI
// 00439999: FSTP float ptr [EAX + 0xfffffef0]
// 0043999f: MOV EDI,dword ptr [EBX + 0x104]
// 004399a5: ADD EDX,0x11c
// 004399ab: CMP EBP,EDI
// 004399ad: JL 0x00439920
//   XREF to: 00439920 (CONDITIONAL_JUMP)
// 004399b3: MOV EBP,dword ptr [ESP + 0x100]
//   Label: LAB_004399b3
//   XREF to: Stack[0x4] (READ)
// 004399ba: PUSH EBP
// 004399bb: CALL core_cloth.cpp_ConnectingVerticesCheck_FUN_004394e0
//   XREF to: 004394e0 (UNCONDITIONAL_CALL)
// 004399c0: ADD ESP,0x4
// 004399c3: MOV ECX,dword ptr [EBP + 0x3f028]
// 004399c9: XOR EAX,EAX
// 004399cb: TEST ECX,ECX
// 004399cd: JLE 0x00439a00
//   XREF to: 00439a00 (CONDITIONAL_JUMP)
// 004399cf: MOV EBX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 004399d6: MOV EDX,dword ptr [EBP + 0x3f02c]
//   Label: LAB_004399d6
// 004399dc: IMUL EDX,EDX,0x11c
// 004399e2: ADD EDX,EBX
// 004399e4: MOV dword ptr [EDX + 0x574c],0x1
// 004399ee: INC EAX
// 004399ef: MOV ESI,dword ptr [EBX + 0x3f028]
// 004399f5: ADD EBP,0x4
// 004399f8: CMP EAX,ESI
// 004399fa: JL 0x004399d6
//   XREF to: 004399d6 (CONDITIONAL_JUMP)
// 004399fc: LEA EAX,[EAX]
// 00439a00: MOV EDI,dword ptr [ESP + 0x10c]
//   Label: LAB_00439a00
//   XREF to: Stack[0x10] (READ)
// 00439a07: TEST EDI,EDI
// 00439a09: JZ 0x00439fc5
//   XREF to: 00439fc5 (CONDITIONAL_JUMP)
// 00439a0f: PUSH EDI
// 00439a10: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 00439a15: ADD ESP,0x4
// 00439a18: PUSH EAX
// 00439a19: MOV EBX,EAX
// 00439a1b: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 00439a1f: CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   XREF to: 0059a810 (UNCONDITIONAL_CALL)
// 00439a24: ADD ESP,0x4
// 00439a27: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439a2e: MOV EBP,EDI
// 00439a30: MOV EDX,dword ptr [EAX + 0x104]
// 00439a36: XOR EBP,EDI
// 00439a38: TEST EDX,EDX
// 00439a3a: JLE 0x00439ae4
//   XREF to: 00439ae4 (CONDITIONAL_JUMP)
// 00439a40: LEA EDX,[EAX + 0x56d8]
// 00439a46: LEA ESI,[EBX + 0x8140]
// 00439a4c: XOR EDI,EDI
// 00439a4e: LEA ECX,[EDX + 0xc0]
// 00439a54: FLD float ptr [ECX]
//   Label: LAB_00439a54
// 00439a56: FADD float ptr [ESI]
// 00439a58: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0xe4] (WRITE)
// 00439a5c: FLD float ptr [ECX + 0x4]
// 00439a5f: FADD float ptr [ESI + 0x4]
// 00439a62: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xe0] (WRITE)
// 00439a66: FLD float ptr [ECX + 0x8]
// 00439a69: FADD float ptr [ESI + 0x8]
// 00439a6c: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0xe4] (DATA)
// 00439a70: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0xdc] (WRITE)
// 00439a74: CMP EDX,EAX
// 00439a76: JZ 0x00439a8c
//   XREF to: 00439a8c (CONDITIONAL_JUMP)
// 00439a78: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0xe4] (DATA)
// 00439a7c: MOV dword ptr [EDX],EAX
// 00439a7e: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xe0] (READ)
// 00439a82: MOV dword ptr [EDX + 0x4],EAX
// 00439a85: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0xdc] (READ)
// 00439a89: MOV dword ptr [EDX + 0x8],EAX
// 00439a8c: MOV EBX,dword ptr [ESP + 0x100]
//   Label: LAB_00439a8c
//   XREF to: Stack[0x4] (READ)
// 00439a93: MOV EBX,dword ptr [EBX + 0x10c]
// 00439a99: MOV EAX,EDX
// 00439a9b: ADD EBX,EDI
// 00439a9d: ADD ECX,0x11c
// 00439aa3: FLD float ptr [EAX]
// 00439aa5: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 00439aab: FISTP dword ptr [EBX]
// 00439aad: FLD float ptr [EAX + 0x4]
// 00439ab0: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 00439ab6: FISTP dword ptr [EBX + 0x4]
// 00439ab9: FLD float ptr [EAX + 0x8]
// 00439abc: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 00439ac2: FISTP dword ptr [EBX + 0x8]
// 00439ac5: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439acc: INC EBP
// 00439acd: ADD EDX,0x11c
// 00439ad3: MOV EBX,dword ptr [EAX + 0x104]
// 00439ad9: ADD EDI,0xc
// 00439adc: CMP EBP,EBX
// 00439ade: JL 0x00439a54
//   XREF to: 00439a54 (CONDITIONAL_JUMP)
// 00439ae4: MOV ESI,dword ptr [ESP + 0x10c]
//   Label: LAB_00439ae4
//   XREF to: Stack[0x10] (READ)
// 00439aeb: PUSH ESI
// 00439aec: CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 00439af1: ADD ESP,0x4
// 00439af4: PUSH ESI
// 00439af5: CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 00439afa: ADD ESP,0x4
// 00439afd: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439b04: XOR EBP,EBP
// 00439b06: MOV EDX,dword ptr [EAX + 0x3f028]
// 00439b0c: MOV dword ptr [ESP + 0xd0],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 00439b13: TEST EDX,EDX
// 00439b15: JLE 0x00439c77
//   XREF to: 00439c77 (CONDITIONAL_JUMP)
// 00439b1b: LEA EAX,[ESI + 0xe80]
// 00439b21: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00439b28: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439b2f: ADD EAX,0x56d8
// 00439b34: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00439b38: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439b3f: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00439b46: MOV EAX,dword ptr [ESP + 0xb4]
//   Label: LAB_00439b46
//   XREF to: Stack[-0x48] (READ)
// 00439b4d: IMUL EAX,dword ptr [EAX + 0x3f02c],0x11c
// 00439b57: MOV ECX,0x7149f2ca
// 00439b5c: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x80] (READ)
// 00439b60: XOR EBX,EBX
// 00439b62: ADD EDX,EAX
// 00439b64: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x84] (READ)
// 00439b68: MOV dword ptr [ESP + 0xe8],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00439b6f: MOV dword ptr [ESP + 0xdc],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00439b76: MOV ESI,dword ptr [EAX + 0x2c]
// 00439b79: MOV dword ptr [ESP + 0xe0],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00439b80: TEST ESI,ESI
// 00439b82: JLE 0x00439eeb
//   XREF to: 00439eeb (CONDITIONAL_JUMP)
// 00439b88: MOV dword ptr [ESP + 0xb0],EBX
//   XREF to: Stack[-0x4c] (WRITE)
// 00439b8f: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_00439b8f
//   XREF to: Stack[-0x84] (READ)
// 00439b93: MOV EDX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x4c] (READ)
// 00439b9a: XOR EBX,EBX
// 00439b9c: MOV EAX,dword ptr [EAX + 0x40]
// 00439b9f: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0xcc] (WRITE)
// 00439ba3: MOV dword ptr [ESP + 0x34],EBX
//   XREF to: Stack[-0xc8] (WRITE)
// 00439ba7: ADD EDX,EAX
// 00439ba9: MOV dword ptr [ESP + 0x38],EBX
//   XREF to: Stack[-0xc4] (WRITE)
// 00439bad: MOV dword ptr [ESP + 0x80],EDX
//   XREF to: Stack[-0x7c] (WRITE)
// 00439bb4: LEA EBX,[EDX + 0x4]
// 00439bb7: LEA EDI,[EDX + 0x10]
// 00439bba: XOR EBP,EBP
// 00439bbc: MOV ESI,EDX
// 00439bbe: MOV EDX,dword ptr [ESP + 0x80]
//   Label: LAB_00439bbe
//   XREF to: Stack[-0x7c] (READ)
// 00439bc5: XOR EAX,EAX
// 00439bc7: MOV AL,byte ptr [EDX]
// 00439bc9: CMP EBP,EAX
// 00439bcb: JGE 0x00439e52
//   XREF to: 00439e52 (CONDITIONAL_JUMP)
// 00439bd1: XOR EAX,EAX
// 00439bd3: MOV AL,byte ptr [ESI + 0x1]
// 00439bd6: IMUL EAX,EAX,0x30
// 00439bd9: ADD EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x74] (READ)
// 00439be0: PUSH EAX
// 00439be1: PUSH EDI
// 00439be2: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0xc0] (DATA)
// 00439be6: PUSH EAX
// 00439be7: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00439bec: FLD float ptr [EAX]
// 00439bee: FMUL float ptr [EBX]
// 00439bf0: ADD ESP,0xc
// 00439bf3: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0xa8] (WRITE)
// 00439bf7: FLD float ptr [EAX + 0x4]
// 00439bfa: FMUL float ptr [EBX]
// 00439bfc: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0xa4] (WRITE)
// 00439c00: FLD float ptr [EAX + 0x8]
// 00439c03: FMUL float ptr [EBX]
// 00439c05: INC ESI
// 00439c06: ADD EBX,0x4
// 00439c09: INC EBP
// 00439c0a: ADD EDI,0xc
// 00439c0d: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0xcc] (READ)
// 00439c11: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0xc8] (READ)
// 00439c15: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0xc4] (READ)
// 00439c19: FXCH ST2
// 00439c1b: FADD float ptr [ESP + 0x54]
//   XREF to: Stack[-0xa8] (READ)
// 00439c1f: FXCH
// 00439c21: FADD float ptr [ESP + 0x58]
//   XREF to: Stack[-0xa4] (READ)
// 00439c25: FXCH ST3
// 00439c27: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xa0] (WRITE)
// 00439c2b: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0xcc] (WRITE)
// 00439c2f: FADD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xa0] (READ)
// 00439c33: FXCH
// 00439c35: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0xc8] (WRITE)
// 00439c39: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0xc4] (WRITE)
// 00439c3d: JMP 0x00439bbe
//   XREF to: 00439bbe (UNCONDITIONAL_JUMP)
// 00439c42: MOV EBX,dword ptr [ESP + 0xb4]
//   Label: LAB_00439c42
//   XREF to: Stack[-0x48] (READ)
// 00439c49: MOV ESI,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x2c] (READ)
// 00439c50: MOV EDX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439c57: ADD EBX,0x4
// 00439c5a: INC ESI
// 00439c5b: MOV EDI,dword ptr [EDX + 0x3f028]
// 00439c61: MOV dword ptr [ESP + 0xb4],EBX
//   XREF to: Stack[-0x48] (WRITE)
// 00439c68: MOV dword ptr [ESP + 0xd0],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 00439c6f: CMP ESI,EDI
// 00439c71: JL 0x00439b46
//   XREF to: 00439b46 (CONDITIONAL_JUMP)
// 00439c77: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_00439c77
//   XREF to: Stack[0x4] (READ)
// 00439c7e: MOV EBP,dword ptr [EAX + 0x3ce8c]
// 00439c84: XOR EBX,EBX
// 00439c86: TEST EBP,EBP
// 00439c88: JLE 0x00439cb0
//   XREF to: 00439cb0 (CONDITIONAL_JUMP)
// 00439c8a: MOV EDI,dword ptr [ESP + 0x10c]
//   XREF to: Stack[0x10] (READ)
// 00439c91: MOV EBP,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439c98: PUSH EDI
//   Label: LAB_00439c98
// 00439c99: PUSH EBX
// 00439c9a: PUSH EBP
// 00439c9b: CALL core_cloth.cpp_OrientBoneCheck_FUN_0043a110
//   XREF to: 0043a110 (UNCONDITIONAL_CALL)
// 00439ca0: INC EBX
// 00439ca1: MOV EDX,dword ptr [EBP + 0x3ce8c]
// 00439ca7: ADD ESP,0xc
// 00439caa: CMP EBX,EDX
// 00439cac: JL 0x00439c98
//   XREF to: 00439c98 (CONDITIONAL_JUMP)
// 00439cae: MOV EAX,EAX
// 00439cb0: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_00439cb0
//   XREF to: Stack[0x4] (READ)
// 00439cb7: XOR ECX,ECX
// 00439cb9: MOV EBX,dword ptr [EAX + 0x3f028]
// 00439cbf: MOV dword ptr [ESP + 0x6c],ECX
//   XREF to: Stack[-0x90] (WRITE)
// 00439cc3: TEST EBX,EBX
// 00439cc5: JLE 0x00439fb5
//   XREF to: 00439fb5 (CONDITIONAL_JUMP)
// 00439ccb: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[0x10] (READ)
// 00439cd2: ADD EAX,0xe80
// 00439cd7: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00439cde: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439ce5: ADD EAX,0x56d8
// 00439cea: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00439cf1: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439cf8: MOV dword ptr [ESP + 0xc4],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 00439cff: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00439d06: MOV EAX,dword ptr [ESP + 0xc8]
//   Label: LAB_00439d06
//   XREF to: Stack[-0x34] (READ)
// 00439d0d: IMUL EAX,dword ptr [EAX + 0x3f02c],0x11c
// 00439d17: MOV ESI,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439d1e: XOR ECX,ECX
// 00439d20: MOV EDX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x68] (READ)
// 00439d27: MOV dword ptr [ESP + 0xcc],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00439d2e: ADD EDX,EAX
// 00439d30: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x38] (READ)
// 00439d37: MOV dword ptr [ESP + 0xbc],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 00439d3e: ADD EAX,ESI
// 00439d40: MOV dword ptr [ESP + 0x90],EDX
//   XREF to: Stack[-0x6c] (WRITE)
// 00439d47: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00439d4e: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_00439d4e
//   XREF to: Stack[-0x84] (READ)
// 00439d52: MOV EDI,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x30] (READ)
// 00439d59: CMP EDI,dword ptr [EAX]
// 00439d5b: JGE 0x00439f75
//   XREF to: 00439f75 (CONDITIONAL_JUMP)
// 00439d61: MOV EBP,0x7149f2ca
// 00439d66: XOR EAX,EAX
// 00439d68: XOR EDX,EDX
// 00439d6a: MOV dword ptr [ESP + 0x9c],EBP
//   XREF to: Stack[-0x60] (WRITE)
// 00439d71: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00439d78: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x40] (READ)
// 00439d7f: MOV dword ptr [ESP + 0xb8],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 00439d86: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00439d8d: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_00439d8d
//   XREF to: Stack[-0x84] (READ)
// 00439d91: ADD EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x50] (READ)
// 00439d98: MOV EDX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x24] (READ)
// 00439d9f: CMP EDX,dword ptr [EAX + 0x2c]
// 00439da2: JGE 0x0043a034
//   XREF to: 0043a034 (CONDITIONAL_JUMP)
// 00439da8: MOV EDX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x44] (READ)
// 00439daf: MOV EAX,dword ptr [EAX + 0x40]
// 00439db2: XOR ESI,ESI
// 00439db4: ADD EDX,EAX
// 00439db6: XOR EAX,EAX
// 00439db8: MOV dword ptr [ESP + 0xa0],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 00439dbf: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 00439dc3: LEA EBX,[EDX + 0x4]
// 00439dc6: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 00439dca: LEA EDI,[EDX + 0x10]
// 00439dcd: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 00439dd1: MOV EBP,EDX
// 00439dd3: MOV EDX,dword ptr [ESP + 0xa0]
//   Label: LAB_00439dd3
//   XREF to: Stack[-0x5c] (READ)
// 00439dda: XOR EAX,EAX
// 00439ddc: MOV AL,byte ptr [EDX]
// 00439dde: CMP ESI,EAX
// 00439de0: JGE 0x0043a07a
//   XREF to: 0043a07a (CONDITIONAL_JUMP)
// 00439de6: XOR EAX,EAX
// 00439de8: MOV AL,byte ptr [EBP + 0x1]
// 00439deb: IMUL EAX,EAX,0x30
// 00439dee: ADD EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x58] (READ)
// 00439df5: PUSH EAX
// 00439df6: PUSH EDI
// 00439df7: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0xd8] (DATA)
// 00439dfb: PUSH EAX
// 00439dfc: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00439e01: FLD float ptr [EAX]
// 00439e03: FMUL float ptr [EBX]
// 00439e05: ADD ESP,0xc
// 00439e08: FSTP float ptr [ESP]
//   XREF to: Stack[-0xfc] (DATA)
// 00439e0b: FLD float ptr [EAX + 0x4]
// 00439e0e: FMUL float ptr [EBX]
// 00439e10: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0xf8] (WRITE)
// 00439e14: FLD float ptr [EAX + 0x8]
// 00439e17: FMUL float ptr [EBX]
// 00439e19: INC EBP
// 00439e1a: ADD EBX,0x4
// 00439e1d: INC ESI
// 00439e1e: ADD EDI,0xc
// 00439e21: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0xf0] (READ)
// 00439e25: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0xec] (READ)
// 00439e29: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0xe8] (READ)
// 00439e2d: FXCH ST2
// 00439e2f: FADD float ptr [ESP]
//   XREF to: Stack[-0xfc] (DATA)
// 00439e32: FXCH
// 00439e34: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0xf8] (READ)
// 00439e38: FXCH ST3
// 00439e3a: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0xf4] (WRITE)
// 00439e3e: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0xf0] (WRITE)
// 00439e42: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0xf4] (READ)
// 00439e46: FXCH
// 00439e48: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0xec] (WRITE)
// 00439e4c: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0xe8] (WRITE)
// 00439e50: JMP 0x00439dd3
//   XREF to: 00439dd3 (UNCONDITIONAL_JUMP)
// 00439e52: MOV EAX,dword ptr [ESP + 0xe0]
//   Label: LAB_00439e52
//   XREF to: Stack[-0x1c] (READ)
// 00439e59: FLD float ptr [EAX]
// 00439e5b: FSUB float ptr [ESP + 0x30]
//   XREF to: Stack[-0xcc] (READ)
// 00439e5f: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x9c] (WRITE)
// 00439e63: FLD float ptr [EAX + 0x4]
// 00439e66: FSUB float ptr [ESP + 0x34]
//   XREF to: Stack[-0xc8] (READ)
// 00439e6a: FST float ptr [ESP + 0x64]
//   XREF to: Stack[-0x98] (WRITE)
// 00439e6e: FMUL float ptr [ESP + 0x64]
//   XREF to: Stack[-0x98] (READ)
// 00439e72: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0x9c] (READ)
// 00439e76: FMUL ST0
// 00439e78: FLD float ptr [EAX + 0x8]
// 00439e7b: FSUB float ptr [ESP + 0x38]
//   XREF to: Stack[-0xc4] (READ)
// 00439e7f: FXCH
// 00439e81: FADDP ST2,ST0
// 00439e83: FST float ptr [ESP + 0x68]
//   XREF to: Stack[-0x94] (WRITE)
// 00439e87: FMUL float ptr [ESP + 0x68]
//   XREF to: Stack[-0x94] (READ)
// 00439e8b: FADDP
// 00439e8d: FST float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x70] (WRITE)
// 00439e94: FCOMP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x14] (READ)
// 00439e9b: FNSTSW AX
// 00439e9d: SAHF
// 00439e9e: JNC 0x00439ebc
//   XREF to: 00439ebc (CONDITIONAL_JUMP)
// 00439ea0: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x70] (READ)
// 00439ea7: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00439eae: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x20] (READ)
// 00439eb5: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00439ebc: MOV ESI,dword ptr [ESP + 0xb0]
//   Label: LAB_00439ebc
//   XREF to: Stack[-0x4c] (READ)
// 00439ec3: MOV EDI,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x20] (READ)
// 00439eca: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x84] (READ)
// 00439ece: ADD ESI,0x34
// 00439ed1: INC EDI
// 00439ed2: MOV EBP,dword ptr [EDX + 0x2c]
// 00439ed5: MOV dword ptr [ESP + 0xb0],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 00439edc: MOV dword ptr [ESP + 0xdc],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 00439ee3: CMP EDI,EBP
// 00439ee5: JL 0x00439b8f
//   XREF to: 00439b8f (CONDITIONAL_JUMP)
// 00439eeb: IMUL EBP,dword ptr [ESP + 0xe4],0x34
//   Label: LAB_00439eeb
//   XREF to: Stack[-0x18] (READ)
// 00439ef3: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x84] (READ)
// 00439ef7: MOV EAX,dword ptr [EAX + 0x40]
// 00439efa: ADD EBP,EAX
// 00439efc: XOR EAX,EAX
// 00439efe: MOV EDX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x1c] (READ)
// 00439f05: MOV AL,byte ptr [EBP]
// 00439f08: XOR EDI,EDI
// 00439f0a: MOV dword ptr [EDX + 0xdc],EAX
// 00439f10: TEST EAX,EAX
// 00439f12: JLE 0x00439c42
//   XREF to: 00439c42 (CONDITIONAL_JUMP)
// 00439f18: LEA EAX,[EDX + 0xec]
// 00439f1e: LEA EBX,[EBP + 0x10]
// 00439f21: MOV ESI,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x1c] (READ)
// 00439f28: MOV EDX,EBP
// 00439f2a: XOR ECX,ECX
//   Label: LAB_00439f2a
// 00439f2c: MOV CL,byte ptr [EDX + 0x1]
// 00439f2f: MOV dword ptr [ESI + 0xe0],ECX
// 00439f35: CMP EAX,EBX
// 00439f37: JZ 0x00439f49
//   XREF to: 00439f49 (CONDITIONAL_JUMP)
// 00439f39: MOV ECX,dword ptr [EBX]
// 00439f3b: MOV dword ptr [EAX],ECX
// 00439f3d: MOV ECX,dword ptr [EBX + 0x4]
// 00439f40: MOV dword ptr [EAX + 0x4],ECX
// 00439f43: MOV ECX,dword ptr [EBX + 0x8]
// 00439f46: MOV dword ptr [EAX + 0x8],ECX
// 00439f49: FLD float ptr [EBP + 0x4]
//   Label: LAB_00439f49
// 00439f4c: MOV ECX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x1c] (READ)
// 00439f53: ADD EAX,0xc
// 00439f56: ADD EBX,0xc
// 00439f59: INC EDX
// 00439f5a: ADD ESI,0x4
// 00439f5d: ADD EBP,0x4
// 00439f60: INC EDI
// 00439f61: FSTP float ptr [ESI + 0x10c]
// 00439f67: CMP EDI,dword ptr [ECX + 0xdc]
// 00439f6d: JGE 0x00439c42
//   XREF to: 00439c42 (CONDITIONAL_JUMP)
// 00439f73: JMP 0x00439f2a
//   XREF to: 00439f2a (UNCONDITIONAL_JUMP)
// 00439f75: MOV ECX,dword ptr [ESP + 0xc4]
//   Label: LAB_00439f75
//   XREF to: Stack[-0x38] (READ)
// 00439f7c: MOV EBX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x34] (READ)
// 00439f83: MOV ESI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x90] (READ)
// 00439f87: MOV EDX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439f8e: ADD ECX,0x4
// 00439f91: ADD EBX,0x4
// 00439f94: INC ESI
// 00439f95: MOV EDI,dword ptr [EDX + 0x3f028]
// 00439f9b: MOV dword ptr [ESP + 0xc4],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 00439fa2: MOV dword ptr [ESP + 0xc8],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 00439fa9: MOV dword ptr [ESP + 0x6c],ESI
//   XREF to: Stack[-0x90] (WRITE)
// 00439fad: CMP ESI,EDI
// 00439faf: JL 0x00439d06
//   XREF to: 00439d06 (CONDITIONAL_JUMP)
// 00439fb5: MOV EBP,dword ptr [ESP + 0x10c]
//   Label: LAB_00439fb5
//   XREF to: Stack[0x10] (READ)
// 00439fbc: PUSH EBP
// 00439fbd: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 00439fc2: ADD ESP,0x4
// 00439fc5: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_00439fc5
//   XREF to: Stack[0x4] (READ)
// 00439fcc: MOV ECX,dword ptr [EAX + 0x104]
// 00439fd2: XOR EDX,EDX
// 00439fd4: TEST ECX,ECX
// 00439fd6: JLE 0x0043a000
//   XREF to: 0043a000 (CONDITIONAL_JUMP)
// 00439fd8: MOV ECX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 00439fdf: MOV dword ptr [EAX + 0x57b0],0xffffffff
//   Label: LAB_00439fdf
// 00439fe9: INC EDX
// 00439fea: MOV EBX,dword ptr [ECX + 0x104]
// 00439ff0: ADD EAX,0x11c
// 00439ff5: CMP EDX,EBX
// 00439ff7: JL 0x00439fdf
//   XREF to: 00439fdf (CONDITIONAL_JUMP)
// 00439ff9: LEA EAX,[EAX]
// 00439fff: NOP
// 0043a000: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_0043a000
//   XREF to: Stack[0x4] (READ)
// 0043a007: MOV dword ptr [EAX + 0x3fe6c],0x0
// 0043a011: MOV EDX,dword ptr [EAX + 0x3fe6c]
// 0043a017: MOV dword ptr [EAX + 0x3fe68],EDX
// 0043a01d: MOV EDX,dword ptr [EAX + 0x3fe68]
// 0043a023: MOV dword ptr [EAX + 0x3fe64],EDX
// 0043a029: ADD ESP,0xec
// 0043a02f: POP EBP
// 0043a030: POP EDI
// 0043a031: POP ESI
// 0043a032: POP EBX
// 0043a033: RET
// 0043a034: MOV ESI,dword ptr [ESP + 0xbc]
//   Label: LAB_0043a034
//   XREF to: Stack[-0x40] (READ)
// 0043a03b: MOV EDX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x3c] (READ)
// 0043a042: MOV EBP,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x30] (READ)
// 0043a049: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x64] (READ)
// 0043a050: ADD ESI,0x4
// 0043a053: LEA EDI,[EDX + 0x190]
// 0043a059: INC EBP
// 0043a05a: MOV dword ptr [EDX + 0x3f1bc],EAX
// 0043a060: MOV dword ptr [ESP + 0xbc],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 0043a067: MOV dword ptr [ESP + 0xc0],EDI
//   XREF to: Stack[-0x3c] (WRITE)
// 0043a06e: MOV dword ptr [ESP + 0xcc],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 0043a075: JMP 0x00439d4e
//   XREF to: 00439d4e (UNCONDITIONAL_JUMP)
// 0043a07a: MOV EAX,dword ptr [ESP + 0x90]
//   Label: LAB_0043a07a
//   XREF to: Stack[-0x6c] (READ)
// 0043a081: FLD float ptr [EAX]
// 0043a083: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[-0xf0] (READ)
// 0043a087: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0xb4] (WRITE)
// 0043a08b: FLD float ptr [EAX + 0x4]
// 0043a08e: FSUB float ptr [ESP + 0x10]
//   XREF to: Stack[-0xec] (READ)
// 0043a092: FST float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xb0] (WRITE)
// 0043a096: FMUL float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xb0] (READ)
// 0043a09a: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0xb4] (READ)
// 0043a09e: FMUL ST0
// 0043a0a0: FLD float ptr [EAX + 0x8]
// 0043a0a3: FSUB float ptr [ESP + 0x14]
//   XREF to: Stack[-0xe8] (READ)
// 0043a0a7: FXCH
// 0043a0a9: FADDP ST2,ST0
// 0043a0ab: FST float ptr [ESP + 0x50]
//   XREF to: Stack[-0xac] (WRITE)
// 0043a0af: FMUL float ptr [ESP + 0x50]
//   XREF to: Stack[-0xac] (READ)
// 0043a0b3: FADDP
// 0043a0b5: FST float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x54] (WRITE)
// 0043a0bc: FCOMP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x60] (READ)
// 0043a0c3: FNSTSW AX
// 0043a0c5: SAHF
// 0043a0c6: JNC 0x0043a0e4
//   XREF to: 0043a0e4 (CONDITIONAL_JUMP)
// 0043a0c8: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x54] (READ)
// 0043a0cf: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0043a0d6: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x24] (READ)
// 0043a0dd: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0043a0e4: MOV ESI,dword ptr [ESP + 0xd8]
//   Label: LAB_0043a0e4
//   XREF to: Stack[-0x24] (READ)
// 0043a0eb: MOV EBX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x44] (READ)
// 0043a0f2: INC ESI
// 0043a0f3: ADD EBX,0x34
// 0043a0f6: MOV dword ptr [ESP + 0xd8],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0043a0fd: MOV dword ptr [ESP + 0xb8],EBX
//   XREF to: Stack[-0x44] (WRITE)
// 0043a104: JMP 0x00439d8d
//   XREF to: 00439d8d (UNCONDITIONAL_JUMP)
