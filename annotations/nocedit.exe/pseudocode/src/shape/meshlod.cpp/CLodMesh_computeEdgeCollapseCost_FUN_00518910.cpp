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
  double in_stack_fffffedc;
  uint uStack_114;
  uint local_110;
  ulonglong uStack_10c;
  uint uStack_104;
  uint local_100;
  int local_fc;
  CVector3f local_d0;
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
  float local_98;
  CVector3f CStack_94;
  double dStack_88;
  int local_80;
  int local_7c;
  CVector3f *local_78;
  CVector3f *local_74;
  int local_70;
  float local_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  CLodEdge *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  CLodMesh *local_30;
  CLodEdge *local_2c;
  int local_28;
  int local_24;
  CLodEdge *local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  local_54 = this_ptr->edges_ptr + edge_index;
  local_54->collapse_cost = 9.9999999999999997e+34;
  local_54->needs_recalc_flag = 0;
  iVar3 = shape_meshlod_cpp_CLodMesh_validateEdgeCollapse_FUN_00518490
                    (this_ptr,local_54->vertex_idx_1,local_54->vertex_idx_2,
                     SUB84 /* extract 2-byte value */(in_stack_fffffedc,0));
  if (iVar3 == edge_index) {
    iVar3 = shape_meshlod_cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480
                      (this_ptr,edge_index,local_54->vertex_idx_1);
    local_80 = iVar3;
    local_7c = shape_meshlod_cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480
                         (this_ptr,edge_index,local_54->vertex_idx_2);
    if ((iVar3 == 0) || (local_7c == 0)) {
      local_38 = 0;
      iVar3 = 0;
      if ((g_TempFacesInitGuard & 1) == 0) {
        g_TempFacesInitGuard = g_TempFacesInitGuard | 1;
        crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                  (g_TempNeighborFaces,200,&g_LodFaceTypeInfo);
        crt_stdlib_c_atexit_FUN_005ff060(&g_TempNeighborFacesDestructorNode);
      }
      g_LodGenerationStamp = g_LodGenerationStamp + 1;
      g_LodTempFaceStamp = g_LodTempFaceStamp + 1;
      local_68 = 0;
      do {
        local_24 = local_54->vertex_idx_2;
        local_18 = local_54->vertex_idx_1;
        if (local_68 == 1) {
          local_24 = local_54->vertex_idx_1;
          local_18 = local_54->vertex_idx_2;
        }
        local_4c = 0;
        local_5c = local_18 * 0x4c4;
        local_34 = local_38 << 2;
        local_44 = 0;
        while( true ) {
          pCVar6 = this_ptr->vertex_data;
          if (*(int *)((int)pCVar6->adjacent_edge_indices + local_5c + -4) <= local_4c) break;
          iVar10 = *(int *)((int)pCVar6->adjacent_edge_indices + local_44 + local_5c);
          local_2c = this_ptr->edges_ptr + iVar10;
          if (iVar10 != edge_index) {
            if (199 < local_38) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Too many neighboring edges!");
              g_CurrentFilename = "..\\shape\\meshlod.cpp";
              g_CurrentLineNumber = 0xbca;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Too many neighboring edges!");
            }
            if (local_18 == local_2c->vertex_idx_1) {
              iVar10 = local_2c->vertex_idx_2;
            }
            else {
              iVar10 = local_2c->vertex_idx_1;
            }
            *(int *)((int)g_MaxNeighborVerts + local_34) = iVar10;
            local_34 = local_34 + 4;
            local_38 = local_38 + 1;
            local_1c = 0;
            if (0 < local_2c->adjacent_tri_count) {
              local_20 = local_2c;
              iVar10 = iVar3 * 0x8c;
              do {
                iVar4 = g_LodGenerationStamp;
                iVar7 = local_20->adjacent_tri_indices[0];
                pCVar11 = this_ptr->tri_data;
                iVar13 = iVar10;
                local_28 = iVar7;
                if (g_LodGenerationStamp != pCVar11[iVar7].visited_stamp) {
                  pCVar11[iVar7].affected_by_edge_stamp = g_LodTempFaceStamp;
                  pCVar11[iVar7].visited_stamp = iVar4;
                  if (((pCVar11[iVar7].vertex_idx_0 != local_24) &&
                      (local_24 != pCVar11[iVar7].vertex_idx_1)) &&
                     (local_24 != pCVar11[iVar7].vertex_idx_2)) {
                    if (199 < iVar3) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Too many neighboring faces!");
                      g_CurrentFilename = "..\\shape\\meshlod.cpp";
                      g_CurrentLineNumber = 0xbf4;
                      core_main_c_displayErrorAndQuit_FUN_00506f10
                                ("Too many neighboring faces!");
                    }
                    *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -2) + iVar10 + 4) = local_18;
                    if (local_18 == pCVar11[iVar7].vertex_idx_0) {
                      *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar10) =
                           pCVar11[iVar7].vertex_idx_1;
                      iVar7 = pCVar11[iVar7].vertex_idx_2;
LAB_0051919d:
                      *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar10 + 4) = iVar7;
                    }
                    else {
                      if (local_18 == pCVar11[iVar7].vertex_idx_1) {
                        *(int *)((int)(g_TempNeighborFaces[0].uv_coords + -1) + iVar10) =
                             pCVar11[iVar7].vertex_idx_2;
                        iVar7 = pCVar11[iVar7].vertex_idx_0;
                        goto LAB_0051919d;
                      }
                      if (local_18 == pCVar11[iVar7].vertex_idx_2) {
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
                         local_28;
                  }
                }
                local_20 = (CLodEdge *)&local_20->vertex_idx_2;
                local_1c = local_1c + 1;
                iVar10 = iVar13;
              } while (local_1c < local_2c->adjacent_tri_count);
            }
          }
          local_4c = local_4c + 1;
          local_44 = local_44 + 4;
        }
        local_68 = local_68 + 1;
      } while (local_68 < 2);
      pCVar6 = pCVar6 + local_54->vertex_idx_1;
      local_a0 = (pCVar6->position).x;
      local_9c = (pCVar6->position).y;
      local_98 = (pCVar6->position).z;
      local_70 = local_38 << 2;
      local_78 = &g_TempNeighborFaces[0].normal;
      local_60 = 0;
      local_74 = g_SamplePointArray + 1;
      do {
        if ((g_LodReplayMode != 0) ||
           (((local_60 == 0 || (local_80 == 0)) && ((local_60 == 4 || (local_7c == 0)))))) {
          iStack_14 = local_60;
          iVar10 = local_54->vertex_idx_2;
          local_64 = (float)local_60 * 0.25f;
          local_6c = 1.0 - local_64;
          pCVar6 = this_ptr->vertex_data;
          local_ac = pCVar6[iVar10].position.x * local_64;
          local_a8 = pCVar6[iVar10].position.y * local_64;
          local_a4 = pCVar6[iVar10].position.z * local_64;
          pCVar6 = this_ptr->vertex_data + local_54->vertex_idx_1;
          (pCVar6->position).x = local_a0 * local_6c + local_ac;
          fVar2 = 0.75f;
          (pCVar6->position).y = local_9c * local_6c + local_a8;
          (pCVar6->position).z = local_98 * local_6c + local_a4;
          uStack_10c = 0.0;
          if (0.0 < fVar2) {
            pCVar6 = this_ptr->vertex_data + local_54->vertex_idx_1;
            g_SamplePointCount = 1;
            if (pCVar6 != (CLodVert *)g_SamplePointArray) {
              g_SamplePointArray[0].x = (pCVar6->position).x;
              g_SamplePointArray[0].z = (pCVar6->position).z;
              g_SamplePointArray[0].y = (pCVar6->position).y;
            }
            if (0 < local_38) {
              iVar10 = 0;
              local_58 = local_70;
              do {
                iVar7 = g_SamplePointCount;
                pCVar8 = this_ptr->vertex_data + *(int *)((int)g_MaxNeighborVerts + iVar10);
                pCVar6 = this_ptr->vertex_data + local_54->vertex_idx_1;
                local_d0.x = ((pCVar6->position).x + (pCVar8->position).x) / 2f;
                local_d0.y = ((pCVar6->position).y + (pCVar8->position).y) * 0.5f;
                local_d0.z = ((pCVar6->position).z + (pCVar8->position).z) * 0.5f;
                iVar4 = g_SamplePointCount + 1;
                pCVar5 = g_SamplePointArray + g_SamplePointCount;
                g_SamplePointCount = iVar4;
                if (pCVar5 != &local_d0) {
                  pCVar5->x = local_d0.x;
                  g_SamplePointArray[iVar7].y = local_d0.y;
                  g_SamplePointArray[iVar7].z = local_d0.z;
                }
                iVar10 = iVar10 + 4;
              } while (iVar10 < local_70);
            }
            local_40 = 0;
            if (0 < iVar3) {
              pCVar11 = g_TempNeighborFaces;
              do {
                pCVar5 = shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870
                                   (this_ptr,&CStack_94,pCVar11);
                iVar10 = g_SamplePointCount;
                iVar7 = g_SamplePointCount + 1;
                pCVar9 = g_SamplePointArray + g_SamplePointCount;
                g_SamplePointCount = iVar7;
                if (pCVar9 != pCVar5) {
                  pCVar9->x = pCVar5->x;
                  g_SamplePointArray[iVar10].y = pCVar5->y;
                  g_SamplePointArray[iVar10].z = pCVar5->z;
                }
                local_40 = local_40 + 1;
                pCVar11 = pCVar11 + 1;
              } while (local_40 < iVar3);
            }
            if (g_EnableMidpointSampling != 0) {
              iVar10 = 1;
              local_50 = g_SamplePointCount;
              if (1 < g_SamplePointCount) {
                iVar7 = g_SamplePointCount * 0xc;
                pCVar5 = local_74;
                do {
                  local_c4 = g_SamplePointArray[0].x + pCVar5->x;
                  local_b8 = local_c4 / 2f;
                  local_c0 = g_SamplePointArray[0].y + pCVar5->y;
                  local_bc = g_SamplePointArray[0].z + pCVar5->z;
                  local_b4 = local_c0 * 0.5f;
                  local_b0 = local_bc * 0.5f;
                  local_50 = local_50 + 1;
                  pfVar12 = (float *)((int)&g_SamplePointArray[0].x + iVar7);
                  if (pfVar12 != &local_b8) {
                    *pfVar12 = local_b8;
                    *(float *)((int)&g_SamplePointArray[0].y + iVar7) = local_b4;
                    *(float *)((int)&g_SamplePointArray[0].z + iVar7) = local_b0;
                  }
                  iVar10 = iVar10 + 1;
                  pCVar5 = pCVar5 + 1;
                  iVar7 = iVar7 + 0xc;
                } while (iVar10 < g_SamplePointCount);
              }
              g_SamplePointCount = local_50;
            }
            in_stack_fffffedc = (double)((0.75f * 1e+10) / (float)g_SamplePointCount);
            shape_meshlod_cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50
                      (this_ptr->next_lod,in_stack_fffffedc);
            if (0 < g_SamplePointCount) {
              iVar10 = 0;
              do {
                pdVar1 = (double *)((int)g_SampleDistances + iVar10);
                iVar10 = iVar10 + 8;
                uStack_10c = *pdVar1 * in_stack_fffffedc + uStack_10c;
              } while (iVar10 < g_SamplePointCount * 8);
            }
            if (local_54->collapse_cost < uStack_10c) goto LAB_00518f71;
          }
          iVar10 = 0;
          pCVar5 = local_78;
          if (0 < iVar3) {
            do {
              iStack_14 = iVar10 * 0x8c;
              shape_meshlod_cpp_CLodMesh_validateFace_FUN_00519830
                        (this_ptr,g_TempNeighborFaces + iVar10);
              iVar7 = *(int *)((int)g_TempNeighborFaces[0].edge_dot_products + iStack_14 + 0xc);
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
              local_fc = 0;
              local_3c = 0;
              fVar2 = 0.0;
              if (0 < this_ptr->sample_point_count) {
                local_48 = 0;
                do {
                  local_30 = (CLodMesh *)
                             ((int)&(this_ptr->sample_points_ptr->position).x + local_48);
                  if (g_LodTempFaceStamp ==
                      this_ptr->tri_data[(int)local_30->tri_data].affected_by_edge_stamp) {
                    uStack_114 = 0x39a08ce9;
                    local_110 = 0x46293e59;
                    iVar10 = 0;
                    if (0 < iVar3) {
                      pCVar11 = g_TempNeighborFaces;
                      do {
                        dStack_88 = shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
                                              (local_30,(SLodSamplePoint *)pCVar11,
                                               SUB84 /* extract 2-byte value */(in_stack_fffffedc,0));
                        if (dStack_88 < (double)CONCAT44 /* combine 2-byte values */(local_110,uStack_114)) {
                          uStack_104 = SUB84 /* extract 2-byte value */(dStack_88,0);
                          uStack_114 = uStack_104;
                          local_100 = (uint)((ulonglong)dStack_88 >> 0x20);
                          local_110 = local_100;
                        }
                        iVar10 = iVar10 + 1;
                        pCVar11 = pCVar11 + 1;
                      } while (iVar10 < iVar3);
                    }
                    local_fc = local_fc + 1;
                    fVar2 = (float)local_30->active_attribute_count *
                            (float)(double)CONCAT44 /* combine 2-byte values */(local_110,uStack_114) + fVar2;
                  }
                  local_48 = local_48 + 0x1c;
                  local_3c = local_3c + 1;
                } while (local_3c < this_ptr->sample_point_count);
              }
              if (0 < local_fc) {
                uStack_10c = (double)(((1.0 - 0.75f) * fVar2 * 1e+10) /
                                      (float)local_fc + (float)uStack_10c);
              }
            }
            if (uStack_10c < local_54->collapse_cost) {
              *(uint *)&local_54->collapse_cost = (uint)uStack_10c;
              *(uint *)((int)&local_54->collapse_cost + 4) = uStack_10c._4_4_;
              local_54->collapse_error = local_64;
            }
          }
        }
LAB_00518f71:
        local_60 = local_60 + 1;
        if (4 < local_60) {
          pCVar6 = this_ptr->vertex_data + local_54->vertex_idx_1;
          (pCVar6->position).x = local_a0;
          (pCVar6->position).y = local_9c;
          (pCVar6->position).z = local_98;
          return;
        }
      } while( true );
    }
  }
  return;
}
