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
  int *piVar1;
  uchar *puVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  CVector3f *pCVar10;
  CVector3f *pCVar11;
  int iVar12;
  CVector3i **ppCVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  CVector3i **ppCVar18;
  byte bVar19;
  float10 fVar20;
  double dVar21;
  int aiStackY_10d8 [1006];
  uint local_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  uint local_f0;
  uint local_e4;
  uint local_d8;
  uint local_cc;
  CVector3f local_c0;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  CVector3f local_9c;
  CVector3i **local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  CKeyFramedModel *local_7c;
  uint local_78;
  CKeyFramedModel *local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint *local_50;
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
  CVector3i **local_24;
  int local_20;
  float local_1c;
  uint *local_18;
  
  bVar19 = 0;
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->poly_count) && (0 < this_ptr->frame_count)) {
    core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(this_ptr);
    fVar20 = (float10)fcos((float10)angle_threshold_radians);
    local_1c = (float)fVar20;
    local_78 = 0;
    bVar4 = 2000 < this_ptr->poly_count;
    if (bVar4) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Reducing polygons...");
      local_78 = 1;
    }
    local_78 = (uint)bVar4;
    local_84 = 0;
    if (0 < this_ptr->part_count) {
      local_7c = this_ptr;
      puVar16 = (uint *)0x0;
      do {
        local_64 = (uint *)(local_7c->part_list[0].poly_count + (int)puVar16);
        if (this_ptr->poly_count < (int)local_64) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0x986;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
        }
        local_50 = puVar16;
        if ((int)puVar16 < (int)local_64) {
          local_74 = local_7c;
          local_6c = (int)puVar16 * 0x48;
          local_70 = (int)puVar16 << 2;
          do {
            local_34 = local_6c + (int)this_ptr->poly_vert_list;
            if (*(int *)(local_34 + 4) == 3) {
              if ((local_78 != 0) && ((char)local_50 == '\0')) {
                local_18 = local_50;
                shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                          (g_CEditorToolsPtr,(float)(int)local_50,(float)this_ptr->poly_count);
              }
              local_48 = (int)local_50 + 1;
              if (local_48 < (int)local_64) {
                local_68 = local_70;
                local_58 = local_48 * 0x48;
                local_5c = local_48 * 4;
                do {
                  local_28 = local_58 + (int)this_ptr->poly_vert_list;
                  if (((*(int *)(local_28 + 4) == 3) &&
                      (*(int *)(local_68 + (int)this_ptr->poly_texture_index_list) ==
                       *(int *)(local_5c + (int)this_ptr->poly_texture_index_list))) &&
                     ((puVar2 = this_ptr->env_map_opac_list, puVar2 == (uchar *)0x0 ||
                      (*(uchar *)((int)local_50 + (int)puVar2) == puVar2[local_48])))) {
                    local_3c = 0;
                    local_44 = 0;
                    local_4c = -1;
                    local_40 = local_34;
                    do {
                      iVar14 = 0;
                      local_2c = local_44;
                      iVar15 = 0;
                      local_30 = local_40;
                      iVar9 = local_28;
                      do {
                        if ((*(int *)(iVar9 + 0x18) == *(int *)(local_40 + 0x18)) &&
                           (*(int *)(local_34 +
                                     *(int *)((int)g_TriangleMatchTableA + local_44) * 0xc + 0x18)
                            == *(int *)(local_28 +
                                        *(int *)((int)g_TriangleMatchTableB + iVar14) * 0xc + 0x18))
                           ) {
                          local_54 = iVar15;
                          local_4c = local_3c;
                          break;
                        }
                        iVar14 = iVar14 + 4;
                        iVar15 = iVar15 + 1;
                        iVar9 = iVar9 + 0xc;
                      } while (iVar14 < 0xc);
                      iVar14 = local_4c;
                      iVar9 = local_54;
                      local_3c = local_3c + 1;
                      local_44 = local_44 + 4;
                      local_40 = local_40 + 0xc;
                    } while (local_3c < 3);
                    if (-1 < local_4c) {
                      iVar15 = local_4c * 0xc + local_34;
                      puVar16 = (uint *)(iVar15 + 0x1c + (uint)bVar19 * -8);
                      local_f0 = *(uint *)(iVar15 + 0x18);
                      *(uint *)(&stack0xffffff14 + (uint)bVar19 * -8) = *puVar16;
                      iVar12 = local_34;
                      *(uint *)(&stack0xffffff18 + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                           puVar16[(uint)bVar19 * -2 + 1];
                      iVar15 = g_TriangleMatchTableA[iVar14];
                      iVar9 = g_TriangleMatchTableA[iVar9] * 0xc + local_28;
                      puVar16 = (uint *)(iVar9 + 0x1c + (uint)bVar19 * -8);
                      local_e4 = *(uint *)(iVar9 + 0x18);
                      *(uint *)(&stack0xffffff20 + (uint)bVar19 * -8) = *puVar16;
                      *(uint *)(&stack0xffffff24 + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                           puVar16[(uint)bVar19 * -2 + 1];
                      iVar9 = iVar15 * 0xc + iVar12;
                      puVar16 = (uint *)(iVar9 + 0x1c + (uint)bVar19 * -8);
                      local_d8 = *(uint *)(iVar9 + 0x18);
                      *(uint *)(&stack0xffffff2c + (uint)bVar19 * -8) = *puVar16;
                      *(uint *)(&stack0xffffff30 + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                           puVar16[(uint)bVar19 * -2 + 1];
                      iVar12 = g_TriangleMatchTableB[iVar14] * 0xc + iVar12;
                      local_60 = 1;
                      puVar16 = (uint *)(iVar12 + 0x1c + (uint)bVar19 * -8);
                      local_cc = *(uint *)(iVar12 + 0x18);
                      *(uint *)(&stack0xffffff38 + (uint)bVar19 * -8) = *puVar16;
                      *(uint *)(&stack0xffffff3c + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                           puVar16[(uint)bVar19 * -2 + 1];
                      local_38 = 0;
                      if (0 < this_ptr->frame_count) {
                        do {
                          pCVar10 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                              (this_ptr,&local_c0,local_38,local_48);
                          pCVar11 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                              (this_ptr,&local_9c,local_38,(int)local_50);
                          if (pCVar11->z * pCVar10->z +
                              pCVar11->x * pCVar10->x + pCVar11->y * pCVar10->y < local_1c)
                          goto LAB_0047b55a;
                          dVar21 = 0.0;
                          local_20 = 0;
                          iVar9 = 2;
                          iVar14 = 0;
                          local_24 = this_ptr->vertex_list + local_38 * this_ptr->vertex_count * 3;
                          do {
                            uStack_104 = (uint)((ulonglong)dVar21 >> 0x20);
                            local_108 = SUB84 /* extract 2-byte value */(dVar21,0);
                            local_90 = local_24 + *(int *)((int)&stack0xffffff10 + local_20) * 3;
                            ppCVar13 = local_24 +
                                       *(int *)((int)&stack0xffffff10 + ((iVar14 + 1) % 4) * 0xc) *
                                       3;
                            ppCVar18 = local_24 +
                                       *(int *)((int)&stack0xffffff10 + (iVar9 % 4) * 0xc) * 3;
                            fVar5 = (float)((int)*local_90 - (int)*ppCVar13);
                            fVar6 = (float)((int)local_90[1] - (int)ppCVar13[1]);
                            fVar8 = (float)((int)local_90[2] - (int)ppCVar13[2]);
                            fVar7 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar6 * fVar6);
                            if (fVar7 <= 0.0) {
                              local_a4 = 0.0;
                              local_a8 = 0.0;
                              local_a0 = 0.0;
                            }
                            else {
                              fVar7 = 1.0 / fVar7;
                              local_a8 = fVar5 * fVar7;
                              local_a4 = fVar6 * fVar7;
                              local_a0 = fVar8 * fVar7;
                            }
                            fVar5 = (float)((int)*ppCVar18 - (int)*ppCVar13);
                            fVar6 = (float)((int)ppCVar18[1] - (int)ppCVar13[1]);
                            local_18 = (uint *)((int)ppCVar18[2] - (int)ppCVar13[2]);
                            fVar8 = (float)((int)ppCVar18[2] - (int)ppCVar13[2]);
                            fVar7 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar6 * fVar6);
                            if (fVar7 <= 0.0) {
                              local_b0 = 0.0;
                              local_b4 = 0.0;
                              local_ac = 0.0;
                            }
                            else {
                              fVar7 = 1.0 / fVar7;
                              local_b4 = fVar5 * fVar7;
                              local_b0 = fVar6 * fVar7;
                              local_ac = fVar8 * fVar7;
                            }
                            dVar21 = (double)(local_a0 * local_ac +
                                             local_a8 * local_b4 + local_a4 * local_b0);
                            if (dVar21 < 1.0) {
                              if (-1 < dVar21) {
                                dVar21 = crt_math_c_acos_FUN_00600162(dVar21);
                                uStack_104 = SUB84 /* extract 2-byte value */(dVar21,0);
                                local_100 = (uint)((ulonglong)dVar21 >> 0x20);
                              }
                              else {
                                local_100 = 0x54411744;
                                uStack_fc = 0x400921fb;
                              }
                            }
                            else {
                              local_100 = 0;
                              uStack_fc = 0;
                            }
                            iVar9 = iVar9 + 1;
                            iVar14 = iVar14 + 1;
                            dVar21 = (double)CONCAT44 /* combine 2-byte values */(uStack_104,local_108) +
                                     (double)CONCAT44 /* combine 2-byte values */(uStack_fc,local_100);
                            local_20 = local_20 + 0xc;
                          } while (iVar14 < 4);
                          if ((dVar21 < 6.2744586607402804) || (6.2919119532597199 < dVar21))
                          goto LAB_0047b55a;
                          local_38 = local_38 + 1;
                        } while (local_38 < this_ptr->frame_count);
                      }
                      if (local_60 != 0) {
                        puVar16 = (uint *)(local_34 + 0x1c + (uint)bVar19 * -8);
                        *(uint *)(local_34 + 0x18) = local_f0;
                        *puVar16 = *(uint *)(&stack0xffffff14 + (uint)bVar19 * -8);
                        puVar16[(uint)bVar19 * -2 + 1] =
                             *(uint *)
                              (&stack0xffffff18 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
                        puVar16 = (uint *)(local_34 + 0x28 + (uint)bVar19 * -8);
                        *(uint *)(local_34 + 0x24) = local_e4;
                        *puVar16 = *(uint *)(&stack0xffffff20 + (uint)bVar19 * -8);
                        puVar16[(uint)bVar19 * -2 + 1] =
                             *(uint *)
                              (&stack0xffffff24 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
                        puVar16 = (uint *)(local_34 + 0x34 + (uint)bVar19 * -8);
                        *(uint *)(local_34 + 0x30) = local_d8;
                        *puVar16 = *(uint *)(&stack0xffffff2c + (uint)bVar19 * -8);
                        puVar16[(uint)bVar19 * -2 + 1] =
                             *(uint *)
                              (&stack0xffffff30 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
                        puVar16 = (uint *)(local_34 + 0x40 + (uint)bVar19 * -8);
                        *(uint *)(local_34 + 0x3c) = local_cc;
                        *puVar16 = *(uint *)(&stack0xffffff38 + (uint)bVar19 * -8);
                        puVar16[(uint)bVar19 * -2 + 1] =
                             *(uint *)
                              (&stack0xffffff3c + (uint)bVar19 * -8 + (uint)bVar19 * -8);
                        *(uint *)(local_34 + 4) = 4;
                        *(uint *)(local_34 + 0x14) = 0;
                        uVar3 = *(uint *)(local_34 + 0x14);
                        *(uint *)(local_34 + 0x10) = uVar3;
                        *(uint *)(local_34 + 0xc) = uVar3;
                        *(uint *)(local_34 + 8) = uVar3;
                        *(uint *)(local_28 + 4) = 0;
                        piVar1 = &local_74->part_list[0].poly_count;
                        *piVar1 = *piVar1 + -1;
                        break;
                      }
                    }
                  }
LAB_0047b55a:
                  local_48 = local_48 + 1;
                  local_58 = local_58 + 0x48;
                  local_5c = local_5c + 4;
                } while (local_48 < (int)local_64);
              }
            }
            local_50 = (uint *)((int)local_50 + 1);
            local_6c = local_6c + 0x48;
            local_70 = local_70 + 4;
          } while ((int)local_50 < (int)local_64);
        }
        local_84 = local_84 + 1;
        local_7c = (CKeyFramedModel *)(local_7c->model_filename + 8);
        puVar16 = local_64;
      } while (local_84 < this_ptr->part_count);
    }
    iVar9 = 0;
    iVar14 = 0;
    if (0 < this_ptr->poly_count) {
      local_80 = 0;
      local_8c = 0;
      local_88 = 0;
      iVar15 = 0;
      do {
        puVar16 = (uint *)(local_88 + (int)this_ptr->poly_vert_list);
        if (2 < (int)puVar16[1]) {
          if (iVar14 < iVar9) {
            puVar17 = (uint *)(local_8c + (int)this_ptr->poly_vert_list);
            for (iVar12 = 0x12; iVar12 != 0; iVar12 = iVar12 + -1) {
              *puVar17 = *puVar16;
              puVar16 = puVar16 + (uint)bVar19 * -2 + 1;
              puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
            }
            local_18 = (uint *)((int)this_ptr->poly_texture_index_list + iVar15);
            *local_18 = *(uint *)(local_80 + (int)this_ptr->poly_texture_index_list);
            puVar2 = this_ptr->env_map_opac_list;
            if (puVar2 != (uchar *)0x0) {
              puVar2[iVar14] = puVar2[iVar9];
            }
          }
          iVar14 = iVar14 + 1;
          local_8c = local_8c + 0x48;
          iVar15 = iVar15 + 4;
        }
        iVar9 = iVar9 + 1;
        local_88 = local_88 + 0x48;
        local_80 = local_80 + 4;
      } while (iVar9 < this_ptr->poly_count);
    }
    this_ptr->poly_count = iVar14;
    core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(this_ptr);
    if (local_78 != 0) {
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      return;
    }
  }
  return;
}
