// Name: core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
// Address: 0047b1e0
// Address Range: [[0047b1e0, 0047bbb4]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0(CKeyFramedModel * this_ptr, float angle_threshold_radians)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00 (0047aa00) at 0047aa1a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Reducing_polygons_00620453
//   TerminatedCString s_core_dmodel_cpp_00620468
//   TerminatedCString s_Vertex_reducer_bug_or_CK_0062047b
//   double DOUBLE_006204b3 = -1
//   double DOUBLE_006204bb = 6.27445866074028
//   double DOUBLE_006204c3 = 6.29191195325972
//   int[3] g_TriangleMatchTableA
//   undefined4 DAT_006700f4
//   int[3] g_TriangleMatchTableB
//   undefined4 DAT_00670100
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
//   core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
//   core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0
//   core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0
//   core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
//   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_acos_FUN_00600162
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
          (CKeyFramedModel *this_ptr,float angle_threshold_radians)

{
  double x;
  uchar *puVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  int iVar10;
  int iVar11;
  float unaff_EBX;
  int iVar12;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  int *piVar16;
  float fVar17;
  byte bVar18;
  float10 fVar19;
  int aiStackY_10c8 [1005];
  double in_stack_ffffff08;
  double local_f0;
  int aiStack_e0 [6];
  undefined4 uStack_c8;
  undefined4 uStack_bc;
  CVector3f local_b0;
  float local_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  CVector3f local_88;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  CKeyFramedModel *local_6c;
  int local_68;
  CKeyFramedModel *local_64;
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
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  bVar18 = 0;
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->poly_count) && (0 < this_ptr->frame_count)) {
    core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(this_ptr);
    fVar19 = (float10)fcos((float10)angle_threshold_radians);
    fVar17 = (float)fVar19;
    local_6c = (CKeyFramedModel *)0x0;
    if (2000 < this_ptr->poly_count) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Reducing polygons...");
      local_68 = 1;
    }
    local_74 = 0;
    if (0 < this_ptr->part_count) {
      local_6c = this_ptr;
      iVar7 = 0;
      do {
        local_54 = local_6c->part_list[0].poly_count + iVar7;
        if (this_ptr->poly_count < local_54) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0x986;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
        }
        local_40 = iVar7;
        if (iVar7 < local_54) {
          local_64 = local_6c;
          local_5c = iVar7 * 0x48;
          local_60 = iVar7 << 2;
          do {
            local_24 = local_5c + (int)this_ptr->poly_vert_list;
            if (*(int *)(local_24 + 4) == 3) {
              if ((local_68 != 0) && ((char)local_40 == '\0')) {
                shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                          (g_CEditorToolsPtr,(float)local_40,(float)this_ptr->poly_count);
              }
              local_38 = local_40 + 1;
              if (local_38 < local_54) {
                local_58 = local_60;
                local_48 = local_38 * 0x48;
                local_4c = local_38 * 4;
                do {
                  local_18 = local_48 + (int)this_ptr->poly_vert_list;
                  if (((*(int *)(local_18 + 4) == 3) &&
                      (*(int *)(local_58 + (int)this_ptr->poly_texture_index_list) ==
                       *(int *)(local_4c + (int)this_ptr->poly_texture_index_list))) &&
                     ((puVar1 = this_ptr->env_map_opac_list, puVar1 == (uchar *)0x0 ||
                      (puVar1[local_40] == puVar1[local_38])))) {
                    local_2c = 0;
                    local_34 = 0;
                    local_3c = -1;
                    local_30 = local_24;
                    do {
                      iVar11 = 0;
                      local_1c = local_34;
                      iVar12 = 0;
                      local_20 = local_30;
                      iVar7 = local_18;
                      do {
                        if ((*(int *)(iVar7 + 0x18) == *(int *)(local_30 + 0x18)) &&
                           (*(int *)(local_24 +
                                     *(int *)((int)g_TriangleMatchTableA + local_34) * 0xc + 0x18)
                            == *(int *)(local_18 +
                                        *(int *)((int)g_TriangleMatchTableB + iVar11) * 0xc + 0x18))
                           ) {
                          local_44 = iVar12;
                          local_3c = local_2c;
                          break;
                        }
                        iVar11 = iVar11 + 4;
                        iVar12 = iVar12 + 1;
                        iVar7 = iVar7 + 0xc;
                      } while (iVar11 < 0xc);
                      iVar11 = local_3c;
                      iVar7 = local_44;
                      local_2c = local_2c + 1;
                      local_34 = local_34 + 4;
                      local_30 = local_30 + 0xc;
                    } while (local_2c < 3);
                    if (-1 < local_3c) {
                      iVar12 = local_3c * 0xc + local_24;
                      piVar14 = (int *)(iVar12 + 0x1c + (uint)bVar18 * -8);
                      aiStack_e0[0] = *(int *)(iVar12 + 0x18);
                      aiStack_e0[(uint)bVar18 * -2 + 1] = *piVar14;
                      iVar10 = local_24;
                      aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2] =
                           piVar14[(uint)bVar18 * -2 + 1];
                      iVar12 = g_TriangleMatchTableA[iVar11];
                      iVar7 = g_TriangleMatchTableA[iVar7] * 0xc + local_18;
                      piVar14 = (int *)(iVar7 + 0x1c + (uint)bVar18 * -8);
                      aiStack_e0[3] = *(undefined4 *)(iVar7 + 0x18);
                      aiStack_e0[(uint)bVar18 * -2 + 4] = *piVar14;
                      aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5] =
                           piVar14[(uint)bVar18 * -2 + 1];
                      iVar7 = iVar12 * 0xc + iVar10;
                      piVar14 = (int *)(iVar7 + 0x1c + (uint)bVar18 * -8);
                      uStack_c8 = *(undefined4 *)(iVar7 + 0x18);
                      aiStack_e0[(uint)bVar18 * -2 + 7] = *piVar14;
                      aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 8] =
                           piVar14[(uint)bVar18 * -2 + 1];
                      iVar10 = g_TriangleMatchTableB[iVar11] * 0xc + iVar10;
                      local_50 = 1;
                      piVar14 = (int *)(iVar10 + 0x1c + (uint)bVar18 * -8);
                      uStack_bc = *(undefined4 *)(iVar10 + 0x18);
                      aiStack_e0[(uint)bVar18 * -2 + 10] = *piVar14;
                      aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xb] =
                           piVar14[(uint)bVar18 * -2 + 1];
                      local_28 = 0;
                      if (0 < this_ptr->frame_count) {
                        do {
                          pCVar8 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                             (this_ptr,&local_b0,local_28,local_38);
                          pCVar9 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                             (this_ptr,&local_88,local_24,local_3c);
                          if (pCVar9->z * pCVar8->z + pCVar9->x * pCVar8->x + pCVar9->y * pCVar8->y
                              < unaff_EBX) goto LAB_0047b55a;
                          iVar7 = 2;
                          iVar11 = 0;
                          do {
                            local_88.z = (float)(iStack_14 +
                                                *(int *)((int)aiStack_e0 + (int)fVar17) * 0xc);
                            piVar14 = (int *)(aiStack_e0[((iVar11 + 1) % 4) * 3] * 0xc + iStack_14);
                            piVar16 = (int *)(aiStack_e0[(iVar7 % 4) * 3] * 0xc + iStack_14);
                            fVar3 = (float)(*(int *)local_88.z - *piVar14);
                            fVar4 = (float)(*(int *)((int)local_88.z + 4) - piVar14[1]);
                            fVar6 = (float)(*(int *)((int)local_88.z + 8) - piVar14[2]);
                            fVar5 = SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
                            if (fVar5 <= 0.0) {
                              fStack_94 = 0.0;
                              fStack_98 = 0.0;
                              local_90 = 0.0;
                            }
                            else {
                              fVar5 = 1.0 / fVar5;
                              fStack_98 = fVar3 * fVar5;
                              fStack_94 = fVar4 * fVar5;
                              local_90 = fVar6 * fVar5;
                            }
                            fVar3 = (float)(*piVar16 - *piVar14);
                            fVar4 = (float)(piVar16[1] - piVar14[1]);
                            fVar6 = (float)(piVar16[2] - piVar14[2]);
                            fVar5 = SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
                            if (fVar5 <= 0.0) {
                              local_a0 = 0.0;
                              local_a4 = 0.0;
                              local_9c = 0.0;
                            }
                            else {
                              fVar5 = 1.0 / fVar5;
                              local_a4 = fVar3 * fVar5;
                              local_a0 = fVar4 * fVar5;
                              local_9c = fVar6 * fVar5;
                            }
                            x = (double)(local_90 * local_9c +
                                        fStack_98 * local_a4 + fStack_94 * local_a0);
                            if (x < 1.0) {
                              if (DOUBLE_006204b3 < x) {
                                local_f0 = crt_math_c_acos_FUN_00600162(x);
                              }
                              else {
                                local_f0 = 3.1415926535;
                              }
                            }
                            else {
                              local_f0 = 0.0;
                            }
                            iVar7 = iVar7 + 1;
                            iVar11 = iVar11 + 1;
                            in_stack_ffffff08 = in_stack_ffffff08 + local_f0;
                            fVar17 = (float)((int)fVar17 + 0xc);
                          } while (iVar11 < 4);
                          if ((in_stack_ffffff08 < DOUBLE_006204bb) ||
                             (DOUBLE_006204c3 < in_stack_ffffff08)) goto LAB_0047b55a;
                          local_28 = local_28 + 1;
                        } while (local_28 < this_ptr->frame_count);
                      }
                      if (local_50 != 0) {
                        piVar14 = (int *)(local_24 + 0x1c + (uint)bVar18 * -8);
                        *(int *)(local_24 + 0x18) = aiStack_e0[0];
                        *piVar14 = aiStack_e0[(uint)bVar18 * -2 + 1];
                        piVar14[(uint)bVar18 * -2 + 1] =
                             aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2];
                        piVar14 = (int *)(local_24 + 0x28 + (uint)bVar18 * -8);
                        *(int *)(local_24 + 0x24) = aiStack_e0[3];
                        *piVar14 = aiStack_e0[(uint)bVar18 * -2 + 4];
                        piVar14[(uint)bVar18 * -2 + 1] =
                             aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5];
                        piVar14 = (int *)(local_24 + 0x34 + (uint)bVar18 * -8);
                        *(undefined4 *)(local_24 + 0x30) = uStack_c8;
                        *piVar14 = aiStack_e0[(uint)bVar18 * -2 + 7];
                        piVar14[(uint)bVar18 * -2 + 1] =
                             aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 8];
                        piVar14 = (int *)(local_24 + 0x40 + (uint)bVar18 * -8);
                        *(undefined4 *)(local_24 + 0x3c) = uStack_bc;
                        *piVar14 = aiStack_e0[(uint)bVar18 * -2 + 10];
                        piVar14[(uint)bVar18 * -2 + 1] =
                             aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xb];
                        *(undefined4 *)(local_24 + 4) = 4;
                        *(undefined4 *)(local_24 + 0x14) = 0;
                        uVar2 = *(undefined4 *)(local_24 + 0x14);
                        *(undefined4 *)(local_24 + 0x10) = uVar2;
                        *(undefined4 *)(local_24 + 0xc) = uVar2;
                        *(undefined4 *)(local_24 + 8) = uVar2;
                        *(undefined4 *)(local_18 + 4) = 0;
                        piVar14 = &local_64->part_list[0].poly_count;
                        *piVar14 = *piVar14 + -1;
                        break;
                      }
                    }
                  }
