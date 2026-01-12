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
  uchar *puVar1;
  uint uVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  int iVar11;
  CVector3i **ppCVar12;
  int iVar13;
  int iVar14;
  BADSPACEBASE *in_ESP;
  uint *puVar15;
  uint *puVar16;
  CVector3i **ppCVar17;
  byte bVar18;
  float10 fVar19;
  double dVar20;
  int aiStackY_10d0 [1005];
  uint local_100;
  uint uStack_fc;
  uint local_f8;
  uint local_f4;
  uint uStack_e8;
  uint uStack_dc;
  uint uStack_d0;
  uint uStack_c4;
  CVector3f CStack_b8;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  CVector3f CStack_98;
  CVector3i **local_88;
  int local_84;
  int local_80;
  int local_7c;
  CKeyFramedModel *local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  int local_68;
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
  int local_28;
  int local_24;
  int local_20;
  CVector3i **local_1c;
  float local_18;
  float fStack_14;
  
  bVar18 = 0;
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->poly_count) && (0 < this_ptr->frame_count)) {
    core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(this_ptr);
    fVar19 = (float10)fcos((float10)angle_threshold_radians);
    local_18 = (float)fVar19;
    local_74 = 0;
    bVar3 = 2000 < this_ptr->poly_count;
    if (bVar3) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Reducing polygons...");
      local_74 = 1;
    }
    local_74 = (uint)bVar3;
    local_80 = 0;
    if (0 < this_ptr->part_count) {
      local_78 = this_ptr;
      iVar8 = 0;
      do {
        local_5c = *(int *)(local_74 + 0x558c) + iVar8;
        if (this_ptr->poly_count < local_5c) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0x986;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
        }
        local_48 = iVar8;
        if (iVar8 < local_5c) {
          local_6c = local_74;
          local_64 = iVar8 * 0x48;
          local_68 = iVar8 << 2;
          do {
            local_2c = local_64 + (int)this_ptr->poly_vert_list;
            if (*(int *)(local_2c + 4) == 3) {
              if ((local_70 != 0) && ((char)local_48 == '\0')) {
                shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                          (g_CEditorToolsPtr,(float)local_48,(float)this_ptr->poly_count);
              }
              local_40 = local_48 + 1;
              if (local_40 < local_5c) {
                local_60 = local_68;
                local_50 = local_40 * 0x48;
                local_54 = local_40 * 4;
                do {
                  local_20 = local_50 + (int)this_ptr->poly_vert_list;
                  if (((*(int *)(local_20 + 4) == 3) &&
                      (*(int *)(local_60 + (int)this_ptr->poly_texture_index_list) ==
                       *(int *)(local_54 + (int)this_ptr->poly_texture_index_list))) &&
                     ((puVar1 = this_ptr->env_map_opac_list, puVar1 == (uchar *)0x0 ||
                      (puVar1[local_48] == puVar1[local_40])))) {
                    local_34 = 0;
                    local_3c = 0;
                    local_44 = -1;
                    local_38 = local_2c;
                    do {
                      iVar13 = 0;
                      local_24 = local_3c;
                      iVar14 = 0;
                      local_28 = local_38;
                      iVar8 = local_20;
                      do {
                        if ((*(int *)(iVar8 + 0x18) == *(int *)(local_38 + 0x18)) &&
                           (*(int *)(local_2c +
                                     *(int *)((int)g_TriangleMatchTableA + local_3c) * 0xc + 0x18)
                            == *(int *)(local_20 +
                                        *(int *)((int)g_TriangleMatchTableB + iVar13) * 0xc + 0x18))
                           ) {
                          local_4c = iVar14;
                          local_44 = local_34;
                          break;
                        }
                        iVar13 = iVar13 + 4;
                        iVar14 = iVar14 + 1;
                        iVar8 = iVar8 + 0xc;
                      } while (iVar13 < 0xc);
                      iVar13 = local_44;
                      iVar8 = local_4c;
                      local_34 = local_34 + 1;
                      local_3c = local_3c + 4;
                      local_38 = local_38 + 0xc;
                    } while (local_34 < 3);
                    if (-1 < local_44) {
                      iVar14 = local_44 * 0xc + local_2c;
                      puVar15 = (uint *)(iVar14 + 0x1c + (uint)bVar18 * -8);
                      uStack_e8 = *(uint *)(iVar14 + 0x18);
                      *(uint *)(&stack0xffffff1c + (uint)bVar18 * -8) = *puVar15;
                      iVar11 = local_2c;
                      *(uint *)(&stack0xffffff20 + (uint)bVar18 * -8 + (uint)bVar18 * -8) =
                           puVar15[(uint)bVar18 * -2 + 1];
                      iVar14 = g_TriangleMatchTableA[iVar13];
                      iVar8 = g_TriangleMatchTableA[iVar8] * 0xc + local_20;
                      puVar15 = (uint *)(iVar8 + 0x1c + (uint)bVar18 * -8);
                      uStack_dc = *(uint *)(iVar8 + 0x18);
                      *(uint *)(&stack0xffffff28 + (uint)bVar18 * -8) = *puVar15;
                      *(uint *)(&stack0xffffff2c + (uint)bVar18 * -8 + (uint)bVar18 * -8) =
                           puVar15[(uint)bVar18 * -2 + 1];
                      iVar8 = iVar14 * 0xc + iVar11;
                      puVar15 = (uint *)(iVar8 + 0x1c + (uint)bVar18 * -8);
                      uStack_d0 = *(uint *)(iVar8 + 0x18);
                      *(uint *)(&stack0xffffff34 + (uint)bVar18 * -8) = *puVar15;
                      *(uint *)(&stack0xffffff38 + (uint)bVar18 * -8 + (uint)bVar18 * -8) =
                           puVar15[(uint)bVar18 * -2 + 1];
                      iVar11 = g_TriangleMatchTableB[iVar13] * 0xc + iVar11;
                      local_58 = 1;
                      puVar15 = (uint *)(iVar11 + 0x1c + (uint)bVar18 * -8);
                      uStack_c4 = *(uint *)(iVar11 + 0x18);
                      *(uint *)(&stack0xffffff40 + (uint)bVar18 * -8) = *puVar15;
                      *(uint *)(&stack0xffffff44 + (uint)bVar18 * -8 + (uint)bVar18 * -8) =
                           puVar15[(uint)bVar18 * -2 + 1];
                      local_30 = 0;
                      if (0 < this_ptr->frame_count) {
                        do {
                          pCVar9 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                             (this_ptr,&CStack_b8,local_30,local_40);
                          pCVar10 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                              (this_ptr,&CStack_98,local_34,local_4c);
                          if (pCVar10->z * pCVar9->z +
                              pCVar10->x * pCVar9->x + pCVar10->y * pCVar9->y < fStack_14)
                          goto LAB_0047b55a;
                          dVar20 = 0.0;
                          local_18 = 0.0;
                          iVar8 = 2;
                          iVar13 = 0;
                          local_1c = this_ptr->vertex_list + local_30 * this_ptr->vertex_count * 3;
                          do {
                            uStack_fc = (uint)((ulonglong)dVar20 >> 0x20);
                            local_100 = SUB84 /* extract 2-byte value */(dVar20,0);
                            local_88 = local_1c +
                                       *(int *)((int)&stack0xffffff18 + (int)local_18) * 3;
                            ppCVar12 = local_1c +
                                       *(int *)((int)&stack0xffffff18 + ((iVar13 + 1) % 4) * 0xc) *
                                       3;
                            ppCVar17 = local_1c +
                                       *(int *)((int)&stack0xffffff18 + (iVar8 % 4) * 0xc) * 3;
                            fVar4 = (float)((int)*local_88 - (int)*ppCVar12);
                            fVar5 = (float)((int)local_88[1] - (int)ppCVar12[1]);
                            fVar7 = (float)((int)local_88[2] - (int)ppCVar12[2]);
                            fVar6 = SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar5 * fVar5);
                            if (fVar6 <= 0.0) {
                              local_9c = 0.0;
                              local_a0 = 0.0;
                              CStack_98.x = 0.0;
                            }
                            else {
                              fVar6 = 1.0 / fVar6;
                              local_a0 = fVar4 * fVar6;
                              local_9c = fVar5 * fVar6;
                              CStack_98.x = fVar7 * fVar6;
                            }
                            fVar4 = (float)((int)*ppCVar17 - (int)*ppCVar12);
                            fVar5 = (float)((int)ppCVar17[1] - (int)ppCVar12[1]);
                            fVar7 = (float)((int)ppCVar17[2] - (int)ppCVar12[2]);
                            fVar6 = SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar5 * fVar5);
                            if (fVar6 <= 0.0) {
                              local_a8 = 0.0;
                              local_ac = 0.0;
                              local_a4 = 0.0;
                            }
                            else {
                              fVar6 = 1.0 / fVar6;
                              local_ac = fVar4 * fVar6;
                              local_a8 = fVar5 * fVar6;
                              local_a4 = fVar7 * fVar6;
                            }
                            dVar20 = (double)(CStack_98.x * local_a4 +
                                             local_a0 * local_ac + local_9c * local_a8);
                            if (dVar20 < 1.0) {
                              if (-1 < dVar20) {
                                dVar20 = crt_math_c_acos_FUN_00600162(dVar20);
                                uStack_fc = SUB84 /* extract 2-byte value */(dVar20,0);
                                local_f8 = (uint)((ulonglong)dVar20 >> 0x20);
                              }
                              else {
                                local_f8 = 0x54411744;
                                local_f4 = 0x400921fb;
                              }
                            }
                            else {
                              local_f8 = 0;
                              local_f4 = 0;
                            }
                            iVar8 = iVar8 + 1;
                            iVar13 = iVar13 + 1;
                            dVar20 = (double)CONCAT44 /* combine 2-byte values */(uStack_fc,local_100) +
                                     (double)CONCAT44 /* combine 2-byte values */(local_f4,local_f8);
                            local_18 = (float)((int)local_18 + 0xc);
                          } while (iVar13 < 4);
                          if ((dVar20 < 6.2744586607402804) || (6.2919119532597199 < dVar20))
                          goto LAB_0047b55a;
                          local_30 = local_30 + 1;
                        } while (local_30 < this_ptr->frame_count);
                      }
                      if (local_58 != 0) {
                        puVar15 = (uint *)(local_2c + 0x1c + (uint)bVar18 * -8);
                        *(uint *)(local_2c + 0x18) = uStack_e8;
                        *puVar15 = *(uint *)(&stack0xffffff1c + (uint)bVar18 * -8);
                        puVar15[(uint)bVar18 * -2 + 1] =
                             *(uint *)
                              (&stack0xffffff20 + (uint)bVar18 * -8 + (uint)bVar18 * -8);
                        puVar15 = (uint *)(local_2c + 0x28 + (uint)bVar18 * -8);
                        *(uint *)(local_2c + 0x24) = uStack_dc;
                        *puVar15 = *(uint *)(&stack0xffffff28 + (uint)bVar18 * -8);
                        puVar15[(uint)bVar18 * -2 + 1] =
                             *(uint *)
                              (&stack0xffffff2c + (uint)bVar18 * -8 + (uint)bVar18 * -8);
                        puVar15 = (uint *)(local_2c + 0x34 + (uint)bVar18 * -8);
                        *(uint *)(local_2c + 0x30) = uStack_d0;
                        *puVar15 = *(uint *)(&stack0xffffff34 + (uint)bVar18 * -8);
                        puVar15[(uint)bVar18 * -2 + 1] =
                             *(uint *)
                              (&stack0xffffff38 + (uint)bVar18 * -8 + (uint)bVar18 * -8);
                        puVar15 = (uint *)(local_2c + 0x40 + (uint)bVar18 * -8);
                        *(uint *)(local_2c + 0x3c) = uStack_c4;
                        *puVar15 = *(uint *)(&stack0xffffff40 + (uint)bVar18 * -8);
                        puVar15[(uint)bVar18 * -2 + 1] =
                             *(uint *)
                              (&stack0xffffff44 + (uint)bVar18 * -8 + (uint)bVar18 * -8);
                        *(uint *)(local_2c + 4) = 4;
                        *(uint *)(local_2c + 0x14) = 0;
                        uVar2 = *(uint *)(local_2c + 0x14);
                        *(uint *)(local_2c + 0x10) = uVar2;
                        *(uint *)(local_2c + 0xc) = uVar2;
                        *(uint *)(local_2c + 8) = uVar2;
                        *(uint *)(local_20 + 4) = 0;
                        *(int *)(local_6c + 0x558c) = *(int *)(local_6c + 0x558c) + -1;
                        break;
                      }
                    }
                  }
LAB_0047b55a:
                  local_40 = local_40 + 1;
                  local_50 = local_50 + 0x48;
                  local_54 = local_54 + 4;
                } while (local_40 < local_5c);
              }
            }
            local_48 = local_48 + 1;
            local_64 = local_64 + 0x48;
            local_68 = local_68 + 4;
          } while (local_48 < local_5c);
        }
        local_7c = local_7c + 1;
        local_74 = local_74 + 8;
        iVar8 = local_5c;
      } while (local_7c < this_ptr->part_count);
    }
    iVar8 = 0;
    iVar13 = 0;
    if (0 < this_ptr->poly_count) {
      local_78 = (CKeyFramedModel *)0x0;
      local_84 = 0;
      local_80 = 0;
      iVar14 = 0;
      do {
        puVar15 = (uint *)(local_80 + (int)this_ptr->poly_vert_list);
        if (2 < (int)puVar15[1]) {
          if (iVar13 < iVar8) {
            puVar16 = (uint *)(local_84 + (int)this_ptr->poly_vert_list);
            for (iVar11 = 0x12; iVar11 != 0; iVar11 = iVar11 + -1) {
              *puVar16 = *puVar15;
              puVar15 = puVar15 + (uint)bVar18 * -2 + 1;
              puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
            }
            *(uint *)((int)this_ptr->poly_texture_index_list + iVar14) =
                 *(uint *)(local_78->model_filename + (int)this_ptr->poly_texture_index_list);
            puVar1 = this_ptr->env_map_opac_list;
            if (puVar1 != (uchar *)0x0) {
              puVar1[iVar13] = puVar1[iVar8];
            }
          }
          iVar13 = iVar13 + 1;
          local_84 = local_84 + 0x48;
          iVar14 = iVar14 + 4;
        }
        iVar8 = iVar8 + 1;
        local_80 = local_80 + 0x48;
        local_78 = (CKeyFramedModel *)(local_78->model_filename + 4);
      } while (iVar8 < this_ptr->poly_count);
    }
    this_ptr->poly_count = iVar13;
    core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(this_ptr);
    if (local_74 != 0) {
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      return;
    }
  }
  return;
}
