// Name: core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
// Address: 0047b1e0
// MANUAL RECONSTRUCTION
// Address Range: [[0047b1e0, 0047bbb4] [00609dd1, 00609e50] [0060c2e0, 0060c367]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0(CKeyFramedModel *this_ptr,float angle_threshold_radians)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0(CKeyFramedModel *this_ptr,float angle_threshold_radians)

{
  int *piVar1;
  uchar *puVar2;
  CVector3i *pCVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint *puVar10;
  int iVar11;
  CVector3f *pCVar12;
  CVector3f *pCVar13;
  CVector3i *pCVar14;
  int iVar15;
  CVector3i *pCVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  CVector3i *pCVar21;
  float10 fVar23;
  double dVar24;
  uint local_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  int local_f0 [4];
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint local_cc;
  uint uStack_c8;
  uint uStack_c4;
  CVector3f local_c0;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  CVector3f local_9c;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  CKeyFramedModel *local_7c;
  int local_70;
  int local_6c;
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
  int local_20;
  byte bVar22;
  
  bVar22 = 0;
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->poly_count) && (0 < this_ptr->frame_count)) {
    core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(this_ptr);
    fVar23 = (float10)fcos((float10)angle_threshold_radians);
    bVar5 = 2000 < this_ptr->poly_count;
    if (bVar5) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Reducing polygons...");
    }
    local_84 = 0;
    if (0 < this_ptr->part_count) {
      local_7c = this_ptr;
      local_50 = (uint *)0x0;
      do {
        puVar10 = (uint *)(local_7c->part_list[0].poly_count + (int)local_50);
        if (this_ptr->poly_count < (int)puVar10) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0x986;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
        }
        if ((int)local_50 < (int)puVar10) {
          local_6c = (int)local_50 * 0x48;
          local_70 = (int)local_50 << 2;
          do {
            iVar11 = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base)
                           .base.type + local_6c;
            if (*(int *)(iVar11 + 4) == 3) {
              if ((bVar5) && ((int)local_50 == 0)) {
                shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                          (g_CEditorToolsPtr,(float)(int)local_50,(float)this_ptr->poly_count);
              }
              local_48 = (int)local_50 + 1;
              if (local_48 < (int)puVar10) {
                local_58 = local_48 * 0x48;
                local_5c = local_48 * 4;
                do {
                  iVar17 = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))
                                 ->base).base.type + local_58;
                  if (((*(int *)(iVar17 + 4) == 3) &&
                      (*(int *)(local_70 + (int)this_ptr->poly_texture_index_list) ==
                       *(int *)(local_5c + (int)this_ptr->poly_texture_index_list))) &&
                     ((puVar2 = this_ptr->env_map_opac_list, puVar2 == (uchar *)0x0 ||
                      (*(uchar *)((int)local_50 + (int)puVar2) == puVar2[local_48])))) {
                    local_3c = 0;
                    local_44 = 0;
                    local_4c = -1;
                    local_40 = iVar11;
                    do {
                      iVar15 = 0;
                      iVar19 = 0;
                      iVar18 = iVar17;
                      do {
                        if ((*(int *)(iVar18 + 0x18) == *(int *)(local_40 + 0x18)) &&
                           (*(int *)(iVar11 + *(int *)((int)g_TriangleMatchTableA + local_44) * 0xc
                                    + 0x18) ==
                            *(int *)(iVar17 + *(int *)((int)g_TriangleMatchTableB + iVar15) * 0xc +
                                    0x18))) {
                          local_4c = local_3c;
                          local_54 = iVar19;
                          break;
                        }
                        iVar15 = iVar15 + 4;
                        iVar19 = iVar19 + 1;
                        iVar18 = iVar18 + 0xc;
                      } while (iVar15 < 0xc);
                      local_44 = local_44 + 4;
                      local_3c = local_3c + 1;
                      local_40 = local_40 + 0xc;
                    } while (local_3c < 3);
                    if (-1 < local_4c) {
                      iVar18 = local_4c * 0xc + iVar11;
                      local_f0[0] = *(int *)(iVar18 + 0x18);
                      local_f0[1] = *(uint *)(iVar18 + 0x1c);
                      local_f0[2] = *(uint *)(iVar18 + 0x20);
                      iVar18 = g_TriangleMatchTableA[local_54] * 0xc + iVar17;
                      local_f0[3] = *(uint *)(iVar18 + 0x18);
                      uStack_e0 = *(uint *)(iVar18 + 0x1c);
                      uStack_dc = *(uint *)(iVar18 + 0x20);
                      iVar18 = g_TriangleMatchTableA[local_4c] * 0xc + iVar11;
                      local_d8 = *(uint *)(iVar18 + 0x18);
                      uStack_d4 = *(uint *)(iVar18 + 0x1c);
                      uStack_d0 = *(uint *)(iVar18 + 0x20);
                      iVar18 = g_TriangleMatchTableB[local_4c] * 0xc + iVar11;
                      local_cc = *(uint *)(iVar18 + 0x18);
                      uStack_c8 = *(uint *)(iVar18 + 0x1c);
                      uStack_c4 = *(uint *)(iVar18 + 0x20);
                      local_38 = 0;
                      if (this_ptr->frame_count < 1) {
LAB_0047bb1b:
                        *(int *)(iVar11 + 0x18) = local_f0[0];
                        *(int *)(iVar11 + 0x1c) = local_f0[1];
                        *(int *)(iVar11 + 0x20) = local_f0[2];
                        *(int *)(iVar11 + 0x24) = local_f0[3];
                        *(uint *)(iVar11 + 0x28) = uStack_e0;
                        *(uint *)(iVar11 + 0x2c) = uStack_dc;
                        *(uint *)(iVar11 + 0x30) = local_d8;
                        *(uint *)(iVar11 + 0x34) = uStack_d4;
                        *(uint *)(iVar11 + 0x38) = uStack_d0;
                        *(uint *)(iVar11 + 0x3c) = local_cc;
                        *(uint *)(iVar11 + 0x40) = uStack_c8;
                        *(uint *)(iVar11 + 0x44) = uStack_c4;
                        *(uint *)(iVar11 + 4) = 4;
                        *(uint *)(iVar11 + 0x14) = 0;
                        uVar4 = *(uint *)(iVar11 + 0x14);
                        *(uint *)(iVar11 + 0x10) = uVar4;
                        *(uint *)(iVar11 + 0xc) = uVar4;
                        *(uint *)(iVar11 + 8) = uVar4;
                        *(uint *)(iVar17 + 4) = 0;
                        piVar1 = &local_7c->part_list[0].poly_count;
                        *piVar1 = *piVar1 + -1;
                        break;
                      }
                      while( true ) {
                        pCVar12 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                            (this_ptr,&local_c0,local_38,local_48);
                        pCVar13 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                            (this_ptr,&local_9c,local_38,(int)local_50);
                        if (pCVar13->z * pCVar12->z +
                            pCVar13->x * pCVar12->x + pCVar13->y * pCVar12->y < (float)fVar23)
                        break;
                        iVar18 = local_38 * this_ptr->vertex_count;
                        dVar24 = 0.0;
                        local_20 = 0;
                        pCVar3 = this_ptr->vertex_list;
                        iVar15 = 2;
                        iVar19 = 0;
                        do {
                          uStack_104 = (uint)((ulonglong)dVar24 >> 0x20);
                          local_108 = SUB84(__BITCAST_UINT64(dVar24),0);
                          pCVar14 = pCVar3 + iVar18 + *(int *)((int)local_f0 + local_20);
                          pCVar16 = pCVar3 + iVar18 + local_f0[((iVar19 + 1) % 4) * 3];
                          pCVar21 = pCVar3 + iVar18 + local_f0[(iVar15 % 4) * 3];
                          fVar6 = (float)(pCVar14->x - pCVar16->x);
                          fVar7 = (float)(pCVar14->y - pCVar16->y);
                          fVar9 = (float)(pCVar14->z - pCVar16->z);
                          fVar8 = SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar7 * fVar7);
                          if (fVar8 <= 0.0) {
                            local_a4 = 0.0;
                            local_a8 = 0.0;
                            local_a0 = 0.0;
                          }
                          else {
                            fVar8 = 1.0 / fVar8;
                            local_a8 = fVar6 * fVar8;
                            local_a4 = fVar7 * fVar8;
                            local_a0 = fVar9 * fVar8;
                          }
                          fVar6 = (float)(pCVar21->x - pCVar16->x);
                          fVar7 = (float)(pCVar21->y - pCVar16->y);
                          fVar9 = (float)(pCVar21->z - pCVar16->z);
                          fVar8 = SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar7 * fVar7);
                          if (fVar8 <= 0.0) {
                            local_b0 = 0.0;
                            local_b4 = 0.0;
                            local_ac = 0.0;
                          }
                          else {
                            fVar8 = 1.0 / fVar8;
                            local_b4 = fVar6 * fVar8;
                            local_b0 = fVar7 * fVar8;
                            local_ac = fVar9 * fVar8;
                          }
                          dVar24 = (double)(local_a0 * local_ac +
                                           local_a8 * local_b4 + local_a4 * local_b0);
                          if (dVar24 < 1.0) {
                            if (-1 < dVar24) {
                              dVar24 = acos(dVar24);
                              uStack_104 = SUB84(__BITCAST_UINT64(dVar24),0);
                              local_100 = (uint)((ulonglong)dVar24 >> 0x20);
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
                          iVar15 = iVar15 + 1;
                          iVar19 = iVar19 + 1;
                          dVar24 = __BITCAST_DOUBLE(CONCAT44(uStack_104,local_108)) +
                                   __BITCAST_DOUBLE(CONCAT44(uStack_fc,local_100));
                          local_20 = local_20 + 0xc;
                        } while (iVar19 < 4);
                        if ((dVar24 < 6.2744586607402804) || (6.2919119532597199 < dVar24)) break;
                        local_38 = local_38 + 1;
                        if (this_ptr->frame_count <= local_38) goto LAB_0047bb1b;
                      }
                    }
                  }
                  local_58 = local_58 + 0x48;
                  local_5c = local_5c + 4;
                  local_48 = local_48 + 1;
                } while (local_48 < (int)puVar10);
              }
            }
            local_6c = local_6c + 0x48;
            local_70 = local_70 + 4;
            local_50 = (uint *)((int)local_50 + 1);
          } while ((int)local_50 < (int)puVar10);
        }
        local_7c = (CKeyFramedModel *)(local_7c->model_filename + 8);
        local_84 = local_84 + 1;
        local_50 = puVar10;
      } while (local_84 < this_ptr->part_count);
    }
    iVar11 = 0;
    iVar17 = 0;
    if (0 < this_ptr->poly_count) {
      local_80 = 0;
      local_8c = 0;
      local_88 = 0;
      iVar18 = 0;
      do {
        puVar10 = (uint *)
                  ((int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base).
                         base.type + local_88);
        if (2 < (int)puVar10[1]) {
          if (iVar17 < iVar11) {
            puVar20 = (uint *)
                      ((int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->
                             base).base.type + local_8c);
            memcpy(puVar20,puVar10,0x48);
            *(uint *)((int)this_ptr->poly_texture_index_list + iVar18) =
                 *(uint *)(local_80 + (int)this_ptr->poly_texture_index_list);
            puVar2 = this_ptr->env_map_opac_list;
            if (puVar2 != (uchar *)0x0) {
              puVar2[iVar17] = puVar2[iVar11];
            }
          }
          iVar17 = iVar17 + 1;
          local_8c = local_8c + 0x48;
          iVar18 = iVar18 + 4;
        }
        iVar11 = iVar11 + 1;
        local_88 = local_88 + 0x48;
        local_80 = local_80 + 4;
      } while (iVar11 < this_ptr->poly_count);
    }
    this_ptr->poly_count = iVar17;
    core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(this_ptr);
    if (bVar5) {
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      return;
    }
  }
  return;
}