LAB_0047b55a:
                  local_38 = local_38 + 1;
                  local_48 = local_48 + 0x48;
                  local_4c = local_4c + 4;
                } while (local_38 < local_54);
              }
            }
            local_40 = local_40 + 1;
            local_5c = local_5c + 0x48;
            local_60 = local_60 + 4;
          } while (local_40 < local_54);
        }
        local_74 = local_74 + 1;
        local_6c = (CKeyFramedModel *)(local_6c->model_filename + 8);
        iVar7 = local_54;
      } while (local_74 < this_ptr->part_count);
    }
    iVar7 = 0;
    iVar11 = 0;
    if (0 < this_ptr->poly_count) {
      local_70 = 0;
      local_7c = 0;
      local_78 = 0;
      iVar12 = 0;
      do {
        puVar13 = (undefined4 *)(local_78 + (int)this_ptr->poly_vert_list);
        if (2 < (int)puVar13[1]) {
          if (iVar11 < iVar7) {
            puVar15 = (undefined4 *)(local_7c + (int)this_ptr->poly_vert_list);
            for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar15 = *puVar13;
              puVar13 = puVar13 + (uint)bVar18 * -2 + 1;
              puVar15 = puVar15 + (uint)bVar18 * -2 + 1;
            }
            *(undefined4 *)((int)this_ptr->poly_texture_index_list + iVar12) =
                 *(undefined4 *)(local_70 + (int)this_ptr->poly_texture_index_list);
            puVar1 = this_ptr->env_map_opac_list;
            if (puVar1 != (uchar *)0x0) {
              puVar1[iVar11] = puVar1[iVar7];
            }
          }
          iVar11 = iVar11 + 1;
          local_7c = local_7c + 0x48;
          iVar12 = iVar12 + 4;
        }
        iVar7 = iVar7 + 1;
        local_78 = local_78 + 0x48;
        local_70 = local_70 + 4;
      } while (iVar7 < this_ptr->poly_count);
    }
    this_ptr->poly_count = iVar11;
    core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(this_ptr);
    if (local_5c != 0) {
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      return;
    }
  }
  return;
}


