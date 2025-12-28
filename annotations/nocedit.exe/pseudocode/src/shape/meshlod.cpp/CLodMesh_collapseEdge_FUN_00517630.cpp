// Name: shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630
// Address: 00517630
// Address Range: [[00517630, 005182f0]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630(CLodMesh * this_ptr, int vertex_idx_1, int vertex_idx_2, float collapse_weight)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630
          (CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2,float collapse_weight)

{
  int iVar1;
  float fVar2;
  byte *puVar3;
  CLodFace *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CLodFace *pCVar8;
  int extraout_EAX;
  int iVar9;
  CLodVert *pCVar10;
  BADSPACEBASE *in_ESP;
  CLodEdge *pCVar11;
  int *piVar12;
  CLodEdge *pCVar13;
  float in_stack_fffffb10;
  float local_4ec;
  int aiStack_4e8 [2];
  float afStack_4e0 [198];
  float afStack_1c8 [50];
  CVector3f local_100;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  CVector3f local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  CLodEdge *local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  CLodFace *local_ac;
  CLodEdge *local_a8;
  int local_a4;
  int local_a0;
  float local_9c;
  CLodEdge *local_98;
  int local_94;
  int local_90;
  float local_8c;
  float local_88;
  int local_84;
  CLodFace *local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_64;
  CLodEdge *local_60;
  int local_5c;
  int local_58;
  CLodFace *local_50;
  CLodFace *local_4c;
  int local_48;
  int local_44;
  CLodEdge *local_40;
  int local_3c;
  int local_38;
  CLodEdge *local_34;
  int local_30;
  CLodEdge *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_c0 = (CLodEdge *)0x0;
  local_c4 = (float)shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                              (this_ptr,vertex_idx_1,vertex_idx_2,0);
  if ((int)local_c4 < 0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x824;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Tried to collapse edge that doesn't exist!");
  }
  fVar2 = local_c4;
  pCVar10 = this_ptr->vertex_data;
  local_100.y = pCVar10[vertex_idx_2].position.x * collapse_weight;
  local_100.z = pCVar10[vertex_idx_2].position.y * collapse_weight;
  local_f4 = pCVar10[vertex_idx_2].position.z * collapse_weight;
  local_e8 = 1.0 - collapse_weight;
  pCVar10 = this_ptr->vertex_data;
  local_f0 = pCVar10[vertex_idx_1].position.x * local_e8;
  local_ec = pCVar10[vertex_idx_1].position.y * local_e8;
  local_e8 = pCVar10[vertex_idx_1].position.z * local_e8;
  local_dc.y = local_f0 + local_100.y;
  local_dc.z = local_ec + local_100.z;
  local_d0 = local_e8 + local_f4;
  local_c0 = this_ptr->edges_ptr + (int)local_c4;
  shape_meshlod_cpp_CLodVert_removeEdge_FUN_00515e00
            (this_ptr->vertex_data + local_c0->vertex_idx_1,(int)local_c4);
  shape_meshlod_cpp_CLodVert_removeEdge_FUN_00515e00
            (this_ptr->vertex_data + *(int *)(local_bc + 4),(int)fVar2);
  local_b4 = 0;
  local_c4 = 0.0;
  *(uint *)(local_b8 + 0x14) = 1;
  if (0 < *(int *)(local_b8 + 0x24)) {
    local_48 = local_b8;
    do {
      local_b0 = *(int *)(local_48 + 0x28);
      local_ac = this_ptr->tri_data + *(int *)(local_48 + 0x28);
      iVar9 = 0;
      if (0 < local_b4) {
        iVar5 = 0;
        do {
          if (*(int *)((int)aiStack_4e8 + iVar5) == local_ac->attribute_indices[0]) break;
          iVar5 = iVar5 + 0x10;
          iVar9 = iVar9 + 1;
        } while (iVar5 < local_b4 * 0x10);
      }
      if (local_b4 <= iVar9) {
        iVar5 = local_ac->attribute_indices[0];
        aiStack_4e8[iVar9 * 4 + 1] = 0;
        afStack_4e0[iVar9 * 4] = 0.0;
        afStack_4e0[iVar9 * 4 + 1] = 0.0;
        aiStack_4e8[iVar9 * 4] = iVar5;
        local_b4 = local_b4 + 1;
      }
      aiStack_4e8[iVar9 * 4 + 1] = aiStack_4e8[iVar9 * 4 + 1] + 1;
      local_50 = local_ac;
      local_4c = (CLodFace *)&local_ac->submesh_id;
      pCVar8 = local_ac;
      do {
        pCVar4 = local_50;
        fVar2 = local_4ec;
        if ((pCVar8->vertex_idx_0 == vertex_idx_1) ||
           (fVar2 = in_stack_fffffb10, pCVar8->vertex_idx_0 == vertex_idx_2)) {
          afStack_4e0[iVar9 * 4] = local_50->uv_coords[0][0] * fVar2 + afStack_4e0[iVar9 * 4];
          afStack_4e0[iVar9 * 4 + 1] = fVar2 * pCVar4->uv_coords[0][1] + afStack_4e0[iVar9 * 4 + 1];
        }
        if (pCVar8->edge_idx_0 != local_bc) {
          shape_meshlod_cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0
                    (this_ptr,local_b0,pCVar8->edge_idx_0);
        }
        pCVar8 = (CLodFace *)(pCVar8->attribute_indices + 1);
        local_50 = (CLodFace *)(local_50->attribute_indices + 2);
      } while (pCVar8 != local_4c);
      local_ac->processed_flag = 1;
      local_c4 = (float)((int)local_c4 + 1);
      local_48 = local_48 + 4;
    } while ((int)local_c4 < *(int *)(local_b8 + 0x24));
  }
  *(uint *)(local_b8 + 0x24) = 0;
  if (0 < local_b4) {
    iVar5 = local_b4 * 0x10;
    iVar9 = 0;
    do {
      iVar7 = *(int *)((int)aiStack_4e8 + iVar9 + 4);
      fVar2 = *(float *)((int)afStack_4e0 + iVar9);
      iVar1 = *(int *)((int)aiStack_4e8 + iVar9 + 4);
      iVar6 = iVar9 + 0x10;
      *(uint *)((int)aiStack_4e8 + iVar9 + 4) = 1;
      *(float *)((int)afStack_4e0 + iVar9) = fVar2 / (float)iVar7;
      *(float *)((int)afStack_4e0 + iVar9 + 4) =
           *(float *)((int)afStack_4e0 + iVar9 + 4) / (float)iVar1;
      iVar9 = iVar6;
    } while (iVar6 < iVar5);
  }
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  if (0.0 < in_stack_fffffb10) {
    local_3c = 0;
    local_5c = vertex_idx_1 * 0x4c4;
    for (local_14 = 0;
        local_14 < *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + local_5c + -4);
        local_14 = local_14 + 1) {
      local_a8 = this_ptr->edges_ptr +
                 *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + local_3c + local_5c);
      local_a4 = 0;
      if (0 < local_a8->adjacent_tri_count) {
        local_40 = local_a8;
        do {
          local_a0 = local_40->adjacent_tri_indices[0];
          pCVar8 = this_ptr->tri_data + local_40->adjacent_tri_indices[0];
          if (g_LodGenerationStamp != pCVar8->visited_stamp) {
            iVar9 = pCVar8->vertex_idx_0;
            pCVar8->visited_stamp = g_LodGenerationStamp;
            iVar5 = 0;
            pCVar4 = pCVar8;
            while (iVar9 != vertex_idx_1) {
              iVar5 = iVar5 + 1;
              if (2 < iVar5) break;
              iVar9 = pCVar4->vertex_idx_1;
              pCVar4 = (CLodFace *)(pCVar4->attribute_indices + 1);
            }
            iVar9 = 0;
            if (0 < local_b4) {
              iVar7 = 0;
              local_44 = local_b4 << 4;
              do {
                if (*(int *)((int)aiStack_4e8 + iVar7) == pCVar8->attribute_indices[0]) break;
                iVar7 = iVar7 + 0x10;
                iVar9 = iVar9 + 1;
              } while (iVar7 < local_b4 << 4);
            }
            if (iVar9 < local_b4) {
              pCVar8->uv_coords[iVar5][0] = afStack_4e0[iVar9 * 4];
              pCVar8->uv_coords[iVar5][1] = afStack_4e0[iVar9 * 4 + 1];
              iVar9 = 2;
            }
            else {
              iVar9 = 0;
            }
            piVar12 = pCVar8->attribute_indices + iVar5 * 2 + iVar9;
            for (; iVar9 < this_ptr->sort_attribute_count; iVar9 = iVar9 + 1) {
              shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
                        (this_ptr,local_a0,iVar9,&local_100,&local_9c);
              (*(float (*) [2])(piVar12 + 7))[0] =
                   local_c4 * local_f4 + local_cc * local_100.y + local_c8 * local_100.z +
                   (float)local_98;
              piVar12 = piVar12 + 1;
            }
          }
          local_a4 = local_a4 + 1;
          local_40 = (CLodEdge *)&local_40->vertex_idx_2;
        } while (local_a4 < local_a8->adjacent_tri_count);
      }
      local_3c = local_3c + 4;
    }
  }
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  if (0.0 < local_4ec) {
    local_30 = 0;
    local_58 = vertex_idx_2 * 0x4c4;
    for (local_18 = 0;
        local_18 < *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + local_58 + -4);
        local_18 = local_18 + 1) {
      local_98 = this_ptr->edges_ptr +
                 *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + local_30 + local_58);
      local_94 = 0;
      if (0 < local_98->adjacent_tri_count) {
        local_34 = local_98;
        do {
          local_90 = local_34->adjacent_tri_indices[0];
          pCVar8 = this_ptr->tri_data + local_34->adjacent_tri_indices[0];
          if (g_LodGenerationStamp != pCVar8->visited_stamp) {
            iVar9 = pCVar8->vertex_idx_0;
            pCVar8->visited_stamp = g_LodGenerationStamp;
            iVar5 = 0;
            pCVar4 = pCVar8;
            while (iVar9 != vertex_idx_2) {
              iVar5 = iVar5 + 1;
              if (2 < iVar5) break;
              iVar9 = pCVar4->vertex_idx_1;
              pCVar4 = (CLodFace *)(pCVar4->attribute_indices + 1);
            }
            iVar9 = 0;
            if (0 < local_b4) {
              iVar7 = 0;
              local_38 = local_b4 << 4;
              do {
                if (*(int *)((int)aiStack_4e8 + iVar7) == pCVar8->attribute_indices[0]) break;
                iVar7 = iVar7 + 0x10;
                iVar9 = iVar9 + 1;
              } while (iVar7 < local_b4 << 4);
            }
            if (iVar9 < local_b4) {
              pCVar8->uv_coords[iVar5][0] = afStack_4e0[iVar9 * 4];
              pCVar8->uv_coords[iVar5][1] = afStack_4e0[iVar9 * 4 + 1];
              iVar9 = 2;
            }
            else {
              iVar9 = 0;
            }
            piVar12 = pCVar8->attribute_indices + iVar5 * 2 + iVar9;
            for (; iVar9 < this_ptr->sort_attribute_count; iVar9 = iVar9 + 1) {
              shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
                        (this_ptr,local_90,iVar9,&local_dc,&local_8c);
              (*(float (*) [2])(piVar12 + 7))[0] =
                   local_c4 * local_d0 + local_cc * local_dc.y + local_c8 * local_dc.z + local_88;
              piVar12 = piVar12 + 1;
            }
          }
          local_94 = local_94 + 1;
          local_34 = (CLodEdge *)&local_34->vertex_idx_2;
        } while (local_94 < local_98->adjacent_tri_count);
      }
      local_30 = local_30 + 4;
    }
  }
  iVar9 = this_ptr->vertex_data[vertex_idx_2].adjacent_edge_count;
  if (0 < iVar9) {
    iVar5 = 0;
    do {
      iVar7 = iVar5 + 4;
      *(uint *)((int)afStack_1c8 + iVar5) =
           *(uint *)((int)this_ptr->vertex_data[vertex_idx_2].adjacent_edge_indices + iVar5);
      iVar5 = iVar7;
    } while (iVar7 < iVar9 * 4);
  }
  if (0 < iVar9) {
    local_28 = 0;
    local_24 = iVar9 << 2;
    local_78 = vertex_idx_1 * 0x4c4;
    do {
      local_88 = *(float *)((int)afStack_1c8 + local_28);
      pCVar13 = this_ptr->edges_ptr + (int)local_88;
      iVar9 = 0;
      pCVar11 = pCVar13;
      if (0 < pCVar13->adjacent_tri_count) {
        do {
          local_2c = pCVar11;
          pCVar8 = this_ptr->tri_data + local_2c->adjacent_tri_indices[0];
          piVar12 = &pCVar8->submesh_id;
          do {
            if (pCVar8->vertex_idx_0 == vertex_idx_2) {
              pCVar8->vertex_idx_0 = vertex_idx_1;
            }
            pCVar8 = (CLodFace *)(pCVar8->attribute_indices + 1);
          } while (pCVar8 != (CLodFace *)piVar12);
          iVar9 = iVar9 + 1;
          local_2c = (CLodEdge *)&local_2c->vertex_idx_2;
          pCVar11 = local_2c;
        } while (iVar9 < pCVar13->adjacent_tri_count);
      }
      local_84 = -1;
      if (pCVar13->vertex_idx_1 == vertex_idx_2) {
        local_80 = (CLodFace *)
                   shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                             (this_ptr,vertex_idx_1,pCVar13->vertex_idx_2,0);
        if ((int)local_80 < 0) {
          pCVar13->vertex_idx_1 = vertex_idx_1;
        }
      }
      else if (vertex_idx_2 == pCVar13->vertex_idx_2) {
        local_80 = (CLodFace *)
                   shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                             (this_ptr,pCVar13->vertex_idx_1,vertex_idx_1,0);
        if ((int)local_80 < 0) {
          pCVar13->vertex_idx_2 = vertex_idx_1;
        }
      }
      else {
        g_CurrentFilename = "..\\shape\\meshlod.cpp";
        g_CurrentLineNumber = 0x992;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
      }
      if (local_84 < 0) {
        if (pCVar13->vertex_idx_2 < pCVar13->vertex_idx_1) {
          iVar9 = pCVar13->vertex_idx_1;
          pCVar13->vertex_idx_1 = pCVar13->vertex_idx_2;
          pCVar13->vertex_idx_2 = iVar9;
        }
        shape_meshlod_cpp_CLodVert_addAdjacentEdge_FUN_00515d90
                  ((CLodVert *)(this_ptr->vertex_data->lod_workspace + local_78 + -0x10),
                   (int)local_88);
        iVar9 = local_7c;
      }
      else {
        iVar5 = pCVar13->adjacent_tri_count;
        iVar7 = local_84 * 0xf0;
        iVar9 = local_7c;
        while (local_7c = iVar7, 0 < iVar5) {
          iVar9 = pCVar13->adjacent_tri_indices[0];
          local_80 = this_ptr->tri_data + iVar9;
          shape_meshlod_cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0(this_ptr,iVar9,(int)local_88);
          *(float *)(extraout_EAX * 4 + local_84 + 0x34) = local_88;
          shape_meshlod_cpp_CLodEdge_addAdjacentFace_FUN_00515ca0
                    ((CLodEdge *)
                     ((int)local_80->attribute_indices +
                     (int)(this_ptr->edges_ptr->adjacent_tri_indices + -10)),iVar9);
          iVar7 = local_7c;
          iVar9 = local_7c;
          iVar5 = pCVar13->adjacent_tri_count;
        }
      }
      local_7c = iVar9;
      local_28 = local_28 + 4;
    } while (local_28 < local_24);
  }
  this_ptr->vertex_data[vertex_idx_2].adjacent_edge_count = 0;
  local_74 = vertex_idx_1 * 0x4c4;
  pCVar10 = this_ptr->vertex_data + vertex_idx_1;
  (pCVar10->position).x = local_d0;
  (pCVar10->position).y = local_cc;
  (pCVar10->position).z = local_c8;
  iVar9 = 0;
  if (0 < this_ptr->reserved_attribute_count) {
    iVar5 = 0;
    do {
      pCVar10 = this_ptr->vertex_data;
      iVar9 = iVar9 + 1;
      *(float *)(pCVar10[vertex_idx_1].lod_workspace + iVar5 + -4) =
           *(float *)(pCVar10[vertex_idx_2].lod_workspace + iVar5 + -4) * in_stack_fffffb10 +
           *(float *)(pCVar10[vertex_idx_1].lod_workspace + iVar5 + -4) * local_4ec;
      iVar5 = iVar5 + 4;
      local_70 = local_74;
      local_6c = vertex_idx_2 * 0x4c4;
    } while (iVar9 < this_ptr->reserved_attribute_count);
  }
  local_1c = 0;
  local_60 = (CLodEdge *)(vertex_idx_1 * 0x4c4);
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  local_20 = 0;
  while (local_1c <
         *(int *)((int)local_60[4].adjacent_tri_indices + (int)this_ptr->vertex_data->lod_workspace)
        ) {
    iVar9 = shape_meshlod_cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980
                      (this_ptr,vertex_idx_1,local_1c);
    local_50 = (CLodFace *)(iVar9 * 0x4c4);
    iVar9 = 0;
    iVar5 = 0;
    while( true ) {
      pCVar10 = this_ptr->vertex_data;
      if (*(int *)((int)pCVar10->adjacent_edge_indices + (int)(local_50->attribute_indices + -1)) <=
          iVar9) break;
      puVar3 = (byte *)(iVar5 + (int)local_50->attribute_indices);
      iVar5 = iVar5 + 4;
      iVar9 = iVar9 + 1;
      this_ptr->edges_ptr[*(int *)((int)pCVar10->adjacent_edge_indices + (int)puVar3)].
      needs_recalc_flag = 1;
    }
    local_64 = *(int *)((int)pCVar10->adjacent_edge_indices + local_1c + local_5c);
    pCVar11 = this_ptr->edges_ptr + local_64;
    iVar9 = 0;
    local_60 = pCVar11;
    if (0 < pCVar11->adjacent_tri_count) {
      do {
        pCVar8 = this_ptr->tri_data + pCVar11->adjacent_tri_indices[0];
        if (g_LodGenerationStamp != pCVar8->visited_stamp) {
          pCVar8->visited_stamp = g_LodGenerationStamp;
          shape_meshlod_cpp_CLodMesh_validateFace_FUN_00519830(this_ptr,pCVar8);
        }
        iVar9 = iVar9 + 1;
        pCVar11 = (CLodEdge *)&pCVar11->vertex_idx_2;
      } while (iVar9 < local_60->adjacent_tri_count);
    }
    shape_meshlod_cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(this_ptr,local_64,0);
    local_18 = local_18 + 4;
    local_14 = local_14 + 1;
  }
  iVar9 = 0;
  if (0 < this_ptr->sample_point_count) {
    iVar5 = 0;
    do {
      if ((this_ptr->tri_data
           [*(int *)((int)&this_ptr->sample_points_ptr->closest_triangle_idx + iVar5)].
           processed_flag != 0) ||
         (iVar7 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                            (this_ptr->tri_data +
                             *(int *)((int)&this_ptr->sample_points_ptr->closest_triangle_idx +
                                     iVar5),vertex_idx_1), -1 < iVar7)) {
        shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300(this_ptr,iVar9);
      }
      iVar9 = iVar9 + 1;
      iVar5 = iVar5 + 0x1c;
    } while (iVar9 < this_ptr->sample_point_count);
  }
  if (local_c0 == (CLodEdge *)0x0) {
    return;
  }
  return;
}
