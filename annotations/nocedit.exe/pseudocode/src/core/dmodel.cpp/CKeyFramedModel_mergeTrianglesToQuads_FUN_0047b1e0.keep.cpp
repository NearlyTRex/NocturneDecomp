// Name: core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
// Address: 0047b1e0
// MANUAL RECONSTRUCTION
// Address Range: [[0047b1e0, 0047bbb4] [00609dd1, 00609e50] [0060c2e0, 0060c367]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0(CKeyFramedModel *this_ptr,float angle_threshold_radians)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0(CKeyFramedModel *this_ptr,float angle_threshold_radians)

{
  uchar *puVar2;
  CVector3i *pCVar3;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int puVar10;
  int iVar11;
  CVector3f *pCVar12;
  CVector3f *pCVar13;
  CVector3i *pCVar14;
  CVector3i *pCVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  CVector3i *pCVar21;
  float10 fVar23;
  double dVar24;
  double sum_acc;
  double iter_angle;
  int local_f0 [12];
  CVector3f local_c0;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  CVector3f local_9c;
  int local_84;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_3c;
  int local_38;
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
      local_50 = 0;
      do {
        puVar10 = this_ptr->part_list[local_84].poly_count + local_50;
        if (this_ptr->poly_count < puVar10) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 2438;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
        }
        if (local_50 < puVar10) {
          do {
            SMRGLPrimitiveQuad *quad_outer = &this_ptr->poly_vert_list[local_50];
            if (quad_outer->base.base.count == 3) {
              if ((bVar5) && (local_50 == 0)) {
                shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                          (g_CEditorToolsPtr,(float)local_50,(float)this_ptr->poly_count);
              }
              local_48 = local_50 + 1;
              if (local_48 < puVar10) {
                do {
                  SMRGLPrimitiveQuad *quad_inner = &this_ptr->poly_vert_list[local_48];
                  if (((quad_inner->base.base.count == 3) &&
                      (this_ptr->poly_texture_index_list[local_50] ==
                       this_ptr->poly_texture_index_list[local_48])) &&
                     ((puVar2 = this_ptr->env_map_opac_list, puVar2 == (uchar *)0x0 ||
                      (puVar2[local_50] == puVar2[local_48])))) {
                    local_3c = 0;
                    local_4c = -1;
                    do {
                      iVar19 = 0;
                      do {
                        if ((quad_inner->vertices[iVar19].vertex_index ==
                             quad_outer->vertices[local_3c].vertex_index) &&
                           (quad_outer->vertices[g_TriangleMatchTableA[local_3c]].vertex_index ==
                            quad_inner->vertices[g_TriangleMatchTableB[iVar19]].vertex_index)) {
                          local_4c = local_3c;
                          local_54 = iVar19;
                          break;
                        }
                        iVar19 = iVar19 + 1;
                      } while (iVar19 < 3);
                      local_3c = local_3c + 1;
                    } while (local_3c < 3);
                    if (-1 < local_4c) {
                      local_f0[0] = quad_outer->vertices[local_4c].vertex_index;
                      local_f0[1] = quad_outer->vertices[local_4c].texture_u;
                      local_f0[2] = quad_outer->vertices[local_4c].texture_v;
                      local_f0[3] = quad_inner->vertices[g_TriangleMatchTableA[local_54]].vertex_index;
                      local_f0[4] = quad_inner->vertices[g_TriangleMatchTableA[local_54]].texture_u;
                      local_f0[5] = quad_inner->vertices[g_TriangleMatchTableA[local_54]].texture_v;
                      local_f0[6] = quad_outer->vertices[g_TriangleMatchTableA[local_4c]].vertex_index;
                      local_f0[7] = quad_outer->vertices[g_TriangleMatchTableA[local_4c]].texture_u;
                      local_f0[8] = quad_outer->vertices[g_TriangleMatchTableA[local_4c]].texture_v;
                      local_f0[9] = quad_outer->vertices[g_TriangleMatchTableB[local_4c]].vertex_index;
                      local_f0[10] = quad_outer->vertices[g_TriangleMatchTableB[local_4c]].texture_u;
                      local_f0[11] = quad_outer->vertices[g_TriangleMatchTableB[local_4c]].texture_v;
                      local_38 = 0;
                      if (this_ptr->frame_count < 1) {
LAB_0047bb1b:
                        for (iVar19 = 0; iVar19 < 4; iVar19 = iVar19 + 1) {
                          quad_outer->vertices[iVar19].vertex_index = local_f0[iVar19 * 3];
                          quad_outer->vertices[iVar19].texture_u   = local_f0[iVar19 * 3 + 1];
                          quad_outer->vertices[iVar19].texture_v   = local_f0[iVar19 * 3 + 2];
                        }
                        quad_outer->base.base.count = 4;
                        quad_outer->base.surface_normal.A.i = 0;
                        quad_outer->base.surface_normal.B.i = 0;
                        quad_outer->base.surface_normal.C.i = 0;
                        quad_outer->base.surface_normal.D.i = 0;
                        quad_inner->base.base.count = 0;
                        this_ptr->part_list[local_84].poly_count = this_ptr->part_list[local_84].poly_count + -1;
                        break;
                      }
                      while( true ) {
                        pCVar12 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                            (this_ptr,&local_c0,local_38,local_48);
                        pCVar13 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                            (this_ptr,&local_9c,local_38,local_50);
                        if (pCVar13->z * pCVar12->z +
                            pCVar13->x * pCVar12->x + pCVar13->y * pCVar12->y < (float)fVar23)
                        break;
                        iVar18 = local_38 * this_ptr->vertex_count;
                        dVar24 = 0.0;
                        pCVar3 = this_ptr->vertex_list;
                        iVar19 = 0;
                        do {
                          sum_acc = dVar24;
                          pCVar14 = pCVar3 + iVar18 + local_f0[iVar19 * 3];
                          pCVar16 = pCVar3 + iVar18 + local_f0[((iVar19 + 1) % 4) * 3];
                          pCVar21 = pCVar3 + iVar18 + local_f0[((iVar19 + 2) % 4) * 3];
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
                              iter_angle = acos(dVar24);
                            }
                            else {
                              iter_angle = 3.1415926535;
                            }
                          }
                          else {
                            iter_angle = 0.0;
                          }
                          iVar19 = iVar19 + 1;
                          dVar24 = sum_acc + iter_angle;
                        } while (iVar19 < 4);
                        if ((dVar24 < 6.2744586607402804) || (6.2919119532597199 < dVar24)) break;
                        local_38 = local_38 + 1;
                        if (this_ptr->frame_count <= local_38) goto LAB_0047bb1b;
                      }
                    }
                  }
                  local_48 = local_48 + 1;
                } while (local_48 < puVar10);
              }
            }
            local_50 = local_50 + 1;
          } while (local_50 < puVar10);
        }
        local_84 = local_84 + 1;
        local_50 = puVar10;
      } while (local_84 < this_ptr->part_count);
    }
    iVar11 = 0;
    iVar17 = 0;
    if (0 < this_ptr->poly_count) {
      do {
        if (2 < this_ptr->poly_vert_list[iVar11].base.base.count) {
          if (iVar17 < iVar11) {
            this_ptr->poly_vert_list[iVar17] = this_ptr->poly_vert_list[iVar11];
            this_ptr->poly_texture_index_list[iVar17] = this_ptr->poly_texture_index_list[iVar11];
            puVar2 = this_ptr->env_map_opac_list;
            if (puVar2 != (uchar *)0x0) {
              puVar2[iVar17] = puVar2[iVar11];
            }
          }
          iVar17 = iVar17 + 1;
        }
        iVar11 = iVar11 + 1;
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