// Assembly code:
// 0047b1e0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
// 0047b1e1: PUSH ESI
// 0047b1e2: PUSH EDI
// 0047b1e3: PUSH EBP
// 0047b1e4: MOV EBP,ESP
// 0047b1e6: SUB ESP,0xfc
// 0047b1ec: AND ESP,0xfffffff8
// 0047b1ef: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047b1f2: PUSH EDX
// 0047b1f3: CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   XREF to: 0047bf40 (UNCONDITIONAL_CALL)
// 0047b1f8: ADD ESP,0x4
// 0047b1fb: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047b1fe: CMP dword ptr [EAX + 0x110],0x1
// 0047b205: JL 0x0047b210
//   XREF to: 0047b210 (CONDITIONAL_JUMP)
// 0047b207: CMP dword ptr [EAX + 0x100],0x1
// 0047b20e: JGE 0x0047b217
//   XREF to: 0047b217 (CONDITIONAL_JUMP)
// 0047b210: MOV ESP,EBP
//   Label: LAB_0047b210
// 0047b212: POP EBP
// 0047b213: POP EDI
// 0047b214: POP ESI
// 0047b215: POP EBX
// 0047b216: RET
// 0047b217: PUSH EAX
//   Label: LAB_0047b217
// 0047b218: MOV ESI,EAX
// 0047b21a: CALL core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0
//   XREF to: 0047bdb0 (UNCONDITIONAL_CALL)
// 0047b21f: ADD ESP,0x4
// 0047b222: MOV EDI,ESI
// 0047b224: PUSH EDI
// 0047b225: CALL core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0
//   XREF to: 0047bbc0 (UNCONDITIONAL_CALL)
// 0047b22a: ADD ESP,0x4
// 0047b22d: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047b230: FCOS
// 0047b232: MOV EDX,dword ptr [EDI + 0x110]
// 0047b238: XOR EAX,EAX
// 0047b23a: FSTP float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x1c] (WRITE)
// 0047b241: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0047b248: CMP EDX,0x7d0
// 0047b24e: JLE 0x0047b270
//   XREF to: 0047b270 (CONDITIONAL_JUMP)
// 0047b250: PUSH 0x620453
//   XREF to: 00620453 (DATA)
// 0047b255: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0047b25b: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0047b25c: MOV EBX,0x1
// 0047b261: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 0047b266: ADD ESP,0x8
// 0047b269: MOV dword ptr [ESP + 0x98],EBX
//   XREF to: Stack[-0x78] (WRITE)
// 0047b270: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0047b270
//   XREF to: Stack[0x4] (READ)
// 0047b273: XOR ESI,ESI
// 0047b275: MOV EDX,dword ptr [EAX + 0x5584]
// 0047b27b: MOV dword ptr [ESP + 0x8c],ESI
//   XREF to: Stack[-0x84] (WRITE)
// 0047b282: TEST EDX,EDX
// 0047b284: JLE 0x0047b3a7
//   XREF to: 0047b3a7 (CONDITIONAL_JUMP)
// 0047b28a: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0047b291: MOV EAX,dword ptr [ESP + 0x94]
//   Label: LAB_0047b291
//   XREF to: Stack[-0x7c] (READ)
// 0047b298: MOV EAX,dword ptr [EAX + 0x558c]
// 0047b29e: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047b2a1: ADD EAX,ESI
// 0047b2a3: MOV EDI,dword ptr [EDX + 0x110]
// 0047b2a9: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0047b2b0: CMP EAX,EDI
// 0047b2b2: JLE 0x0047b2d6
//   XREF to: 0047b2d6 (CONDITIONAL_JUMP)
// 0047b2b4: MOV EAX,0x620468
//   XREF to: 00620468 (PARAM)
// 0047b2b9: MOV EDX,0x986
// 0047b2be: PUSH 0x62047b
//   XREF to: 0062047b (DATA)
// 0047b2c3: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0047b2c8: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0047b2ce: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047b2d3: ADD ESP,0x4
// 0047b2d6: MOV ECX,dword ptr [ESP + 0xac]
//   Label: LAB_0047b2d6
//   XREF to: Stack[-0x64] (READ)
// 0047b2dd: MOV dword ptr [ESP + 0xc0],ESI
//   XREF to: Stack[-0x50] (WRITE)
// 0047b2e4: CMP ESI,ECX
// 0047b2e6: JGE 0x0047b36f
//   XREF to: 0047b36f (CONDITIONAL_JUMP)
// 0047b2ec: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x7c] (READ)
// 0047b2f3: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0047b2fa: IMUL EAX,ESI,0x48
// 0047b2fd: SHL ESI,0x2
// 0047b300: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0047b307: MOV dword ptr [ESP + 0xa0],ESI
//   XREF to: Stack[-0x70] (WRITE)
// 0047b30e: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0047b30e
//   XREF to: Stack[0x4] (READ)
// 0047b311: MOV EDX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x6c] (READ)
// 0047b318: MOV EAX,dword ptr [EAX + 0x114]
// 0047b31e: ADD EDX,EAX
// 0047b320: MOV ESI,dword ptr [EDX + 0x4]
// 0047b323: MOV dword ptr [ESP + 0xdc],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0047b32a: CMP ESI,0x3
// 0047b32d: JZ 0x0047b4d2
//   XREF to: 0047b4d2 (CONDITIONAL_JUMP)
// 0047b333: MOV EAX,dword ptr [ESP + 0xa4]
//   Label: LAB_0047b333
//   XREF to: Stack[-0x6c] (READ)
// 0047b33a: MOV EDX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x70] (READ)
// 0047b341: MOV ECX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x50] (READ)
// 0047b348: MOV EBX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x64] (READ)
// 0047b34f: ADD EAX,0x48
// 0047b352: ADD EDX,0x4
// 0047b355: INC ECX
// 0047b356: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0047b35d: MOV dword ptr [ESP + 0xa0],EDX
//   XREF to: Stack[-0x70] (WRITE)
// 0047b364: MOV dword ptr [ESP + 0xc0],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 0047b36b: CMP ECX,EBX
// 0047b36d: JL 0x0047b30e
//   XREF to: 0047b30e (CONDITIONAL_JUMP)
// 0047b36f: MOV ESI,dword ptr [ESP + 0xac]
//   Label: LAB_0047b36f
//   XREF to: Stack[-0x64] (READ)
// 0047b376: MOV ECX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x7c] (READ)
// 0047b37d: MOV EBX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x84] (READ)
// 0047b384: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047b387: ADD ECX,0x8
// 0047b38a: INC EBX
// 0047b38b: MOV EDI,dword ptr [EDX + 0x5584]
// 0047b391: MOV dword ptr [ESP + 0x94],ECX
//   XREF to: Stack[-0x7c] (WRITE)
// 0047b398: MOV dword ptr [ESP + 0x8c],EBX
//   XREF to: Stack[-0x84] (WRITE)
// 0047b39f: CMP EBX,EDI
// 0047b3a1: JL 0x0047b291
//   XREF to: 0047b291 (CONDITIONAL_JUMP)
// 0047b3a7: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_0047b3a7
//   XREF to: Stack[0x4] (READ)
// 0047b3aa: XOR EAX,EAX
// 0047b3ac: MOV EBX,dword ptr [ECX + 0x110]
// 0047b3b2: XOR EDX,EDX
// 0047b3b4: TEST EBX,EBX
// 0047b3b6: JLE 0x0047b484
//   XREF to: 0047b484 (CONDITIONAL_JUMP)
// 0047b3bc: MOV dword ptr [ESP + 0x90],EDX
//   XREF to: Stack[-0x80] (WRITE)
// 0047b3c3: MOV dword ptr [ESP + 0x84],EDX
//   XREF to: Stack[-0x8c] (WRITE)
// 0047b3ca: MOV dword ptr [ESP + 0x88],EDX
//   XREF to: Stack[-0x88] (WRITE)
// 0047b3d1: XOR EBX,EBX
// 0047b3d3: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_0047b3d3
//   XREF to: Stack[0x4] (READ)
// 0047b3d6: MOV ESI,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x88] (READ)
// 0047b3dd: MOV ECX,dword ptr [ECX + 0x114]
// 0047b3e3: ADD ESI,ECX
// 0047b3e5: CMP dword ptr [ESI + 0x4],0x3
// 0047b3e9: JL 0x0047b450
//   XREF to: 0047b450 (CONDITIONAL_JUMP)
// 0047b3eb: CMP EDX,EAX
// 0047b3ed: JGE 0x0047b43b
//   XREF to: 0047b43b (CONDITIONAL_JUMP)
// 0047b3ef: MOV EDI,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x8c] (READ)
// 0047b3f6: ADD EDI,ECX
// 0047b3f8: MOV ECX,0x12
// 0047b3fd: MOVSD.REP ES:EDI,ESI
// 0047b3ff: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047b402: MOV ESI,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x80] (READ)
// 0047b409: MOV ECX,dword ptr [ECX + 0x118]
// 0047b40f: ADD ESI,ECX
// 0047b411: ADD ECX,EBX
// 0047b413: MOV dword ptr [ESP + 0xf8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0047b41a: MOV ECX,dword ptr [ESI]
// 0047b41c: MOV ESI,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x18] (READ)
// 0047b423: MOV dword ptr [ESI],ECX
// 0047b425: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047b428: MOV ESI,dword ptr [ECX + 0x11c]
// 0047b42e: TEST ESI,ESI
// 0047b430: JZ 0x0047b43b
//   XREF to: 0047b43b (CONDITIONAL_JUMP)
// 0047b432: LEA EDI,[ESI + EAX*0x1]
// 0047b435: ADD ESI,EDX
// 0047b437: MOV CL,byte ptr [EDI]
// 0047b439: MOV byte ptr [ESI],CL
// 0047b43b: MOV EDI,dword ptr [ESP + 0x84]
//   Label: LAB_0047b43b
//   XREF to: Stack[-0x8c] (READ)
// 0047b442: INC EDX
// 0047b443: ADD EDI,0x48
// 0047b446: ADD EBX,0x4
// 0047b449: MOV dword ptr [ESP + 0x84],EDI
//   XREF to: Stack[-0x8c] (WRITE)
// 0047b450: MOV ESI,dword ptr [ESP + 0x88]
//   Label: LAB_0047b450
//   XREF to: Stack[-0x88] (READ)
// 0047b457: MOV EDI,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x80] (READ)
// 0047b45e: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047b461: INC EAX
// 0047b462: ADD ESI,0x48
// 0047b465: ADD EDI,0x4
// 0047b468: MOV dword ptr [ESP + 0x88],ESI
//   XREF to: Stack[-0x88] (WRITE)
// 0047b46f: MOV ESI,dword ptr [ECX + 0x110]
// 0047b475: MOV dword ptr [ESP + 0x90],EDI
//   XREF to: Stack[-0x80] (WRITE)
// 0047b47c: CMP EAX,ESI
// 0047b47e: JL 0x0047b3d3
//   XREF to: 0047b3d3 (CONDITIONAL_JUMP)
// 0047b484: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0047b484
//   XREF to: Stack[0x4] (READ)
// 0047b487: PUSH EAX
// 0047b488: MOV EDI,EAX
// 0047b48a: MOV dword ptr [EAX + 0x110],EDX
// 0047b490: CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   XREF to: 0047bf40 (UNCONDITIONAL_CALL)
// 0047b495: ADD ESP,0x4
// 0047b498: MOV EAX,EDI
// 0047b49a: PUSH EAX
// 0047b49b: CALL core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
//   XREF to: 0047aa30 (UNCONDITIONAL_CALL)
// 0047b4a0: ADD ESP,0x4
// 0047b4a3: MOV EDX,EDI
// 0047b4a5: PUSH EDX
// 0047b4a6: CALL core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
//   XREF to: 00477e60 (UNCONDITIONAL_CALL)
// 0047b4ab: ADD ESP,0x4
// 0047b4ae: CMP dword ptr [ESP + 0x98],0x0
//   XREF to: Stack[-0x78] (READ)
// 0047b4b6: JZ 0x0047b210
//   XREF to: 0047b210 (CONDITIONAL_JUMP)
// 0047b4bc: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0047b4c2: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0047b4c3: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 0047b4c8: ADD ESP,0x4
// 0047b4cb: MOV ESP,EBP
// 0047b4cd: POP EBP
// 0047b4ce: POP EDI
// 0047b4cf: POP ESI
// 0047b4d0: POP EBX
// 0047b4d1: RET
// 0047b4d2: CMP dword ptr [ESP + 0x98],0x0
//   Label: LAB_0047b4d2
//   XREF to: Stack[-0x78] (READ)
// 0047b4da: JZ 0x0047b4ea
//   XREF to: 0047b4ea (CONDITIONAL_JUMP)
// 0047b4dc: TEST byte ptr [ESP + 0xc0],0xff
//   XREF to: Stack[-0x50] (READ)
// 0047b4e4: JZ 0x0047b59b
//   XREF to: 0047b59b (CONDITIONAL_JUMP)
// 0047b4ea: MOV EAX,dword ptr [ESP + 0xc0]
//   Label: LAB_0047b4ea
//   XREF to: Stack[-0x50] (READ)
// 0047b4f1: INC EAX
// 0047b4f2: MOV EDX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x64] (READ)
// 0047b4f9: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0047b500: CMP EAX,EDX
// 0047b502: JGE 0x0047b333
//   XREF to: 0047b333 (CONDITIONAL_JUMP)
// 0047b508: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x70] (READ)
// 0047b50f: MOV EDX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x48] (READ)
// 0047b516: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 0047b51d: IMUL EAX,EDX,0x48
// 0047b520: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0047b527: LEA EAX,[EDX*0x4 + 0x0]
// 0047b52e: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0047b535: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0047b535
//   XREF to: Stack[0x4] (READ)
// 0047b538: MOV EDX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x58] (READ)
// 0047b53f: MOV EAX,dword ptr [EAX + 0x114]
// 0047b545: ADD EDX,EAX
// 0047b547: MOV ECX,dword ptr [EDX + 0x4]
// 0047b54a: MOV dword ptr [ESP + 0xe8],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0047b551: CMP ECX,0x3
// 0047b554: JZ 0x0047b5d8
//   XREF to: 0047b5d8 (CONDITIONAL_JUMP)
// 0047b55a: MOV ECX,dword ptr [ESP + 0xb8]
//   Label: LAB_0047b55a
//   XREF to: Stack[-0x58] (READ)
// 0047b561: MOV EBX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x5c] (READ)
// 0047b568: MOV ESI,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x48] (READ)
// 0047b56f: MOV EDI,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x64] (READ)
// 0047b576: ADD ECX,0x48
// 0047b579: ADD EBX,0x4
// 0047b57c: INC ESI
// 0047b57d: MOV dword ptr [ESP + 0xb8],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 0047b584: MOV dword ptr [ESP + 0xb4],EBX
//   XREF to: Stack[-0x5c] (WRITE)
// 0047b58b: MOV dword ptr [ESP + 0xc8],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 0047b592: CMP ESI,EDI
// 0047b594: JL 0x0047b535
//   XREF to: 0047b535 (CONDITIONAL_JUMP)
// 0047b596: JMP 0x0047b333
//   XREF to: 0047b333 (UNCONDITIONAL_JUMP)
// 0047b59b: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0047b59b
//   XREF to: Stack[0x4] (READ)
// 0047b59e: SUB ESP,0x4
// 0047b5a1: FILD dword ptr [EAX + 0x110]
// 0047b5a7: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x50] (READ)
// 0047b5ae: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0047b5b5: FSTP float ptr [ESP]
//   XREF to: Stack[-0x114] (DATA)
// 0047b5b8: FILD dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x18] (READ)
// 0047b5bf: SUB ESP,0x4
// 0047b5c2: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0047b5c7: FSTP float ptr [ESP]
//   XREF to: Stack[-0x118] (DATA)
// 0047b5ca: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0047b5cb: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 0047b5d0: ADD ESP,0xc
// 0047b5d3: JMP 0x0047b4ea
//   XREF to: 0047b4ea (UNCONDITIONAL_JUMP)
// 0047b5d8: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0047b5d8
//   XREF to: Stack[0x4] (READ)
// 0047b5db: MOV ECX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x5c] (READ)
// 0047b5e2: MOV EAX,dword ptr [EAX + 0x118]
// 0047b5e8: MOV EDX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x68] (READ)
// 0047b5ef: ADD ECX,EAX
// 0047b5f1: MOV EAX,dword ptr [EDX + EAX*0x1]
// 0047b5f4: CMP EAX,dword ptr [ECX]
// 0047b5f6: JNZ 0x0047b55a
//   XREF to: 0047b55a (CONDITIONAL_JUMP)
// 0047b5fc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047b5ff: MOV ESI,dword ptr [EAX + 0x11c]
// 0047b605: TEST ESI,ESI
// 0047b607: JNZ 0x0047ba55
//   XREF to: 0047ba55 (CONDITIONAL_JUMP)
// 0047b60d: MOV EDI,0xffffffff
//   Label: LAB_0047b60d
// 0047b612: XOR EAX,EAX
// 0047b614: XOR EDX,EDX
// 0047b616: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0047b61d: MOV dword ptr [ESP + 0xcc],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0047b624: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x34] (READ)
// 0047b62b: MOV dword ptr [ESP + 0xc4],EDI
//   XREF to: Stack[-0x4c] (WRITE)
// 0047b632: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0047b639: MOV EAX,dword ptr [ESP + 0xcc]
//   Label: LAB_0047b639
//   XREF to: Stack[-0x44] (READ)
// 0047b640: MOV ECX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x28] (READ)
// 0047b647: XOR EDX,EDX
// 0047b649: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0047b650: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x40] (READ)
// 0047b657: XOR EBX,EBX
// 0047b659: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0047b660: MOV ESI,dword ptr [ESP + 0xe0]
//   Label: LAB_0047b660
//   XREF to: Stack[-0x30] (READ)
// 0047b667: MOV EDI,dword ptr [ECX + 0x18]
// 0047b66a: CMP EDI,dword ptr [ESI + 0x18]
// 0047b66d: JNZ 0x0047ba77
//   XREF to: 0047ba77 (CONDITIONAL_JUMP)
// 0047b673: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x2c] (READ)
// 0047b67a: IMUL ESI,dword ptr [EAX + 0x6700f0],0xc
//   XREF to: 006700f0 (DATA)
//   XREF to: 006700f4 (DATA)
// 0047b681: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x34] (READ)
// 0047b688: MOV EDI,dword ptr [EDX + 0x6700fc]
//   XREF to: 006700fc (READ)
//   XREF to: 00670100 (READ)
// 0047b68e: ADD EAX,ESI
// 0047b690: IMUL ESI,EDI,0xc
// 0047b693: MOV EDI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x28] (READ)
// 0047b69a: ADD EDI,ESI
// 0047b69c: MOV ESI,dword ptr [EAX + 0x18]
// 0047b69f: CMP ESI,dword ptr [EDI + 0x18]
// 0047b6a2: JNZ 0x0047ba77
//   XREF to: 0047ba77 (CONDITIONAL_JUMP)
// 0047b6a8: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x3c] (READ)
// 0047b6af: MOV dword ptr [ESP + 0xbc],EBX
//   XREF to: Stack[-0x54] (WRITE)
// 0047b6b6: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0047b6bd: MOV ECX,dword ptr [ESP + 0xcc]
//   Label: LAB_0047b6bd
//   XREF to: Stack[-0x44] (READ)
// 0047b6c4: MOV EBX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x3c] (READ)
// 0047b6cb: MOV EDX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x40] (READ)
// 0047b6d2: ADD ECX,0x4
// 0047b6d5: INC EBX
// 0047b6d6: ADD EDX,0xc
// 0047b6d9: MOV dword ptr [ESP + 0xcc],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 0047b6e0: MOV dword ptr [ESP + 0xd4],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 0047b6e7: MOV dword ptr [ESP + 0xd0],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 0047b6ee: CMP EBX,0x3
// 0047b6f1: JL 0x0047b639
//   XREF to: 0047b639 (CONDITIONAL_JUMP)
// 0047b6f7: MOV EDI,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x4c] (READ)
// 0047b6fe: TEST EDI,EDI
// 0047b700: JL 0x0047b55a
//   XREF to: 0047b55a (CONDITIONAL_JUMP)
// 0047b706: MOV EDX,EDI
// 0047b708: IMUL EAX,EDI,0xc
// 0047b70b: ADD EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x34] (READ)
// 0047b712: LEA EDI,[ESP + 0x20]
//   XREF to: Stack[-0xf0] (DATA)
// 0047b716: LEA ESI,[EAX + 0x18]
// 0047b719: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x54] (READ)
// 0047b720: MOVSD ES:EDI,ESI
// 0047b721: MOVSD ES:EDI,ESI
// 0047b722: MOVSD ES:EDI,ESI
// 0047b723: IMUL ESI,dword ptr [EAX*0x4 + 0x6700f0],0xc
//   XREF to: 006700f0 (DATA)
// 0047b72b: MOV EAX,EDX
// 0047b72d: IMUL EDX,dword ptr [EAX*0x4 + 0x6700f0],0xc
//   XREF to: 006700f0 (DATA)
// 0047b735: ADD ESI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x28] (READ)
// 0047b73c: LEA EDI,[ESP + 0x2c]
//   XREF to: Stack[-0xe4] (DATA)
// 0047b740: LEA ESI,[ESI + 0x18]
// 0047b743: MOV EBX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x34] (READ)
// 0047b74a: MOVSD ES:EDI,ESI
// 0047b74b: MOVSD ES:EDI,ESI
// 0047b74c: MOVSD ES:EDI,ESI
// 0047b74d: ADD EDX,EBX
// 0047b74f: LEA EDI,[ESP + 0x38]
//   XREF to: Stack[-0xd8] (DATA)
// 0047b753: LEA ESI,[EDX + 0x18]
// 0047b756: MOVSD ES:EDI,ESI
// 0047b757: MOVSD ES:EDI,ESI
// 0047b758: MOVSD ES:EDI,ESI
// 0047b759: IMUL EAX,dword ptr [EAX*0x4 + 0x6700fc],0xc
//   XREF to: 006700fc (DATA)
// 0047b761: ADD EAX,EBX
// 0047b763: LEA ESI,[EAX + 0x18]
// 0047b766: MOV EAX,0x1
// 0047b76b: LEA EDI,[ESP + 0x44]
//   XREF to: Stack[-0xcc] (DATA)
// 0047b76f: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0047b776: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047b779: MOVSD ES:EDI,ESI
// 0047b77a: MOVSD ES:EDI,ESI
// 0047b77b: MOVSD ES:EDI,ESI
// 0047b77c: XOR EDX,EDX
// 0047b77e: MOV ECX,dword ptr [EAX + 0x100]
// 0047b784: MOV dword ptr [ESP + 0xd8],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 0047b78b: TEST ECX,ECX
// 0047b78d: JLE 0x0047bb1b
//   XREF to: 0047bb1b (CONDITIONAL_JUMP)
// 0047b793: MOV ECX,dword ptr [ESP + 0xc8]
//   Label: LAB_0047b793
//   XREF to: Stack[-0x48] (READ)
// 0047b79a: PUSH ECX
// 0047b79b: MOV EBX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x38] (READ)
// 0047b7a2: PUSH EBX
// 0047b7a3: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0xc0] (DATA)
// 0047b7a7: PUSH EAX
// 0047b7a8: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047b7ab: PUSH ESI
// 0047b7ac: CALL core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
//   XREF to: 0047c080 (UNCONDITIONAL_CALL)
// 0047b7b1: ADD ESP,0x10
// 0047b7b4: MOV EDI,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x50] (READ)
// 0047b7bb: PUSH EDI
// 0047b7bc: MOV EBX,EAX
// 0047b7be: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x38] (READ)
// 0047b7c5: PUSH EAX
// 0047b7c6: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[-0x9c] (DATA)
// 0047b7ca: PUSH EAX
// 0047b7cb: PUSH ESI
// 0047b7cc: CALL core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
//   XREF to: 0047c080 (UNCONDITIONAL_CALL)
// 0047b7d1: FLD float ptr [EAX + 0x4]
// 0047b7d4: FMUL float ptr [EBX + 0x4]
// 0047b7d7: FLD float ptr [EAX]
// 0047b7d9: FMUL float ptr [EBX]
// 0047b7db: FADDP
// 0047b7dd: FLD float ptr [EAX + 0x8]
// 0047b7e0: FMUL float ptr [EBX + 0x8]
// 0047b7e3: FADDP
// 0047b7e5: ADD ESP,0x10
// 0047b7e8: FCOMP float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x1c] (READ)
// 0047b7ef: FNSTSW AX
// 0047b7f1: SAHF
// 0047b7f2: JC 0x0047b55a
//   XREF to: 0047b55a (CONDITIONAL_JUMP)
// 0047b7f8: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x38] (READ)
// 0047b7ff: IMUL EAX,dword ptr [ESI + 0x104]
// 0047b806: IMUL EDX,EAX,0xc
// 0047b809: XOR EBX,EBX
// 0047b80b: XOR EDI,EDI
// 0047b80d: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x108] (WRITE)
// 0047b811: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x104] (WRITE)
// 0047b815: MOV dword ptr [ESP + 0xf0],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0047b81c: MOV EAX,dword ptr [ESI + 0x10c]
// 0047b822: MOV EBX,0x2
// 0047b827: ADD EAX,EDX
// 0047b829: XOR ESI,ESI
// 0047b82b: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0047b832: MOV EAX,dword ptr [ESP + 0xf0]
//   Label: LAB_0047b832
//   XREF to: Stack[-0x20] (READ)
// 0047b839: IMUL EDX,dword ptr [ESP + EAX*0x1 + 0x20],0xc
// 0047b83e: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x24] (READ)
// 0047b845: MOV ECX,0x4
// 0047b84a: ADD EAX,EDX
// 0047b84c: LEA EDX,[ESI + 0x1]
// 0047b84f: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 0047b856: MOV EAX,EDX
// 0047b858: SAR EDX,0x1f
// 0047b85b: IDIV ECX
// 0047b85d: IMUL EDX,EDX,0xc
// 0047b860: IMUL ECX,dword ptr [ESP + EDX*0x1 + 0x20],0xc
// 0047b865: MOV EDX,EBX
// 0047b867: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x24] (READ)
// 0047b86e: SAR EDX,0x1f
// 0047b871: MOV EDI,0x4
// 0047b876: ADD ECX,EAX
// 0047b878: MOV EAX,EBX
// 0047b87a: IDIV EDI
// 0047b87c: IMUL EDX,EDX,0xc
// 0047b87f: IMUL EDI,dword ptr [ESP + EDX*0x1 + 0x20],0xc
// 0047b884: ADD EDI,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x24] (READ)
// 0047b88b: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x90] (READ)
// 0047b892: MOV EAX,dword ptr [ECX]
// 0047b894: MOV EDX,dword ptr [EDX]
// 0047b896: SUB EDX,EAX
// 0047b898: MOV dword ptr [ESP + 0xf8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0047b89f: FILD dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x18] (READ)
// 0047b8a6: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x90] (READ)
// 0047b8ad: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0xa8] (WRITE)
// 0047b8b1: MOV EDX,dword ptr [EDX + 0x4]
// 0047b8b4: MOV EAX,dword ptr [ECX + 0x4]
// 0047b8b7: SUB EDX,EAX
// 0047b8b9: MOV dword ptr [ESP + 0xf8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0047b8c0: FILD dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x18] (READ)
// 0047b8c7: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x90] (READ)
// 0047b8ce: FST float ptr [ESP + 0x6c]
//   XREF to: Stack[-0xa4] (WRITE)
// 0047b8d2: MOV EDX,dword ptr [EDX + 0x8]
// 0047b8d5: MOV EAX,dword ptr [ECX + 0x8]
// 0047b8d8: FMUL float ptr [ESP + 0x6c]
//   XREF to: Stack[-0xa4] (READ)
// 0047b8dc: SUB EDX,EAX
// 0047b8de: FLD float ptr [ESP + 0x68]
//   XREF to: Stack[-0xa8] (READ)
// 0047b8e2: MOV dword ptr [ESP + 0xf8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0047b8e9: FMUL float ptr [ESP + 0x68]
//   XREF to: Stack[-0xa8] (READ)
// 0047b8ed: FILD dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x18] (READ)
// 0047b8f4: FXCH
// 0047b8f6: FADDP ST2,ST0
// 0047b8f8: FST float ptr [ESP + 0x70]
//   XREF to: Stack[-0xa0] (WRITE)
// 0047b8fc: FMUL float ptr [ESP + 0x70]
//   XREF to: Stack[-0xa0] (READ)
// 0047b900: FADDP
// 0047b902: FSQRT
// 0047b904: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xf4] (WRITE)
// 0047b908: FLDZ
// 0047b90a: FCOMPP
// 0047b90c: FNSTSW AX
// 0047b90e: SAHF
// 0047b90f: JNC 0x0047ba8c
//   XREF to: 0047ba8c (CONDITIONAL_JUMP)
// 0047b915: FLD1
// 0047b917: FLD float ptr [ESP + 0x68]
//   XREF to: Stack[-0xa8] (READ)
// 0047b91b: FXCH
// 0047b91d: FDIV float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xf4] (READ)
// 0047b921: FXCH
// 0047b923: FMUL ST1
// 0047b925: FLD float ptr [ESP + 0x6c]
//   XREF to: Stack[-0xa4] (READ)
// 0047b929: FMUL ST2
// 0047b92b: FLD float ptr [ESP + 0x70]
//   XREF to: Stack[-0xa0] (READ)
// 0047b92f: FMULP ST3
// 0047b931: FXCH
// 0047b933: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0xa8] (WRITE)
// 0047b937: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0xa4] (WRITE)
// 0047b93b: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0xa0] (WRITE)
// 0047b93f: MOV EDX,dword ptr [EDI]
//   Label: LAB_0047b93f
// 0047b941: MOV EAX,dword ptr [ECX]
// 0047b943: SUB EDX,EAX
// 0047b945: MOV dword ptr [ESP + 0xf8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0047b94c: FILD dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x18] (READ)
// 0047b953: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xb4] (WRITE)
// 0047b957: MOV EDX,dword ptr [EDI + 0x4]
// 0047b95a: MOV EAX,dword ptr [ECX + 0x4]
// 0047b95d: SUB EDX,EAX
// 0047b95f: MOV dword ptr [ESP + 0xf8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0047b966: FILD dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x18] (READ)
// 0047b96d: FST float ptr [ESP + 0x60]
//   XREF to: Stack[-0xb0] (WRITE)
// 0047b971: FMUL float ptr [ESP + 0x60]
//   XREF to: Stack[-0xb0] (READ)
// 0047b975: MOV EDX,dword ptr [EDI + 0x8]
// 0047b978: SUB EDX,dword ptr [ECX + 0x8]
// 0047b97b: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xb4] (READ)
// 0047b97f: MOV dword ptr [ESP + 0xf8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0047b986: FMUL float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xb4] (READ)
// 0047b98a: FILD dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x18] (READ)
// 0047b991: FXCH
// 0047b993: FADDP ST2,ST0
// 0047b995: FST float ptr [ESP + 0x64]
//   XREF to: Stack[-0xac] (WRITE)
// 0047b999: FMUL float ptr [ESP + 0x64]
//   XREF to: Stack[-0xac] (READ)
// 0047b99d: FADDP
// 0047b99f: FSQRT
// 0047b9a1: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0xf8] (WRITE)
// 0047b9a5: FLDZ
// 0047b9a7: FCOMPP
// 0047b9a9: FNSTSW AX
// 0047b9ab: SAHF
// 0047b9ac: JNC 0x0047ba9f
//   XREF to: 0047ba9f (CONDITIONAL_JUMP)
// 0047b9b2: FLD1
// 0047b9b4: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xb4] (READ)
// 0047b9b8: FXCH
// 0047b9ba: FDIV float ptr [ESP + 0x18]
//   XREF to: Stack[-0xf8] (READ)
// 0047b9be: FXCH
// 0047b9c0: FMUL ST1
// 0047b9c2: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0xb0] (READ)
// 0047b9c6: FMUL ST2
// 0047b9c8: FLD float ptr [ESP + 0x64]
//   XREF to: Stack[-0xac] (READ)
// 0047b9cc: FMULP ST3
// 0047b9ce: FXCH
// 0047b9d0: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xb4] (WRITE)
// 0047b9d4: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0xb0] (WRITE)
// 0047b9d8: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0xac] (WRITE)
// 0047b9dc: FLD float ptr [ESP + 0x6c]
//   Label: LAB_0047b9dc
//   XREF to: Stack[-0xa4] (READ)
// 0047b9e0: FMUL float ptr [ESP + 0x60]
//   XREF to: Stack[-0xb0] (READ)
// 0047b9e4: FLD float ptr [ESP + 0x68]
//   XREF to: Stack[-0xa8] (READ)
// 0047b9e8: FMUL float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xb4] (READ)
// 0047b9ec: FADDP
// 0047b9ee: FLD float ptr [ESP + 0x70]
//   XREF to: Stack[-0xa0] (READ)
// 0047b9f2: FMUL float ptr [ESP + 0x64]
//   XREF to: Stack[-0xac] (READ)
// 0047b9f6: FADDP
// 0047b9f8: FLD1
// 0047b9fa: FXCH
// 0047b9fc: FSTP double ptr [ESP]
//   XREF to: Stack[-0x110] (DATA)
// 0047b9ff: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x110] (DATA)
// 0047ba02: FNSTSW AX
// 0047ba04: SAHF
// 0047ba05: JA 0x0047bab2
//   XREF to: 0047bab2 (CONDITIONAL_JUMP)
// 0047ba0b: XOR EDX,EDX
// 0047ba0d: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x100] (WRITE)
// 0047ba11: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0xfc] (WRITE)
// 0047ba15: FLD double ptr [ESP + 0x8]
//   Label: LAB_0047ba15
//   XREF to: Stack[-0x108] (READ)
// 0047ba19: MOV EDI,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x20] (READ)
// 0047ba20: INC EBX
// 0047ba21: INC ESI
// 0047ba22: FADD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x100] (READ)
// 0047ba26: ADD EDI,0xc
// 0047ba29: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x108] (WRITE)
// 0047ba2d: MOV dword ptr [ESP + 0xf0],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0047ba34: CMP ESI,0x4
// 0047ba37: JL 0x0047b832
//   XREF to: 0047b832 (CONDITIONAL_JUMP)
// 0047ba3d: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x108] (READ)
// 0047ba41: FCOMP double ptr [0x006204bb]
//   XREF to: 006204bb (READ)
// 0047ba47: FNSTSW AX
// 0047ba49: SAHF
// 0047ba4a: JNC 0x0047bae8
//   XREF to: 0047bae8 (CONDITIONAL_JUMP)
// 0047ba50: JMP 0x0047b55a
//   XREF to: 0047b55a (UNCONDITIONAL_JUMP)
// 0047ba55: MOV ECX,dword ptr [ESP + 0xc0]
//   Label: LAB_0047ba55
//   XREF to: Stack[-0x50] (READ)
// 0047ba5c: MOV EDX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x48] (READ)
// 0047ba63: MOV EAX,ESI
// 0047ba65: ADD EDX,ESI
// 0047ba67: MOV AL,byte ptr [ECX + EAX*0x1]
// 0047ba6a: CMP AL,byte ptr [EDX]
// 0047ba6c: JNZ 0x0047b55a
//   XREF to: 0047b55a (CONDITIONAL_JUMP)
// 0047ba72: JMP 0x0047b60d
//   XREF to: 0047b60d (UNCONDITIONAL_JUMP)
// 0047ba77: ADD EDX,0x4
//   Label: LAB_0047ba77
// 0047ba7a: INC EBX
// 0047ba7b: ADD ECX,0xc
// 0047ba7e: CMP EDX,0xc
// 0047ba81: JL 0x0047b660
//   XREF to: 0047b660 (CONDITIONAL_JUMP)
// 0047ba87: JMP 0x0047b6bd
//   XREF to: 0047b6bd (UNCONDITIONAL_JUMP)
// 0047ba8c: XOR EDX,EDX
//   Label: LAB_0047ba8c
// 0047ba8e: MOV dword ptr [ESP + 0x6c],EDX
//   XREF to: Stack[-0xa4] (WRITE)
// 0047ba92: MOV dword ptr [ESP + 0x68],EDX
//   XREF to: Stack[-0xa8] (WRITE)
// 0047ba96: MOV dword ptr [ESP + 0x70],EDX
//   XREF to: Stack[-0xa0] (WRITE)
// 0047ba9a: JMP 0x0047b93f
//   XREF to: 0047b93f (UNCONDITIONAL_JUMP)
// 0047ba9f: XOR EAX,EAX
//   Label: LAB_0047ba9f
// 0047baa1: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 0047baa5: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 0047baa9: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 0047baad: JMP 0x0047b9dc
//   XREF to: 0047b9dc (UNCONDITIONAL_JUMP)
// 0047bab2: FLD double ptr [ESP]
//   Label: LAB_0047bab2
//   XREF to: Stack[-0x110] (DATA)
// 0047bab5: FCOMP double ptr [0x006204b3]
//   XREF to: 006204b3 (READ)
// 0047babb: FNSTSW AX
// 0047babd: SAHF
// 0047babe: JA 0x0047bad7
//   XREF to: 0047bad7 (CONDITIONAL_JUMP)
// 0047bac0: MOV EDI,0x54411744
// 0047bac5: MOV EAX,0x400921fb
// 0047baca: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x100] (WRITE)
// 0047bace: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 0047bad2: JMP 0x0047ba15
//   XREF to: 0047ba15 (UNCONDITIONAL_JUMP)
// 0047bad7: FLD double ptr [ESP]
//   Label: LAB_0047bad7
//   XREF to: Stack[-0x110] (DATA)
// 0047bada: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 0047badf: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x100] (WRITE)
// 0047bae3: JMP 0x0047ba15
//   XREF to: 0047ba15 (UNCONDITIONAL_JUMP)
// 0047bae8: FLD double ptr [ESP + 0x8]
//   Label: LAB_0047bae8
//   XREF to: Stack[-0x108] (READ)
// 0047baec: FCOMP double ptr [0x006204c3]
//   XREF to: 006204c3 (READ)
// 0047baf2: FNSTSW AX
// 0047baf4: SAHF
// 0047baf5: JA 0x0047b55a
//   XREF to: 0047b55a (CONDITIONAL_JUMP)
// 0047bafb: MOV EBX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x38] (READ)
// 0047bb02: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047bb05: INC EBX
// 0047bb06: MOV ESI,dword ptr [EDX + 0x100]
// 0047bb0c: MOV dword ptr [ESP + 0xd8],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 0047bb13: CMP EBX,ESI
// 0047bb15: JL 0x0047b793
//   XREF to: 0047b793 (CONDITIONAL_JUMP)
// 0047bb1b: CMP dword ptr [ESP + 0xb0],0x0
//   Label: LAB_0047bb1b
//   XREF to: Stack[-0x60] (READ)
// 0047bb23: JZ 0x0047b55a
//   XREF to: 0047b55a (CONDITIONAL_JUMP)
// 0047bb29: MOV EDI,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x34] (READ)
// 0047bb30: LEA ESI,[ESP + 0x20]
//   XREF to: Stack[-0xf0] (DATA)
// 0047bb34: LEA EDI,[EDI + 0x18]
// 0047bb37: MOVSD ES:EDI,ESI
// 0047bb38: MOVSD ES:EDI,ESI
// 0047bb39: MOVSD ES:EDI,ESI
// 0047bb3a: MOV EDI,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x34] (READ)
// 0047bb41: LEA ESI,[ESP + 0x2c]
//   XREF to: Stack[-0xe4] (DATA)
// 0047bb45: LEA EDI,[EDI + 0x24]
// 0047bb48: MOVSD ES:EDI,ESI
// 0047bb49: MOVSD ES:EDI,ESI
// 0047bb4a: MOVSD ES:EDI,ESI
// 0047bb4b: MOV EDI,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x34] (READ)
// 0047bb52: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0xd8] (DATA)
// 0047bb56: LEA EDI,[EDI + 0x30]
// 0047bb59: MOVSD ES:EDI,ESI
// 0047bb5a: MOVSD ES:EDI,ESI
// 0047bb5b: MOVSD ES:EDI,ESI
// 0047bb5c: MOV EDI,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x34] (READ)
// 0047bb63: LEA ESI,[ESP + 0x44]
//   XREF to: Stack[-0xcc] (DATA)
// 0047bb67: LEA EDI,[EDI + 0x3c]
// 0047bb6a: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x34] (READ)
// 0047bb71: MOVSD ES:EDI,ESI
// 0047bb72: MOVSD ES:EDI,ESI
// 0047bb73: MOVSD ES:EDI,ESI
// 0047bb74: MOV dword ptr [EAX + 0x4],0x4
// 0047bb7b: MOV dword ptr [EAX + 0x14],0x0
// 0047bb82: MOV EDX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x34] (READ)
// 0047bb89: MOV EAX,dword ptr [EAX + 0x14]
// 0047bb8c: MOV dword ptr [EDX + 0x10],EAX
// 0047bb8f: MOV dword ptr [EDX + 0xc],EAX
// 0047bb92: MOV dword ptr [EDX + 0x8],EAX
// 0047bb95: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x28] (READ)
// 0047bb9c: MOV dword ptr [EAX + 0x4],0x0
// 0047bba3: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x74] (READ)
// 0047bbaa: DEC dword ptr [EAX + 0x558c]
// 0047bbb0: JMP 0x0047b333
//   XREF to: 0047b333 (UNCONDITIONAL_JUMP)
