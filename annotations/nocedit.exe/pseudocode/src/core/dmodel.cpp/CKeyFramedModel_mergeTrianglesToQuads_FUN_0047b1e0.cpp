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
  int aiStackY_10d4 [1006];
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_ec;
  uint uStack_e0;
  uint uStack_d4;
  uint uStack_c8;
  CVector3f CStack_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  CVector3f CStack_98;
  CVector3i **local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  CKeyFramedModel *local_78;
  uint local_74;
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
  CVector3i **local_20;
  int local_1c;
  float local_18;
  uint *puStack_14;
  
  bVar19 = 0;
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->poly_count) && (0 < this_ptr->frame_count)) {
    core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(this_ptr);
    fVar20 = (float10)fcos((float10)angle_threshold_radians);
    local_18 = (float)fVar20;
    local_74 = 0;
    bVar4 = 2000 < this_ptr->poly_count;
    if (bVar4) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Reducing polygons...");
      local_74 = 1;
    }
    local_74 = (uint)bVar4;
    local_80 = 0;
    if (0 < this_ptr->part_count) {
      local_78 = this_ptr;
      puVar16 = (uint *)0x0;
      do {
        local_60 = (uint *)(local_78->part_list[0].poly_count + (int)puVar16);
        if (this_ptr->poly_count < (int)local_60) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0x986;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
        }
        local_4c = puVar16;
        if ((int)puVar16 < (int)local_60) {
          local_70 = local_78;
          local_68 = (int)puVar16 * 0x48;
          local_6c = (int)puVar16 << 2;
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
                     ((puVar2 = this_ptr->env_map_opac_list, puVar2 == (uchar *)0x0 ||
                      (*(uchar *)((int)local_4c + (int)puVar2) == puVar2[local_44])))) {
                    local_38 = 0;
                    local_40 = 0;
                    local_48 = -1;
                    local_3c = local_30;
                    do {
                      iVar14 = 0;
                      local_28 = local_40;
                      iVar15 = 0;
                      local_2c = local_3c;
                      iVar9 = local_24;
                      do {
                        if ((*(int *)(iVar9 + 0x18) == *(int *)(local_3c + 0x18)) &&
                           (*(int *)(local_30 +
                                     *(int *)((int)g_TriangleMatchTableA + local_40) * 0xc + 0x18)
                            == *(int *)(local_24 +
                                        *(int *)((int)g_TriangleMatchTableB + iVar14) * 0xc + 0x18))
                           ) {
                          local_50 = iVar15;
                          local_48 = local_38;
                          break;
                        }
                        iVar14 = iVar14 + 4;
                        iVar15 = iVar15 + 1;
                        iVar9 = iVar9 + 0xc;
                      } while (iVar14 < 0xc);
                      iVar14 = local_48;
                      iVar9 = local_50;
                      local_38 = local_38 + 1;
                      local_40 = local_40 + 4;
                      local_3c = local_3c + 0xc;
                    } while (local_38 < 3);
                    if (-1 < local_48) {
                      iVar15 = local_48 * 0xc + local_30;
                      puVar16 = (uint *)(iVar15 + 0x1c + (uint)bVar19 * -8);
                      uStack_ec = *(uint *)(iVar15 + 0x18);
                      *(uint *)(&stack0xffffff18 + (uint)bVar19 * -8) = *puVar16;
                      iVar12 = local_30;
                      *(uint *)(&stack0xffffff1c + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                           puVar16[(uint)bVar19 * -2 + 1];
                      iVar15 = g_TriangleMatchTableA[iVar14];
                      iVar9 = g_TriangleMatchTableA[iVar9] * 0xc + local_24;
                      puVar16 = (uint *)(iVar9 + 0x1c + (uint)bVar19 * -8);
                      uStack_e0 = *(uint *)(iVar9 + 0x18);
                      *(uint *)(&stack0xffffff24 + (uint)bVar19 * -8) = *puVar16;
                      *(uint *)(&stack0xffffff28 + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                           puVar16[(uint)bVar19 * -2 + 1];
                      iVar9 = iVar15 * 0xc + iVar12;
                      puVar16 = (uint *)(iVar9 + 0x1c + (uint)bVar19 * -8);
                      uStack_d4 = *(uint *)(iVar9 + 0x18);
                      *(uint *)(&stack0xffffff30 + (uint)bVar19 * -8) = *puVar16;
                      *(uint *)(&stack0xffffff34 + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                           puVar16[(uint)bVar19 * -2 + 1];
                      iVar12 = g_TriangleMatchTableB[iVar14] * 0xc + iVar12;
                      local_5c = 1;
                      puVar16 = (uint *)(iVar12 + 0x1c + (uint)bVar19 * -8);
                      uStack_c8 = *(uint *)(iVar12 + 0x18);
                      *(uint *)(&stack0xffffff3c + (uint)bVar19 * -8) = *puVar16;
                      *(uint *)(&stack0xffffff40 + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                           puVar16[(uint)bVar19 * -2 + 1];
                      local_34 = 0;
                      if (0 < this_ptr->frame_count) {
                        do {
                          pCVar10 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                              (this_ptr,&CStack_bc,local_34,local_44);
                          pCVar11 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                              (this_ptr,&CStack_98,local_34,(int)local_4c);
                          if (pCVar11->z * pCVar10->z +
                              pCVar11->x * pCVar10->x + pCVar11->y * pCVar10->y < local_18)
                          goto LAB_0047b55a;
                          dVar21 = 0.0;
                          local_1c = 0;
                          iVar9 = 2;
                          iVar14 = 0;
                          local_20 = this_ptr->vertex_list + local_34 * this_ptr->vertex_count * 3;
                          do {
                            local_100 = (uint)((ulonglong)dVar21 >> 0x20);
                            uStack_104 = SUB84 /* extract 2-byte value */(dVar21,0);
                            local_8c = local_20 + *(int *)((int)&stack0xffffff14 + local_1c) * 3;
                            ppCVar13 = local_20 +
                                       *(int *)((int)&stack0xffffff14 + ((iVar14 + 1) % 4) * 0xc) *
                                       3;
                            ppCVar18 = local_20 +
                                       *(int *)((int)&stack0xffffff14 + (iVar9 % 4) * 0xc) * 3;
                            fVar5 = (float)((int)*local_8c - (int)*ppCVar13);
                            fVar6 = (float)((int)local_8c[1] - (int)ppCVar13[1]);
                            fVar8 = (float)((int)local_8c[2] - (int)ppCVar13[2]);
                            fVar7 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar6 * fVar6);
                            if (fVar7 <= 0.0) {
                              local_a0 = 0.0;
                              local_a4 = 0.0;
                              local_9c = 0.0;
                            }
                            else {
                              fVar7 = 1.0 / fVar7;
                              local_a4 = fVar5 * fVar7;
                              local_a0 = fVar6 * fVar7;
                              local_9c = fVar8 * fVar7;
                            }
                            fVar5 = (float)((int)*ppCVar18 - (int)*ppCVar13);
                            fVar6 = (float)((int)ppCVar18[1] - (int)ppCVar13[1]);
                            puStack_14 = (uint *)((int)ppCVar18[2] - (int)ppCVar13[2]);
                            fVar8 = (float)((int)ppCVar18[2] - (int)ppCVar13[2]);
                            fVar7 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar6 * fVar6);
                            if (fVar7 <= 0.0) {
                              local_ac = 0.0;
                              local_b0 = 0.0;
                              local_a8 = 0.0;
                            }
                            else {
                              fVar7 = 1.0 / fVar7;
                              local_b0 = fVar5 * fVar7;
                              local_ac = fVar6 * fVar7;
                              local_a8 = fVar8 * fVar7;
                            }
                            dVar21 = (double)(local_9c * local_a8 +
                                             local_a4 * local_b0 + local_a0 * local_ac);
                            if (dVar21 < 1.0) {
                              if (-1 < dVar21) {
                                dVar21 = crt_math_c_acos_FUN_00600162(dVar21);
                                local_100 = SUB84 /* extract 2-byte value */(dVar21,0);
                                uStack_fc = (uint)((ulonglong)dVar21 >> 0x20);
                              }
                              else {
                                uStack_fc = 0x54411744;
                                local_f8 = 0x400921fb;
                              }
                            }
                            else {
                              uStack_fc = 0;
                              local_f8 = 0;
                            }
                            iVar9 = iVar9 + 1;
                            iVar14 = iVar14 + 1;
                            dVar21 = (double)CONCAT44 /* combine 2-byte values */(local_100,uStack_104) +
                                     (double)CONCAT44 /* combine 2-byte values */(local_f8,uStack_fc);
                            local_1c = local_1c + 0xc;
                          } while (iVar14 < 4);
                          if ((dVar21 < 6.2744586607402804) || (6.2919119532597199 < dVar21))
                          goto LAB_0047b55a;
                          local_34 = local_34 + 1;
                        } while (local_34 < this_ptr->frame_count);
                      }
                      if (local_5c != 0) {
                        puVar16 = (uint *)(local_30 + 0x1c + (uint)bVar19 * -8);
                        *(uint *)(local_30 + 0x18) = uStack_ec;
                        *puVar16 = *(uint *)(&stack0xffffff18 + (uint)bVar19 * -8);
                        puVar16[(uint)bVar19 * -2 + 1] =
                             *(uint *)
                              (&stack0xffffff1c + (uint)bVar19 * -8 + (uint)bVar19 * -8);
                        puVar16 = (uint *)(local_30 + 0x28 + (uint)bVar19 * -8);
                        *(uint *)(local_30 + 0x24) = uStack_e0;
                        *puVar16 = *(uint *)(&stack0xffffff24 + (uint)bVar19 * -8);
                        puVar16[(uint)bVar19 * -2 + 1] =
                             *(uint *)
                              (&stack0xffffff28 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
                        puVar16 = (uint *)(local_30 + 0x34 + (uint)bVar19 * -8);
                        *(uint *)(local_30 + 0x30) = uStack_d4;
                        *puVar16 = *(uint *)(&stack0xffffff30 + (uint)bVar19 * -8);
                        puVar16[(uint)bVar19 * -2 + 1] =
                             *(uint *)
                              (&stack0xffffff34 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
                        puVar16 = (uint *)(local_30 + 0x40 + (uint)bVar19 * -8);
                        *(uint *)(local_30 + 0x3c) = uStack_c8;
                        *puVar16 = *(uint *)(&stack0xffffff3c + (uint)bVar19 * -8);
                        puVar16[(uint)bVar19 * -2 + 1] =
                             *(uint *)
                              (&stack0xffffff40 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
                        *(uint *)(local_30 + 4) = 4;
                        *(uint *)(local_30 + 0x14) = 0;
                        uVar3 = *(uint *)(local_30 + 0x14);
                        *(uint *)(local_30 + 0x10) = uVar3;
                        *(uint *)(local_30 + 0xc) = uVar3;
                        *(uint *)(local_30 + 8) = uVar3;
                        *(uint *)(local_24 + 4) = 0;
                        piVar1 = &local_70->part_list[0].poly_count;
                        *piVar1 = *piVar1 + -1;
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
        puVar16 = local_60;
      } while (local_80 < this_ptr->part_count);
    }
    iVar9 = 0;
    iVar14 = 0;
    if (0 < this_ptr->poly_count) {
      local_7c = 0;
      local_88 = 0;
      local_84 = 0;
      iVar15 = 0;
      do {
        puVar16 = (uint *)(local_84 + (int)this_ptr->poly_vert_list);
        if (2 < (int)puVar16[1]) {
          if (iVar14 < iVar9) {
            puVar17 = (uint *)(local_88 + (int)this_ptr->poly_vert_list);
            for (iVar12 = 0x12; iVar12 != 0; iVar12 = iVar12 + -1) {
              *puVar17 = *puVar16;
              puVar16 = puVar16 + (uint)bVar19 * -2 + 1;
              puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
            }
            puStack_14 = (uint *)((int)this_ptr->poly_texture_index_list + iVar15);
            *puStack_14 = *(uint *)(local_7c + (int)this_ptr->poly_texture_index_list);
            puVar2 = this_ptr->env_map_opac_list;
            if (puVar2 != (uchar *)0x0) {
              puVar2[iVar14] = puVar2[iVar9];
            }
          }
          iVar14 = iVar14 + 1;
          local_88 = local_88 + 0x48;
          iVar15 = iVar15 + 4;
        }
        iVar9 = iVar9 + 1;
        local_84 = local_84 + 0x48;
        local_7c = local_7c + 4;
      } while (iVar9 < this_ptr->poly_count);
    }
    this_ptr->poly_count = iVar14;
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
