// Name: shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910
// Address: 00518910
// Address Range: [[00518910, 00519470]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910(CLodMesh * this_ptr, int edge_index)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910(CLodMesh *this_ptr,int edge_index)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  CVector3f *pCVar6;
  int iVar7;
  CLodVert *pCVar8;
  CLodVert *pCVar9;
  CVector3f *pCVar10;
  BADSPACEBASE *in_ESP;
  int iVar11;
  CLodFace *pCVar12;
  float *pfVar13;
  int iVar14;
  int in_stack_fffffed8;
  double in_stack_fffffeec;
  uint uStack_104;
  uint local_100;
  ulonglong local_fc;
  uint local_f4;
  uint local_f0;
  int local_ec;
  CVector3f local_c0;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  CVector3f local_84;
  ulonglong local_78;
  int local_70;
  int local_6c;
  CVector3f *local_68;
  CVector3f *local_64;
  int local_60;
  float local_5c;
  CLodEdge *local_58;
  int *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CLodMesh *local_20;
  CLodEdge *local_1c;
  int local_18;
  int iStack_14;
  CLodEdge *pCVar15;
  int iVar16;
  
  local_58 = this_ptr->edges_ptr + edge_index;
  local_58->collapse_cost = 9.9999999999999997e+34;
  local_58->needs_recalc_flag = 0;
  iVar3 = shape_meshlod_cpp_CLodMesh_validateEdgeCollapse_FUN_00518490
                    (this_ptr,local_58->vertex_idx_1,local_58->vertex_idx_2,in_stack_fffffed8);
  if (iVar3 == edge_index) {
    fVar4 = (float)shape_meshlod_cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480
                             (this_ptr,edge_index,*local_54);
    local_84.z = fVar4;
    iVar3 = shape_meshlod_cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480
                      (this_ptr,edge_index,*(int *)(local_50 + 4));
    local_78 = (double)CONCAT44 /* combine 2-byte values */(iVar3,(uint)local_78);
    if ((fVar4 == 0.0) || (iVar3 == 0)) {
      local_30 = 0;
      iVar3 = 0;
      if ((g_TempFacesInitGuard & 1) == 0) {
        g_TempFacesInitGuard = g_TempFacesInitGuard | 1;
        crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                  (g_TempNeighborFaces,200,&g_LodFaceTypeInfo);
        crt_stdlib_c_atexit_FUN_005ff060(&g_TempNeighborFacesDestructorNode);
      }
      g_LodGenerationStamp = g_LodGenerationStamp + 1;
      g_LodTempFaceStamp = g_LodTempFaceStamp + 1;
      local_58 = (CLodEdge *)0x0;
      do {
        iStack_14 = local_44[1];
        iVar11 = *local_44;
        if (local_58 == (CLodEdge *)0x1) {
          iStack_14 = *local_44;
          iVar11 = local_44[1];
        }
        local_3c = 0;
        local_4c = iVar11 * 0x4c4;
        local_24 = local_28 << 2;
        local_34 = 0;
        while( true ) {
          pCVar8 = this_ptr->vertex_data;
          if (*(int *)((int)pCVar8->adjacent_edge_indices + local_4c + -4) <= local_3c) break;
          iVar16 = *(int *)((int)pCVar8->adjacent_edge_indices + local_34 + local_4c);
          local_1c = this_ptr->edges_ptr + iVar16;
          if (iVar16 != edge_index) {
            if (199 < local_28) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Too many neighboring edges!");
              g_CurrentFilename = "..\\shape\\meshlod.cpp";
              g_CurrentLineNumber = 0xbca;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Too many neighboring edges!");
            }
            if (iVar11 == local_1c->vertex_idx_1) {
              iVar16 = local_1c->vertex_idx_2;
            }
            else {
              iVar16 = local_1c->vertex_idx_1;
            }
            *(int *)((int)g_MaxNeighborVerts + local_24) = iVar16;
            local_24 = local_24 + 4;
            local_28 = local_28 + 1;
            iVar16 = 0;
            if (0 < local_1c->adjacent_tri_count) {
              iVar5 = iVar3 * 0x8c;
              pCVar15 = local_1c;
              do {
                iVar2 = g_LodGenerationStamp;
                iVar7 = pCVar15->adjacent_tri_indices[0];
                pCVar12 = this_ptr->tri_data;
                iVar14 = iVar5;
                local_18 = iVar7;
                if (g_LodGenerationStamp != pCVar12[iVar7].visited_stamp) {
                  pCVar12[iVar7].affected_by_edge_stamp = g_LodTempFaceStamp;
                  pCVar12[iVar7].visited_stamp = iVar2;
                  if (((pCVar12[iVar7].vertex_idx_0 != iStack_14) &&
                      (iStack_14 != pCVar12[iVar7].vertex_idx_1)) &&
                     (iStack_14 != pCVar12[iVar7].vertex_idx_2)) {
                    if (199 < iVar3) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Too many neighboring faces!");
                      g_CurrentFilename = "..\\shape\\meshlod.cpp";
                      g_CurrentLineNumber = 0xbf4;
                      core_main_c_displayErrorAndQuit_FUN_00506f10
                                ("Too many neighboring faces!");
                    }
                    *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -2) + iVar5 + 4) = iVar11;
                    if (iVar11 == pCVar12[iVar7].vertex_idx_0) {
                      *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar5) =
                           pCVar12[iVar7].vertex_idx_1;
                      iVar7 = pCVar12[iVar7].vertex_idx_2;
LAB_0051919d:
                      *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar5 + 4) = iVar7;
                    }
                    else {
                      if (iVar11 == pCVar12[iVar7].vertex_idx_1) {
                        *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar5) =
                             pCVar12[iVar7].vertex_idx_2;
                        iVar7 = pCVar12[iVar7].vertex_idx_0;
                        goto LAB_0051919d;
                      }
                      if (iVar11 == pCVar12[iVar7].vertex_idx_2) {
                        *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar5) =
                             pCVar12[iVar7].vertex_idx_0;
                        iVar7 = pCVar12[iVar7].vertex_idx_1;
                        goto LAB_0051919d;
                      }
                      g_CurrentFilename = "..\\shape\\meshlod.cpp";
                      g_CurrentLineNumber = 0xc06;
                      core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
                    }
                    iVar14 = iVar5 + 0x8c;
                    iVar3 = iVar3 + 1;
                    *(int *)((int)g_TempNeighborFaces[0].edge_dot_products + iVar5 + 0xc) = local_18
                    ;
                  }
                }
                pCVar15 = (CLodEdge *)&pCVar15->vertex_idx_2;
                iVar16 = iVar16 + 1;
                iVar5 = iVar14;
              } while (iVar16 < local_1c->adjacent_tri_count);
            }
          }
          local_3c = local_3c + 1;
          local_34 = local_34 + 4;
        }
        local_58 = (CLodEdge *)((int)local_58 + 1);
      } while ((int)local_58 < 2);
      pCVar8 = pCVar8 + *local_44;
      fStack_90 = (pCVar8->position).x;
      local_8c = (pCVar8->position).y;
      fStack_88 = (pCVar8->position).z;
      local_60 = local_28 << 2;
      local_68 = &g_TempNeighborFaces[0].normal;
      local_50 = 0;
      local_64 = g_SamplePointArray + 1;
      do {
        if ((g_LodReplayMode != 0) ||
           (((local_50 == 0 || (local_70 == 0)) && ((local_50 == 4 || (local_6c == 0)))))) {
          iVar11 = local_44[1];
          local_54 = (int *)((float)local_50 * 0.25f);
          local_5c = 1.0 - (float)local_54;
          pCVar8 = this_ptr->vertex_data;
          local_9c = pCVar8[iVar11].position.x * (float)local_54;
          local_98 = pCVar8[iVar11].position.y * (float)local_54;
          fStack_94 = pCVar8[iVar11].position.z * (float)local_54;
          pCVar8 = this_ptr->vertex_data + *local_44;
          (pCVar8->position).x = fStack_90 * local_5c + local_9c;
          fVar4 = 0.75f;
          (pCVar8->position).y = local_8c * local_5c + local_98;
          (pCVar8->position).z = fStack_88 * local_5c + fStack_94;
          local_fc = 0.0;
          if (0.0 < fVar4) {
            pCVar8 = this_ptr->vertex_data + *local_44;
            g_SamplePointCount = 1;
            if (pCVar8 != (CLodVert *)g_SamplePointArray) {
              g_SamplePointArray[0].x = (pCVar8->position).x;
              g_SamplePointArray[0].z = (pCVar8->position).z;
              g_SamplePointArray[0].y = (pCVar8->position).y;
            }
            if (0 < local_28) {
              iVar11 = 0;
              local_48 = local_60;
              do {
                iVar16 = g_SamplePointCount;
                pCVar9 = this_ptr->vertex_data + *(int *)((int)g_MaxNeighborVerts + iVar11);
                pCVar8 = this_ptr->vertex_data + *local_44;
                local_c0.x = ((pCVar8->position).x + (pCVar9->position).x) / 2f;
                local_c0.y = ((pCVar8->position).y + (pCVar9->position).y) * 0.5f;
                local_c0.z = ((pCVar8->position).z + (pCVar9->position).z) * 0.5f;
                iVar5 = g_SamplePointCount + 1;
                pCVar6 = g_SamplePointArray + g_SamplePointCount;
                g_SamplePointCount = iVar5;
                if (pCVar6 != &local_c0) {
                  pCVar6->x = local_c0.x;
                  g_SamplePointArray[iVar16].y = local_c0.y;
                  g_SamplePointArray[iVar16].z = local_c0.z;
                }
                iVar11 = iVar11 + 4;
              } while (iVar11 < local_60);
            }
            local_30 = 0;
            if (0 < iVar3) {
              pCVar12 = g_TempNeighborFaces;
              do {
                pCVar6 = shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870
                                   (this_ptr,&local_84,pCVar12);
                iVar11 = g_SamplePointCount;
                iVar16 = g_SamplePointCount + 1;
                pCVar10 = g_SamplePointArray + g_SamplePointCount;
                g_SamplePointCount = iVar16;
                if (pCVar10 != pCVar6) {
                  pCVar10->x = pCVar6->x;
                  g_SamplePointArray[iVar11].y = pCVar6->y;
                  g_SamplePointArray[iVar11].z = pCVar6->z;
                }
                local_30 = local_30 + 1;
                pCVar12 = pCVar12 + 1;
              } while (local_30 < iVar3);
            }
            if (g_EnableMidpointSampling != 0) {
              iVar11 = 1;
              local_40 = g_SamplePointCount;
              if (1 < g_SamplePointCount) {
                iVar16 = g_SamplePointCount * 0xc;
                pCVar6 = local_64;
                do {
                  local_b4 = g_SamplePointArray[0].x + pCVar6->x;
                  local_a8 = local_b4 / 2f;
                  local_b0 = g_SamplePointArray[0].y + pCVar6->y;
                  local_ac = g_SamplePointArray[0].z + pCVar6->z;
                  local_a4 = local_b0 * 0.5f;
                  local_a0 = local_ac * 0.5f;
                  local_40 = local_40 + 1;
                  pfVar13 = (float *)((int)&g_SamplePointArray[0].x + iVar16);
                  if (pfVar13 != &local_a8) {
                    *pfVar13 = local_a8;
                    *(float *)((int)&g_SamplePointArray[0].y + iVar16) = local_a4;
                    *(float *)((int)&g_SamplePointArray[0].z + iVar16) = local_a0;
                  }
                  iVar11 = iVar11 + 1;
                  pCVar6 = pCVar6 + 1;
                  iVar16 = iVar16 + 0xc;
                } while (iVar11 < g_SamplePointCount);
              }
              g_SamplePointCount = local_40;
            }
            in_stack_fffffeec = (double)((0.75f * 1e+10) / (float)g_SamplePointCount);
            shape_meshlod_cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50
                      (this_ptr->next_lod,in_stack_fffffeec);
            if (0 < g_SamplePointCount) {
              iVar11 = 0;
              do {
                pdVar1 = (double *)((int)g_SampleDistances + iVar11);
                iVar11 = iVar11 + 8;
                local_fc = *pdVar1 * in_stack_fffffeec + local_fc;
              } while (SBORROW /* signed borrow */4(iVar11,g_SamplePointCount * 8) !=
                       iVar11 + g_SamplePointCount * -8 < 0);
            }
            if (*(double *)(local_44 + 2) < local_fc) goto LAB_00518f71;
          }
          iVar11 = 0;
          pCVar6 = local_68;
          if (0 < iVar3) {
            do {
              shape_meshlod_cpp_CLodMesh_validateFace_FUN_00519830
                        (this_ptr,g_TempNeighborFaces + iVar11);
              iVar16 = g_TempNeighborFaces[iVar11].visited_stamp;
              pCVar12 = this_ptr->tri_data;
              if (pCVar6->z * pCVar12[iVar16].normal.z +
                  pCVar6->x * pCVar12[iVar16].normal.x + pCVar6->y * pCVar12[iVar16].normal.y < 0.0)
              break;
              iVar11 = iVar11 + 1;
              pCVar6 = (CVector3f *)((int)(pCVar6 + 0xb) + 8);
            } while (iVar11 < iVar3);
          }
          if (iVar3 <= iVar11) {
            if ((0 < this_ptr->sample_point_count) && (0.75f < 1.0)) {
              local_ec = 0;
              local_2c = 0;
              fVar4 = 0.0;
              if (0 < this_ptr->sample_point_count) {
                local_38 = 0;
                do {
                  local_20 = (CLodMesh *)
                             ((int)&(this_ptr->sample_points_ptr->position).x + local_38);
                  if (g_LodTempFaceStamp ==
                      this_ptr->tri_data[(int)local_20->tri_data].affected_by_edge_stamp) {
                    uStack_104 = 0x39a08ce9;
                    local_100 = 0x46293e59;
                    iVar11 = 0;
                    if (0 < iVar3) {
                      pCVar12 = g_TempNeighborFaces;
                      do {
                        local_78 = shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
                                             (local_20,(SLodSamplePoint *)pCVar12,
                                              SUB84 /* extract 2-byte value */(in_stack_fffffeec,0));
                        if (local_78 < (double)CONCAT44 /* combine 2-byte values */(local_100,uStack_104)) {
                          local_f4 = SUB84 /* extract 2-byte value */(local_78,0);
                          uStack_104 = local_f4;
                          local_f0 = (uint)((ulonglong)local_78 >> 0x20);
                          local_100 = local_f0;
                        }
                        iVar11 = iVar11 + 1;
                        pCVar12 = pCVar12 + 1;
                      } while (iVar11 < iVar3);
                    }
                    local_ec = local_ec + 1;
                    fVar4 = (float)local_20->active_attribute_count *
                            (float)(double)CONCAT44 /* combine 2-byte values */(local_100,uStack_104) + fVar4;
                  }
                  local_38 = local_38 + 0x1c;
                  local_2c = local_2c + 1;
                } while (local_2c < this_ptr->sample_point_count);
              }
              if (0 < local_ec) {
                local_fc = (double)(((1.0 - 0.75f) * fVar4 * 1e+10) / (float)local_ec
                                   + (float)local_fc);
              }
            }
            if (local_fc < *(double *)(local_44 + 2)) {
              local_44[2] = (int)local_fc;
              local_44[3] = local_fc._4_4_;
              local_44[4] = (int)local_54;
            }
          }
        }
LAB_00518f71:
        local_50 = local_50 + 1;
        if (4 < local_50) {
          pCVar8 = this_ptr->vertex_data + *local_44;
          (pCVar8->position).x = fStack_90;
          (pCVar8->position).y = local_8c;
          (pCVar8->position).z = fStack_88;
          return;
        }
      } while( true );
    }
  }
  return;
}
