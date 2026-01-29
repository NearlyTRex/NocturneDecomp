// Name: shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910
// Address: 00518910
// Address Range: [[00518910, 00519470]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910(CLodMesh *this_ptr,int edge_index)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910(CLodMesh *this_ptr,int edge_index)

{
  double *pdVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  CVector3f *pCVar5;
  CLodVert *pCVar6;
  int iVar7;
  CLodVert *pCVar8;
  CVector3f *pCVar9;
  int iVar10;
  CLodFace *pCVar11;
  float *pfVar12;
  int iVar13;
  double in_stack_fffffed8;
  uint local_118;
  uint uStack_114;
  ulonglong local_110;
  uint local_108;
  uint uStack_104;
  int local_100;
  CVector3f local_d4;
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
  CVector3f local_98;
  double local_8c;
  int local_84;
  int local_80;
  CVector3f *local_7c;
  CVector3f *local_78;
  int local_74;
  float local_70;
  int local_6c;
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  CLodEdge *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  CLodMesh *local_34;
  CLodEdge *local_30;
  int local_2c;
  int local_28;
  CLodEdge *local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_58 = this_ptr->edges_ptr + edge_index;
  local_58->collapse_cost = 9.9999999999999997e+34;
  local_58->needs_recalc_flag = 0;
  iVar3 = shape_meshlod_cpp_CLodMesh_validateEdgeCollapse_FUN_00518490
                    (this_ptr,local_58->vertex_idx_1,local_58->vertex_idx_2,
                     SUB84(in_stack_fffffed8,0));
  if (iVar3 == edge_index) {
    iVar3 = shape_meshlod_cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480
                      (this_ptr,edge_index,local_58->vertex_idx_1);
    local_84 = iVar3;
    local_80 = shape_meshlod_cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480
                         (this_ptr,edge_index,local_58->vertex_idx_2);
    if ((iVar3 == 0) || (local_80 == 0)) {
      local_3c = 0;
      iVar3 = 0;
      if ((g_TempFacesInitGuard & 1) == 0) {
        g_TempFacesInitGuard = g_TempFacesInitGuard | 1;
        __arrinit(g_TempNeighborFaces,200,&g_LodFaceTypeInfo);
        _atexit(&g_TempNeighborFacesDestructorNode);
      }
      g_LodGenerationStamp = g_LodGenerationStamp + 1;
      g_LodTempFaceStamp = g_LodTempFaceStamp + 1;
      local_6c = 0;
      do {
        local_28 = local_58->vertex_idx_2;
        local_1c = local_58->vertex_idx_1;
        if (local_6c == 1) {
          local_28 = local_58->vertex_idx_1;
          local_1c = local_58->vertex_idx_2;
        }
        local_50 = 0;
        local_60 = local_1c * 0x4c4;
        local_38 = local_3c << 2;
        local_48 = 0;
        while( true ) {
          pCVar6 = this_ptr->vertex_data;
          if (*(int *)((int)pCVar6->adjacent_edge_indices + local_60 + -4) <= local_50) break;
          iVar10 = *(int *)((int)pCVar6->adjacent_edge_indices + local_48 + local_60);
          local_30 = this_ptr->edges_ptr + iVar10;
          if (iVar10 != edge_index) {
            if (199 < local_3c) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Too many neighboring edges!");
              g_CurrentFilename = "..\\shape\\meshlod.cpp";
              g_CurrentLineNumber = 0xbca;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Too many neighboring edges!");
            }
            if (local_1c == local_30->vertex_idx_1) {
              iVar10 = local_30->vertex_idx_2;
            }
            else {
              iVar10 = local_30->vertex_idx_1;
            }
            *(int *)((int)g_MaxNeighborVerts + local_38) = iVar10;
            local_38 = local_38 + 4;
            local_3c = local_3c + 1;
            local_20 = 0;
            if (0 < local_30->adjacent_tri_count) {
              local_24 = local_30;
              iVar10 = iVar3 * 0x8c;
              do {
                iVar4 = g_LodGenerationStamp;
                iVar7 = local_24->adjacent_tri_indices[0];
                pCVar11 = this_ptr->tri_data;
                iVar13 = iVar10;
                local_2c = iVar7;
                if (g_LodGenerationStamp != pCVar11[iVar7].visited_stamp) {
                  pCVar11[iVar7].affected_by_edge_stamp = g_LodTempFaceStamp;
                  pCVar11[iVar7].visited_stamp = iVar4;
                  if (((pCVar11[iVar7].vertex_idx_0 != local_28) &&
                      (local_28 != pCVar11[iVar7].vertex_idx_1)) &&
                     (local_28 != pCVar11[iVar7].vertex_idx_2)) {
                    if (199 < iVar3) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Too many neighboring faces!");
                      g_CurrentFilename = "..\\shape\\meshlod.cpp";
                      g_CurrentLineNumber = 0xbf4;
                      core_main_c_displayErrorAndQuit_FUN_00506f10
                                ("Too many neighboring faces!");
                    }
                    *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -2) + iVar10 + 4) = local_1c;
                    if (local_1c == pCVar11[iVar7].vertex_idx_0) {
                      *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar10) =
                           pCVar11[iVar7].vertex_idx_1;
                      iVar7 = pCVar11[iVar7].vertex_idx_2;
LAB_0051919d:
                      *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar10 + 4) = iVar7;
                    }
                    else {
                      if (local_1c == pCVar11[iVar7].vertex_idx_1) {
                        *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar10) =
                             pCVar11[iVar7].vertex_idx_2;
                        iVar7 = pCVar11[iVar7].vertex_idx_0;
                        goto LAB_0051919d;
                      }
                      if (local_1c == pCVar11[iVar7].vertex_idx_2) {
                        *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar10) =
                             pCVar11[iVar7].vertex_idx_0;
                        iVar7 = pCVar11[iVar7].vertex_idx_1;
                        goto LAB_0051919d;
                      }
                      g_CurrentFilename = "..\\shape\\meshlod.cpp";
                      g_CurrentLineNumber = 0xc06;
                      core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
                    }
                    iVar13 = iVar10 + 0x8c;
                    iVar3 = iVar3 + 1;
                    *(int *)((int)g_TempNeighborFaces[0].edge_dot_products + iVar10 + 0xc) =
                         local_2c;
                  }
                }
                local_24 = (CLodEdge *)&local_24->vertex_idx_2;
                local_20 = local_20 + 1;
                iVar10 = iVar13;
              } while (local_20 < local_30->adjacent_tri_count);
            }
          }
          local_50 = local_50 + 1;
          local_48 = local_48 + 4;
        }
        local_6c = local_6c + 1;
      } while (local_6c < 2);
      pCVar6 = pCVar6 + local_58->vertex_idx_1;
      local_a4 = (pCVar6->position).x;
      local_a0 = (pCVar6->position).y;
      local_9c = (pCVar6->position).z;
      local_74 = local_3c << 2;
      local_7c = &g_TempNeighborFaces[0].normal;
      local_64 = 0;
      local_78 = g_SamplePointArray + 1;
      do {
        if ((g_LodReplayMode != 0) ||
           (((local_64 == 0 || (local_84 == 0)) && ((local_64 == 4 || (local_80 == 0)))))) {
          local_18 = local_64;
          iVar10 = local_58->vertex_idx_2;
          local_68 = (float)local_64 * 0.25f;
          local_70 = 1.0 - local_68;
          pCVar6 = this_ptr->vertex_data;
          local_b0 = pCVar6[iVar10].position.x * local_68;
          local_ac = pCVar6[iVar10].position.y * local_68;
          local_a8 = pCVar6[iVar10].position.z * local_68;
          pCVar6 = this_ptr->vertex_data + local_58->vertex_idx_1;
          (pCVar6->position).x = local_a4 * local_70 + local_b0;
          fVar2 = 0.75f;
          (pCVar6->position).y = local_a0 * local_70 + local_ac;
          (pCVar6->position).z = local_9c * local_70 + local_a8;
          local_110 = 0.0;
          if (0.0 < fVar2) {
            pCVar6 = this_ptr->vertex_data + local_58->vertex_idx_1;
            g_SamplePointCount = 1;
            if (pCVar6 != (CLodVert *)g_SamplePointArray) {
              g_SamplePointArray[0].x = (pCVar6->position).x;
              g_SamplePointArray[0].z = (pCVar6->position).z;
              g_SamplePointArray[0].y = (pCVar6->position).y;
            }
            if (0 < local_3c) {
              iVar10 = 0;
              local_5c = local_74;
              do {
                iVar7 = g_SamplePointCount;
                pCVar8 = this_ptr->vertex_data + *(int *)((int)g_MaxNeighborVerts + iVar10);
                pCVar6 = this_ptr->vertex_data + local_58->vertex_idx_1;
                local_d4.x = ((pCVar6->position).x + (pCVar8->position).x) / 2.0f;
                local_d4.y = ((pCVar6->position).y + (pCVar8->position).y) * 0.5f;
                local_d4.z = ((pCVar6->position).z + (pCVar8->position).z) * 0.5f;
                iVar4 = g_SamplePointCount + 1;
                pCVar5 = g_SamplePointArray + g_SamplePointCount;
                g_SamplePointCount = iVar4;
                if (pCVar5 != &local_d4) {
                  pCVar5->x = local_d4.x;
                  g_SamplePointArray[iVar7].y = local_d4.y;
                  g_SamplePointArray[iVar7].z = local_d4.z;
                }
                iVar10 = iVar10 + 4;
              } while (iVar10 < local_74);
            }
            local_44 = 0;
            if (0 < iVar3) {
              pCVar11 = g_TempNeighborFaces;
              do {
                pCVar5 = shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870
                                   (this_ptr,&local_98,pCVar11);
                iVar10 = g_SamplePointCount;
                iVar7 = g_SamplePointCount + 1;
                pCVar9 = g_SamplePointArray + g_SamplePointCount;
                g_SamplePointCount = iVar7;
                if (pCVar9 != pCVar5) {
                  pCVar9->x = pCVar5->x;
                  g_SamplePointArray[iVar10].y = pCVar5->y;
                  g_SamplePointArray[iVar10].z = pCVar5->z;
                }
                local_44 = local_44 + 1;
                pCVar11 = pCVar11 + 1;
              } while (local_44 < iVar3);
            }
            if (g_EnableMidpointSampling != 0) {
              iVar10 = 1;
              local_54 = g_SamplePointCount;
              if (1 < g_SamplePointCount) {
                iVar7 = g_SamplePointCount * 0xc;
                pCVar5 = local_78;
                do {
                  local_c8 = g_SamplePointArray[0].x + pCVar5->x;
                  local_bc = local_c8 / 2.0f;
                  local_c4 = g_SamplePointArray[0].y + pCVar5->y;
                  local_c0 = g_SamplePointArray[0].z + pCVar5->z;
                  local_b8 = local_c4 * 0.5f;
                  local_b4 = local_c0 * 0.5f;
                  local_54 = local_54 + 1;
                  pfVar12 = (float *)((int)&g_SamplePointArray[0].x + iVar7);
                  if (pfVar12 != &local_bc) {
                    *pfVar12 = local_bc;
                    *(float *)((int)&g_SamplePointArray[0].y + iVar7) = local_b8;
                    *(float *)((int)&g_SamplePointArray[0].z + iVar7) = local_b4;
                  }
                  iVar10 = iVar10 + 1;
                  pCVar5 = pCVar5 + 1;
                  iVar7 = iVar7 + 0xc;
                } while (iVar10 < g_SamplePointCount);
              }
              g_SamplePointCount = local_54;
            }
            in_stack_fffffed8 = (double)((0.75f * 1e+10) / (float)g_SamplePointCount);
            shape_meshlod_cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50
                      (this_ptr->next_lod,in_stack_fffffed8);
            if (0 < g_SamplePointCount) {
              iVar10 = 0;
              do {
                pdVar1 = (double *)((int)g_SampleDistances + iVar10);
                iVar10 = iVar10 + 8;
                local_110 = *pdVar1 * in_stack_fffffed8 + local_110;
              } while (iVar10 < g_SamplePointCount * 8);
            }
            if (local_58->collapse_cost < local_110) goto LAB_00518f71;
          }
          iVar10 = 0;
          pCVar5 = local_7c;
          if (0 < iVar3) {
            do {
              local_18 = iVar10 * 0x8c;
              shape_meshlod_cpp_CLodMesh_validateFace_FUN_00519830
                        (this_ptr,g_TempNeighborFaces + iVar10);
              iVar7 = *(int *)((int)g_TempNeighborFaces[0].edge_dot_products + local_18 + 0xc);
              pCVar11 = this_ptr->tri_data;
              if (pCVar5->z * pCVar11[iVar7].normal.z +
                  pCVar5->x * pCVar11[iVar7].normal.x + pCVar5->y * pCVar11[iVar7].normal.y < 0.0)
              break;
              iVar10 = iVar10 + 1;
              pCVar5 = (CVector3f *)((int)(pCVar5 + 0xb) + 8);
            } while (iVar10 < iVar3);
          }
          if (iVar3 <= iVar10) {
            if ((0 < this_ptr->sample_point_count) && (0.75f < 1.0)) {
              local_100 = 0;
              local_40 = 0;
              fVar2 = 0.0;
              if (0 < this_ptr->sample_point_count) {
                local_4c = 0;
                do {
                  local_34 = (CLodMesh *)
                             ((int)&(this_ptr->sample_points_ptr->position).x + local_4c);
                  if (g_LodTempFaceStamp ==
                      this_ptr->tri_data[(int)local_34->tri_data].affected_by_edge_stamp) {
                    local_118 = 0x39a08ce9;
                    uStack_114 = 0x46293e59;
                    iVar10 = 0;
                    if (0 < iVar3) {
                      pCVar11 = g_TempNeighborFaces;
                      do {
                        local_8c = shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
                                             (local_34,(SLodSamplePoint *)pCVar11,
                                              SUB84(in_stack_fffffed8,0));
                        if (local_8c < (double)CONCAT44(uStack_114,local_118)) {
                          local_108 = SUB84(local_8c,0);
                          local_118 = local_108;
                          uStack_104 = (uint)((ulonglong)local_8c >> 0x20);
                          uStack_114 = uStack_104;
                        }
                        iVar10 = iVar10 + 1;
                        pCVar11 = pCVar11 + 1;
                      } while (iVar10 < iVar3);
                    }
                    local_100 = local_100 + 1;
                    fVar2 = (float)local_34->active_attribute_count *
                            (float)(double)CONCAT44(uStack_114,local_118) + fVar2;
                  }
                  local_4c = local_4c + 0x1c;
                  local_40 = local_40 + 1;
                } while (local_40 < this_ptr->sample_point_count);
              }
              if (0 < local_100) {
                local_110 = (double)(((1.0 - 0.75f) * fVar2 * 1e+10) /
                                     (float)local_100 + (float)local_110);
              }
            }
            if (local_110 < local_58->collapse_cost) {
              *(uint *)&local_58->collapse_cost = (uint)local_110;
              *(uint *)((int)&local_58->collapse_cost + 4) = local_110._4_4_;
              local_58->collapse_error = local_68;
            }
          }
        }
LAB_00518f71:
        local_64 = local_64 + 1;
        if (4 < local_64) {
          pCVar6 = this_ptr->vertex_data + local_58->vertex_idx_1;
          (pCVar6->position).x = local_a4;
          (pCVar6->position).y = local_a0;
          (pCVar6->position).z = local_9c;
          return;
        }
      } while( true );
    }
  }
  return;
}
