// Name: core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
// Address: 0047b1e0
// Address Range: [[0047b1e0, 0047bbb4]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0(CKeyFramedModel * this_ptr, float angle_threshold_radians)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
          (CKeyFramedModel *this_ptr,float angle_threshold_radians)

{
  double x;
  uchar *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  int *piVar16;
  byte bVar17;
  float10 fVar18;
  int aiStackY_10d4 [1006];
  double in_stack_fffffefc;
  double dStack_fc;
  int aiStack_ec [6];
  uint uStack_d4;
  uint uStack_c8;
  CVector3f CStack_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  CVector3f CStack_94;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  CKeyFramedModel *local_78;
  int local_74;
  CKeyFramedModel *local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint *local_4c;
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
  float local_1c;
  CVector3i **local_18;
  uint *puStack_14;
  
  bVar17 = 0;
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->poly_count) && (0 < this_ptr->frame_count)) {
    core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(this_ptr);
    fVar18 = (float10)fcos((float10)angle_threshold_radians);
    local_1c = (float)fVar18;
    local_78 = (CKeyFramedModel *)0x0;
    if (2000 < this_ptr->poly_count) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Reducing polygons...");
      local_74 = 1;
    }
    local_80 = 0;
    if (0 < this_ptr->part_count) {
      local_78 = this_ptr;
      puVar13 = (uint *)0x0;
      do {
        local_60 = (uint *)(local_78->part_list[0].poly_count + (int)puVar13);
        if (this_ptr->poly_count < (int)local_60) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0x986;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
        }
        local_4c = puVar13;
        if ((int)puVar13 < (int)local_60) {
          local_70 = local_78;
          local_68 = (int)puVar13 * 0x48;
          local_6c = (int)puVar13 << 2;
          do {
            local_30 = local_68 + (int)this_ptr->poly_vert_list;
            if (*(int *)(local_30 + 4) == 3) {
              if ((local_74 != 0) && ((char)local_4c == '\0')) {
                puStack_14 = local_4c;
                shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                          (g_CEditorToolsPtr,(float)(int)local_4c,(float)this_ptr->poly_count);
              }
              local_44 = (int)local_4c + 1;
              if (local_44 < (int)local_60) {
                local_64 = local_6c;
                local_54 = local_44 * 0x48;
                local_58 = local_44 * 4;
                do {
                  local_24 = local_54 + (int)this_ptr->poly_vert_list;
                  if (((*(int *)(local_24 + 4) == 3) &&
                      (*(int *)(local_64 + (int)this_ptr->poly_texture_index_list) ==
                       *(int *)(local_58 + (int)this_ptr->poly_texture_index_list))) &&
                     ((puVar1 = this_ptr->env_map_opac_list, puVar1 == (uchar *)0x0 ||
                      (*(uchar *)((int)local_4c + (int)puVar1) == puVar1[local_44])))) {
                    local_38 = 0;
                    local_40 = 0;
                    local_48 = -1;
                    local_3c = local_30;
                    do {
                      iVar11 = 0;
                      local_28 = local_40;
                      iVar12 = 0;
                      local_2c = local_3c;
                      iVar7 = local_24;
                      do {
                        if ((*(int *)(iVar7 + 0x18) == *(int *)(local_3c + 0x18)) &&
                           (*(int *)(local_30 +
                                     *(int *)((int)g_TriangleMatchTableA + local_40) * 0xc + 0x18)
                            == *(int *)(local_24 +
                                        *(int *)((int)g_TriangleMatchTableB + iVar11) * 0xc + 0x18))
                           ) {
                          local_50 = iVar12;
                          local_48 = local_38;
                          break;
                        }
                        iVar11 = iVar11 + 4;
                        iVar12 = iVar12 + 1;
                        iVar7 = iVar7 + 0xc;
                      } while (iVar11 < 0xc);
                      iVar11 = local_48;
                      iVar7 = local_50;
                      local_38 = local_38 + 1;
                      local_40 = local_40 + 4;
                      local_3c = local_3c + 0xc;
                    } while (local_38 < 3);
                    if (-1 < local_48) {
                      iVar12 = local_48 * 0xc + local_30;
                      piVar14 = (int *)(iVar12 + 0x1c + (uint)bVar17 * -8);
                      aiStack_ec[0] = *(int *)(iVar12 + 0x18);
                      aiStack_ec[(uint)bVar17 * -2 + 1] = *piVar14;
                      iVar10 = local_30;
                      aiStack_ec[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 2] =
                           piVar14[(uint)bVar17 * -2 + 1];
                      iVar12 = g_TriangleMatchTableA[iVar11];
                      iVar7 = g_TriangleMatchTableA[iVar7] * 0xc + local_24;
                      piVar14 = (int *)(iVar7 + 0x1c + (uint)bVar17 * -8);
                      aiStack_ec[3] = *(uint *)(iVar7 + 0x18);
                      aiStack_ec[(uint)bVar17 * -2 + 4] = *piVar14;
                      aiStack_ec[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 5] =
                           piVar14[(uint)bVar17 * -2 + 1];
                      iVar7 = iVar12 * 0xc + iVar10;
                      piVar14 = (int *)(iVar7 + 0x1c + (uint)bVar17 * -8);
                      uStack_d4 = *(uint *)(iVar7 + 0x18);
                      aiStack_ec[(uint)bVar17 * -2 + 7] = *piVar14;
                      aiStack_ec[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 8] =
                           piVar14[(uint)bVar17 * -2 + 1];
                      iVar10 = g_TriangleMatchTableB[iVar11] * 0xc + iVar10;
                      local_5c = 1;
                      piVar14 = (int *)(iVar10 + 0x1c + (uint)bVar17 * -8);
                      uStack_c8 = *(uint *)(iVar10 + 0x18);
                      aiStack_ec[(uint)bVar17 * -2 + 10] = *piVar14;
                      aiStack_ec[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xb] =
                           piVar14[(uint)bVar17 * -2 + 1];
                      local_34 = 0;
                      if (0 < this_ptr->frame_count) {
                        do {
                          pCVar8 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                             (this_ptr,&CStack_bc,local_34,local_44);
                          pCVar9 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                             (this_ptr,&CStack_94,local_30,local_48);
                          if (pCVar9->z * pCVar8->z + pCVar9->x * pCVar8->x + pCVar9->y * pCVar8->y
                              < unaff_EBP) goto LAB_0047b55a;
                          puStack_14 = (uint *)0x0;
                          iVar7 = 2;
                          iVar11 = 0;
                          local_18 = this_ptr->vertex_list + local_2c * this_ptr->vertex_count * 3;
                          do {
                            CStack_94.z = (float)(local_20 +
                                                 *(int *)((int)aiStack_ec + (int)local_1c) * 0xc);
                            piVar14 = (int *)(aiStack_ec[((iVar11 + 1) % 4) * 3] * 0xc + local_20);
                            piVar16 = (int *)(aiStack_ec[(iVar7 % 4) * 3] * 0xc + local_20);
                            fVar3 = (float)(*(int *)CStack_94.z - *piVar14);
                            fVar4 = (float)(*(int *)((int)CStack_94.z + 4) - piVar14[1]);
                            fVar6 = (float)(*(int *)((int)CStack_94.z + 8) - piVar14[2]);
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
                            fVar3 = (float)(*piVar16 - *piVar14);
                            fVar4 = (float)(piVar16[1] - piVar14[1]);
                            puStack_14 = (uint *)(piVar16[2] - piVar14[2]);
                            fVar6 = (float)(piVar16[2] - piVar14[2]);
                            fVar5 = SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
                            if (fVar5 <= 0.0) {
                              local_ac = 0.0;
                              local_b0 = 0.0;
                              local_a8 = 0.0;
                            }
                            else {
                              fVar5 = 1.0 / fVar5;
                              local_b0 = fVar3 * fVar5;
                              local_ac = fVar4 * fVar5;
                              local_a8 = fVar6 * fVar5;
                            }
                            x = (double)(local_9c * local_a8 +
                                        local_a4 * local_b0 + local_a0 * local_ac);
                            if (x < 1.0) {
                              if (-1 < x) {
                                dStack_fc = crt_math_c_acos_FUN_00600162(x);
                              }
                              else {
                                dStack_fc = 3.1415926535;
                              }
                            }
                            else {
                              dStack_fc = 0.0;
                            }
                            iVar7 = iVar7 + 1;
                            iVar11 = iVar11 + 1;
                            in_stack_fffffefc = in_stack_fffffefc + dStack_fc;
                            local_1c = (float)((int)local_1c + 0xc);
                          } while (iVar11 < 4);
                          if ((in_stack_fffffefc < 6.2744586607402804) ||
                             (6.2919119532597199 < in_stack_fffffefc)) goto LAB_0047b55a;
                          local_34 = local_34 + 1;
                        } while (local_34 < this_ptr->frame_count);
                      }
                      if (local_5c != 0) {
                        piVar14 = (int *)(local_30 + 0x1c + (uint)bVar17 * -8);
                        *(int *)(local_30 + 0x18) = aiStack_ec[0];
                        *piVar14 = aiStack_ec[(uint)bVar17 * -2 + 1];
                        piVar14[(uint)bVar17 * -2 + 1] =
                             aiStack_ec[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 2];
                        piVar14 = (int *)(local_30 + 0x28 + (uint)bVar17 * -8);
                        *(int *)(local_30 + 0x24) = aiStack_ec[3];
                        *piVar14 = aiStack_ec[(uint)bVar17 * -2 + 4];
                        piVar14[(uint)bVar17 * -2 + 1] =
                             aiStack_ec[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 5];
                        piVar14 = (int *)(local_30 + 0x34 + (uint)bVar17 * -8);
                        *(uint *)(local_30 + 0x30) = uStack_d4;
                        *piVar14 = aiStack_ec[(uint)bVar17 * -2 + 7];
                        piVar14[(uint)bVar17 * -2 + 1] =
                             aiStack_ec[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 8];
                        piVar14 = (int *)(local_30 + 0x40 + (uint)bVar17 * -8);
                        *(uint *)(local_30 + 0x3c) = uStack_c8;
                        *piVar14 = aiStack_ec[(uint)bVar17 * -2 + 10];
                        piVar14[(uint)bVar17 * -2 + 1] =
                             aiStack_ec[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xb];
                        *(uint *)(local_30 + 4) = 4;
                        *(uint *)(local_30 + 0x14) = 0;
                        uVar2 = *(uint *)(local_30 + 0x14);
                        *(uint *)(local_30 + 0x10) = uVar2;
                        *(uint *)(local_30 + 0xc) = uVar2;
                        *(uint *)(local_30 + 8) = uVar2;
                        *(uint *)(local_24 + 4) = 0;
                        piVar14 = &local_70->part_list[0].poly_count;
                        *piVar14 = *piVar14 + -1;
                        break;
                      }
                    }
                  }
LAB_0047b55a:
                  local_44 = local_44 + 1;
                  local_54 = local_54 + 0x48;
                  local_58 = local_58 + 4;
                } while (local_44 < (int)local_60);
              }
            }
            local_4c = (uint *)((int)local_4c + 1);
            local_68 = local_68 + 0x48;
            local_6c = local_6c + 4;
          } while ((int)local_4c < (int)local_60);
        }
        local_80 = local_80 + 1;
        local_78 = (CKeyFramedModel *)(local_78->model_filename + 8);
        puVar13 = local_60;
      } while (local_80 < this_ptr->part_count);
    }
    iVar7 = 0;
    iVar11 = 0;
    if (0 < this_ptr->poly_count) {
      local_7c = 0;
      local_88 = 0;
      local_84 = 0;
      iVar12 = 0;
      do {
        puVar13 = (uint *)(local_84 + (int)this_ptr->poly_vert_list);
        if (2 < (int)puVar13[1]) {
          if (iVar11 < iVar7) {
            puVar15 = (uint *)(local_88 + (int)this_ptr->poly_vert_list);
            for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar15 = *puVar13;
              puVar13 = puVar13 + (uint)bVar17 * -2 + 1;
              puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
            }
            puStack_14 = (uint *)((int)this_ptr->poly_texture_index_list + iVar12);
            *puStack_14 = *(uint *)(local_7c + (int)this_ptr->poly_texture_index_list);
            puVar1 = this_ptr->env_map_opac_list;
            if (puVar1 != (uchar *)0x0) {
              puVar1[iVar11] = puVar1[iVar7];
            }
          }
          iVar11 = iVar11 + 1;
          local_88 = local_88 + 0x48;
          iVar12 = iVar12 + 4;
        }
        iVar7 = iVar7 + 1;
        local_84 = local_84 + 0x48;
        local_7c = local_7c + 4;
      } while (iVar7 < this_ptr->poly_count);
    }
    this_ptr->poly_count = iVar11;
    core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(this_ptr);
    if (local_68 != 0) {
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      return;
    }
  }
  return;
}
