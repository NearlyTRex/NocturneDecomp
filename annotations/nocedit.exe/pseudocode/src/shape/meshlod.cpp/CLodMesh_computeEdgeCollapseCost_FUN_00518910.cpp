// Name: shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910
// Address: 00518910
// Address Range: [[00518910, 00519470]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910(CLodMesh *this_ptr,int edge_index)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910(CLodMesh *this_ptr,int edge_index)

{
  float fVar1;
  float fVar3;
  float fVar4;
  CLodEdge *pCVar7;
  int iVar3;
  int iVar8;
  int iVar9;
  int iVar4;
  CVector3f *pCVar5;
  int iVar11;
  CLodEdge *pCVar12;
  int iVar14;
  CLodVert *pCVar6;
  CLodVert *pCVar15;
  int iVar7;
  int iVar16;
  SLodSamplePoint *sample_point;
  CLodVert *pCVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar17;
  int iVar10;
  CLodFace *pCVar11;
  float *pfVar12;
  int iVar13;
  CLodFace *pCVar18;
  int iVar19;
  double dVar20;
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
  SLodSamplePoint *local_34;
  CLodEdge *local_30;
  int local_2c;
  int local_28;
  CLodEdge *local_24;
  int local_20;
  int local_1c;
  int local_18;
  double max_search_radius;
  float fVar2;
  double *pdVar1;
  
  pCVar7 = this_ptr->edges_ptr + edge_index;
  pCVar7->collapse_cost = 9.9999999999999997e+34;
  pCVar7->needs_recalc_flag = 0;
  iVar3 = shape_meshlod_cpp_CLodMesh_validateEdgeCollapse_FUN_00518490
                    (this_ptr,pCVar7->vertex_idx_1,pCVar7->vertex_idx_2);
  if (iVar3 == edge_index) {
    iVar8 = shape_meshlod_cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480
                      (this_ptr,edge_index,pCVar7->vertex_idx_1);
    iVar9 = shape_meshlod_cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480
                      (this_ptr,edge_index,pCVar7->vertex_idx_2);
    if ((iVar8 == 0) || (iVar9 == 0)) {
      local_3c = 0;
      iVar19 = 0;
      if ((g_TempFacesInitGuard & 1) == 0) {
        g_TempFacesInitGuard = g_TempFacesInitGuard | 1;
        __arrinit(g_TempNeighborFaces,200,&g_LodFaceTypeInfo);
        _atexit(&g_TempNeighborFacesDestructorNode);
      }
      g_LodGenerationStamp = g_LodGenerationStamp + 1;
      g_LodTempFaceStamp = g_LodTempFaceStamp + 1;
      local_6c = 0;
      do {
        local_28 = pCVar7->vertex_idx_2;
        local_1c = pCVar7->vertex_idx_1;
        if (local_6c == 1) {
          local_28 = pCVar7->vertex_idx_1;
          local_1c = pCVar7->vertex_idx_2;
        }
        local_50 = 0;
        local_38 = local_3c << 2;
        local_48 = 0;
        while( true ) {
          pCVar15 = this_ptr->vertex_data;
          if (pCVar15[local_1c].adjacent_edge_count <= local_50) break;
          iVar16 = *(int *)((int)pCVar15[local_1c].adjacent_edge_indices + local_48);
          pCVar12 = this_ptr->edges_ptr + iVar16;
          if (iVar16 != edge_index) {
            if (199 < local_3c) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Too many neighboring edges!");
              g_CurrentFilename = "..\\shape\\meshlod.cpp";
              g_CurrentLineNumber = 0xbca;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Too many neighboring edges!");
            }
            if (local_1c == pCVar12->vertex_idx_1) {
              iVar16 = pCVar12->vertex_idx_2;
            }
            else {
              iVar16 = pCVar12->vertex_idx_1;
            }
            *(int *)((int)g_MaxNeighborVerts + local_38) = iVar16;
            local_38 = local_38 + 4;
            local_3c = local_3c + 1;
            local_20 = 0;
            if (0 < pCVar12->adjacent_tri_count) {
              iVar16 = iVar19 * 0x8c;
              local_24 = pCVar12;
              do {
                iVar11 = g_LodGenerationStamp;
                iVar14 = local_24->adjacent_tri_indices[0];
                pCVar18 = this_ptr->tri_data;
                iVar13 = iVar16;
                if (g_LodGenerationStamp != pCVar18[iVar14].visited_stamp) {
                  pCVar18[iVar14].affected_by_edge_stamp = g_LodTempFaceStamp;
                  pCVar18[iVar14].visited_stamp = iVar11;
                  if (((pCVar18[iVar14].vertex_idx_0 != local_28) &&
                      (local_28 != pCVar18[iVar14].vertex_idx_1)) &&
                     (local_28 != pCVar18[iVar14].vertex_idx_2)) {
                    if (199 < iVar19) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Too many neighboring faces!");
                      g_CurrentFilename = "..\\shape\\meshlod.cpp";
                      g_CurrentLineNumber = 0xbf4;
                      core_main_c_displayErrorAndQuit_FUN_00506f10
                                ("Too many neighboring faces!");
                    }
                    *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -2) + iVar16 + 4) = local_1c;
                    if (local_1c == pCVar18[iVar14].vertex_idx_0) {
                      *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar16) =
                           pCVar18[iVar14].vertex_idx_1;
                      iVar11 = pCVar18[iVar14].vertex_idx_2;
LAB_0051919d:
                      *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar16 + 4) = iVar11;
                    }
                    else {
                      if (local_1c == pCVar18[iVar14].vertex_idx_1) {
                        *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar16) =
                             pCVar18[iVar14].vertex_idx_2;
                        iVar11 = pCVar18[iVar14].vertex_idx_0;
                        goto LAB_0051919d;
                      }
                      if (local_1c == pCVar18[iVar14].vertex_idx_2) {
                        *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar16) =
                             pCVar18[iVar14].vertex_idx_0;
                        iVar11 = pCVar18[iVar14].vertex_idx_1;
                        goto LAB_0051919d;
                      }
                      g_CurrentFilename = "..\\shape\\meshlod.cpp";
                      g_CurrentLineNumber = 0xc06;
                      core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
                    }
                    iVar13 = iVar16 + 0x8c;
                    iVar19 = iVar19 + 1;
                    *(int *)((int)g_TempNeighborFaces[0].edge_dot_products + iVar16 + 0xc) = iVar14;
                  }
                }
                local_24 = (CLodEdge *)&local_24->vertex_idx_2;
                local_20 = local_20 + 1;
                iVar16 = iVar13;
              } while (local_20 < pCVar12->adjacent_tri_count);
            }
          }
          local_50 = local_50 + 1;
          local_48 = local_48 + 4;
        }
        local_6c = local_6c + 1;
      } while (local_6c < 2);
      pCVar6 = pCVar15 + pCVar7->vertex_idx_1;
      local_a4 = (pCVar6->position).x;
      local_a0 = (pCVar6->position).y;
      local_9c = (pCVar6->position).z;
      local_7c = &g_TempNeighborFaces[0].normal;
      local_64 = 0;
      do {
        if ((g_LodReplayMode != 0) ||
           (((local_64 == 0 || (iVar8 == 0)) && ((local_64 == 4 || (iVar9 == 0)))))) {
          iVar16 = pCVar7->vertex_idx_2;
          fVar3 = (float)local_64 * 0.25f;
          fVar1 = 1.0 - fVar3;
          pCVar15 = this_ptr->vertex_data;
          local_b0 = pCVar15[iVar16].position.x * fVar3;
          local_ac = pCVar15[iVar16].position.y * fVar3;
          local_a8 = pCVar15[iVar16].position.z * fVar3;
          pCVar15 = this_ptr->vertex_data + pCVar7->vertex_idx_1;
          (pCVar15->position).x = local_a4 * fVar1 + local_b0;
          fVar4 = 0.75f;
          (pCVar15->position).y = local_a0 * fVar1 + local_ac;
          (pCVar15->position).z = local_9c * fVar1 + local_a8;
          local_110 = 0.0;
          if (0.0 < fVar4) {
            pCVar15 = this_ptr->vertex_data + pCVar7->vertex_idx_1;
            g_SamplePointCount = 1;
            if (pCVar15 != (CLodVert *)g_SamplePointArray) {
              g_SamplePointArray[0].x = (pCVar15->position).x;
              g_SamplePointArray[0].z = (pCVar15->position).z;
              g_SamplePointArray[0].y = (pCVar15->position).y;
            }
            if (0 < local_3c) {
              iVar10 = 0;
              do {
                iVar16 = g_SamplePointCount;
                pCVar8 = this_ptr->vertex_data + *(int *)((int)g_MaxNeighborVerts + iVar10);
                pCVar15 = this_ptr->vertex_data + pCVar7->vertex_idx_1;
                local_d4.x = ((pCVar15->position).x + (pCVar8->position).x) / 2.0f;
                local_d4.y = ((pCVar15->position).y + (pCVar8->position).y) * 0.5f;
                local_d4.z = ((pCVar15->position).z + (pCVar8->position).z) * 0.5f;
                iVar4 = g_SamplePointCount + 1;
                pCVar17 = g_SamplePointArray + g_SamplePointCount;
                g_SamplePointCount = iVar4;
                if (pCVar17 != &local_d4) {
                  pCVar17->x = local_d4.x;
                  g_SamplePointArray[iVar16].y = local_d4.y;
                  g_SamplePointArray[iVar16].z = local_d4.z;
                }
                iVar10 = iVar10 + 4;
              } while (iVar10 < local_3c << 2);
            }
            local_44 = 0;
            if (0 < iVar19) {
              pCVar11 = g_TempNeighborFaces;
              do {
                pCVar5 = shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870
                                   (this_ptr,&local_98,pCVar11);
                iVar16 = g_SamplePointCount;
                iVar7 = g_SamplePointCount + 1;
                pCVar9 = g_SamplePointArray + g_SamplePointCount;
                g_SamplePointCount = iVar7;
                if (pCVar9 != pCVar5) {
                  pCVar9->x = pCVar5->x;
                  g_SamplePointArray[iVar16].y = pCVar5->y;
                  g_SamplePointArray[iVar16].z = pCVar5->z;
                }
                local_44 = local_44 + 1;
                pCVar11 = pCVar11 + 1;
              } while (local_44 < iVar19);
            }
            if (g_EnableMidpointSampling != 0) {
              iVar16 = 1;
              local_54 = g_SamplePointCount;
              if (1 < g_SamplePointCount) {
                iVar14 = g_SamplePointCount * 0xc;
                pCVar17 = g_SamplePointArray;
                do {
                  pCVar17 = pCVar17 + 1;
                  local_bc = (g_SamplePointArray[0].x + pCVar17->x) / 2.0f;
                  local_b8 = (g_SamplePointArray[0].y + pCVar17->y) * 0.5f;
                  local_b4 = (g_SamplePointArray[0].z + pCVar17->z) * 0.5f;
                  local_54 = local_54 + 1;
                  pfVar12 = (float *)((int)&g_SamplePointArray[0].x + iVar14);
                  if (pfVar12 != &local_bc) {
                    *pfVar12 = local_bc;
                    *(float *)((int)&g_SamplePointArray[0].y + iVar14) = local_b8;
                    *(float *)((int)&g_SamplePointArray[0].z + iVar14) = local_b4;
                  }
                  iVar16 = iVar16 + 1;
                  iVar14 = iVar14 + 0xc;
                } while (iVar16 < g_SamplePointCount);
              }
              g_SamplePointCount = local_54;
            }
            fVar1 = 0.75f * 1e+10;
            fVar4 = (float)g_SamplePointCount;
            shape_meshlod_cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50(this_ptr->next_lod);
            if (0 < g_SamplePointCount) {
              iVar16 = 0;
              do {
                pdVar1 = (double *)((int)g_SampleDistances + iVar16);
                iVar16 = iVar16 + 8;
                local_110 = *pdVar1 * (double)(fVar1 / fVar4) + local_110;
              } while (iVar16 < g_SamplePointCount * 8);
            }
            if (pCVar7->collapse_cost < local_110) goto LAB_00518f71;
          }
          iVar16 = 0;
          pCVar17 = local_7c;
          if (0 < iVar19) {
            do {
              shape_meshlod_cpp_CLodMesh_validateFace_FUN_00519830
                        (this_ptr,g_TempNeighborFaces + iVar16);
              iVar14 = g_TempNeighborFaces[iVar16].visited_stamp;
              pCVar18 = this_ptr->tri_data;
              if (pCVar17->z * pCVar18[iVar14].normal.z +
                  pCVar17->x * pCVar18[iVar14].normal.x + pCVar17->y * pCVar18[iVar14].normal.y <
                  0.0) break;
              iVar16 = iVar16 + 1;
              pCVar17 = (CVector3f *)&pCVar17[0xb].z;
            } while (iVar16 < iVar19);
          }
          if (iVar19 <= iVar16) {
            if ((0 < this_ptr->sample_point_count) && (0.75f < 1.0)) {
              local_100 = 0;
              local_40 = 0;
              fVar2 = 0.0;
              if (0 < this_ptr->sample_point_count) {
                local_4c = 0;
                do {
                  sample_point = (SLodSamplePoint *)
                                 ((int)&(this_ptr->sample_points_ptr->position).x + local_4c);
                  if (g_LodTempFaceStamp ==
                      this_ptr->tri_data[sample_point->closest_triangle_idx].affected_by_edge_stamp)
                  {
                    local_118 = 0x39a08ce9;
                    uStack_114 = 0x46293e59;
                    iVar16 = 0;
                    if (0 < iVar19) {
                      pCVar18 = g_TempNeighborFaces;
                      do {
                        dVar20 = shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
                                           (this_ptr,sample_point,pCVar18);
                        if (dVar20 < __BITCAST_DOUBLE(CONCAT44(uStack_114,local_118))) {
                          local_108 = SUB84(__BITCAST_UINT64(dVar20),0);
                          local_118 = local_108;
                          uStack_104 = (uint)((ulonglong)dVar20 >> 0x20);
                          uStack_114 = uStack_104;
                        }
                        iVar16 = iVar16 + 1;
                        pCVar18 = pCVar18 + 1;
                      } while (iVar16 < iVar19);
                    }
                    local_100 = local_100 + 1;
                    fVar2 = sample_point->weight * (float)__BITCAST_DOUBLE(CONCAT44(uStack_114,local_118)) +
                            fVar2;
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
            if (local_110 < pCVar7->collapse_cost) {
              *(uint *)&pCVar7->collapse_cost = (uint)local_110;
              *(uint *)((int)&pCVar7->collapse_cost + 4) = local_110._4_4_;
              pCVar7->collapse_error = fVar3;
            }
          }
        }
LAB_00518f71:
        local_64 = local_64 + 1;
        if (4 < local_64) {
          pCVar15 = this_ptr->vertex_data + pCVar7->vertex_idx_1;
          (pCVar15->position).x = local_a4;
          (pCVar15->position).y = local_a0;
          (pCVar15->position).z = local_9c;
          return;
        }
      } while( true );
    }
  }
  return;
}
