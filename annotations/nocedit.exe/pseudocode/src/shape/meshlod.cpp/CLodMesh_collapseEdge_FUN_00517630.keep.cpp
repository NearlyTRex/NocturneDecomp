// Name: shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630
// Address: 00517630
// MANUAL RECONSTRUCTION
// Address Range: [[00517630, 005182f0]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630(CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2,float collapse_weight)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630(CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2,float collapse_weight)

{
  int iVar5;
  int iVar7;
  int iVar9;
  float fVar2;
  float fVar3;
  CLodFace *pCVar8;
  CLodVert *pCVar10;
  CLodEdge *pCVar11;
  CLodEdge *pCVar13;
  SLodUvAccum accum [50];
  int aiStack_1c8 [50];
  CVector3f local_100;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  CVector3f local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  int local_bc;
  CLodEdge *local_b8;
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
  int local_88;
  int local_84;
  CLodFace *local_80;
  CLodEdge *local_64;
  int local_68;
  int local_c4;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;

  local_bc = shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                       (this_ptr,vertex_idx_1,vertex_idx_2,0);
  if (local_bc < 0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x824;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Tried to collapse edge that doesn't exist!");
  }
  pCVar10 = this_ptr->vertex_data;
  local_f4 = pCVar10[vertex_idx_2].position.x * collapse_weight;
  local_f0 = pCVar10[vertex_idx_2].position.y * collapse_weight;
  local_ec = pCVar10[vertex_idx_2].position.z * collapse_weight;
  fVar3 = 1.0 - collapse_weight;
  pCVar10 = this_ptr->vertex_data;
  local_e8 = pCVar10[vertex_idx_1].position.x * fVar3;
  local_e4 = pCVar10[vertex_idx_1].position.y * fVar3;
  local_e0 = pCVar10[vertex_idx_1].position.z * fVar3;
  local_d0 = local_e8 + local_f4;
  local_cc = local_e4 + local_f0;
  local_c8 = local_e0 + local_ec;
  local_b8 = this_ptr->edges_ptr + local_bc;
  shape_meshlod_cpp_CLodVert_removeEdge_FUN_00515e00
            (this_ptr->vertex_data + local_b8->vertex_idx_1,local_bc);
  shape_meshlod_cpp_CLodVert_removeEdge_FUN_00515e00
            (this_ptr->vertex_data + local_b8->vertex_idx_2,local_bc);
  local_b4 = 0;
  local_b8->deletion_flag = 1;
  for (local_c4 = 0; local_c4 < local_b8->adjacent_tri_count; local_c4 = local_c4 + 1) {
    local_b0 = local_b8->adjacent_tri_indices[local_c4];
    local_ac = this_ptr->tri_data + local_b0;
    iVar9 = 0;
    if (0 < local_b4) {
      do {
        if (accum[iVar9].attr_id == local_ac->attribute_indices[0]) break;
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_b4);
    }
    if (local_b4 <= iVar9) {
      accum[iVar9].count = 0;
      accum[iVar9].u = 0.0;
      accum[iVar9].v = 0.0;
      accum[iVar9].attr_id = local_ac->attribute_indices[0];
      local_b4 = local_b4 + 1;
    }
    accum[iVar9].count = accum[iVar9].count + 1;
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
      fVar2 = fVar3;
      if (((&local_ac->vertex_idx_0)[iVar5] == vertex_idx_1) ||
         (fVar2 = collapse_weight, (&local_ac->vertex_idx_0)[iVar5] == vertex_idx_2)) {
        accum[iVar9].u = local_ac->uv_coords[iVar5][0] * fVar2 + accum[iVar9].u;
        accum[iVar9].v = fVar2 * local_ac->uv_coords[iVar5][1] + accum[iVar9].v;
      }
      if ((&local_ac->edge_idx_0)[iVar5] != local_bc) {
        shape_meshlod_cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0
                  (this_ptr,local_b0,(&local_ac->edge_idx_0)[iVar5]);
      }
    }
    local_ac->processed_flag = 1;
  }
  local_b8->adjacent_tri_count = 0;
  for (iVar9 = 0; iVar9 < local_b4; iVar9 = iVar9 + 1) {
    iVar7 = accum[iVar9].count;
    accum[iVar9].count = 1;
    accum[iVar9].u = accum[iVar9].u / (float)iVar7;
    accum[iVar9].v = accum[iVar9].v / (float)iVar7;
  }
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  if (0.0 < collapse_weight) {
    for (local_14 = 0;
        local_14 < this_ptr->vertex_data[vertex_idx_1].adjacent_edge_count;
        local_14 = local_14 + 1) {
      local_a8 = this_ptr->edges_ptr +
                 this_ptr->vertex_data[vertex_idx_1].adjacent_edge_indices[local_14];
      for (local_a4 = 0; local_a4 < local_a8->adjacent_tri_count; local_a4 = local_a4 + 1) {
        local_a0 = local_a8->adjacent_tri_indices[local_a4];
        pCVar8 = this_ptr->tri_data + local_a0;
        if (g_LodGenerationStamp != pCVar8->visited_stamp) {
          pCVar8->visited_stamp = g_LodGenerationStamp;
          for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
            if ((&pCVar8->vertex_idx_0)[iVar5] == vertex_idx_1) break;
          }
          iVar9 = 0;
          if (0 < local_b4) {
            do {
              if (accum[iVar9].attr_id == pCVar8->attribute_indices[0]) break;
              iVar9 = iVar9 + 1;
            } while (iVar9 < local_b4);
          }
          if (iVar9 < local_b4) {
            pCVar8->uv_coords[iVar5][0] = accum[iVar9].u;
            pCVar8->uv_coords[iVar5][1] = accum[iVar9].v;
            iVar9 = 2;
          }
          else {
            iVar9 = 0;
          }
          for (; iVar9 < this_ptr->sort_attribute_count; iVar9 = iVar9 + 1) {
            shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
                      (this_ptr,local_a0,iVar9,&local_100,&local_9c);
            pCVar8->uv_coords[iVar5][iVar9] =
                 local_c8 * local_100.z + local_d0 * local_100.x + local_cc * local_100.y +
                 local_9c;
          }
        }
      }
    }
  }
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  if (0.0 < fVar3) {
    for (local_18 = 0;
        local_18 < this_ptr->vertex_data[vertex_idx_2].adjacent_edge_count;
        local_18 = local_18 + 1) {
      local_98 = this_ptr->edges_ptr +
                 this_ptr->vertex_data[vertex_idx_2].adjacent_edge_indices[local_18];
      for (local_94 = 0; local_94 < local_98->adjacent_tri_count; local_94 = local_94 + 1) {
        local_90 = local_98->adjacent_tri_indices[local_94];
        pCVar8 = this_ptr->tri_data + local_90;
        if (g_LodGenerationStamp != pCVar8->visited_stamp) {
          pCVar8->visited_stamp = g_LodGenerationStamp;
          for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
            if ((&pCVar8->vertex_idx_0)[iVar5] == vertex_idx_2) break;
          }
          iVar9 = 0;
          if (0 < local_b4) {
            do {
              if (accum[iVar9].attr_id == pCVar8->attribute_indices[0]) break;
              iVar9 = iVar9 + 1;
            } while (iVar9 < local_b4);
          }
          if (iVar9 < local_b4) {
            pCVar8->uv_coords[iVar5][0] = accum[iVar9].u;
            pCVar8->uv_coords[iVar5][1] = accum[iVar9].v;
            iVar9 = 2;
          }
          else {
            iVar9 = 0;
          }
          for (; iVar9 < this_ptr->sort_attribute_count; iVar9 = iVar9 + 1) {
            shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
                      (this_ptr,local_90,iVar9,&local_dc,&local_8c);
            pCVar8->uv_coords[iVar5][iVar9] =
                 local_c8 * local_dc.z + local_d0 * local_dc.x + local_cc * local_dc.y + local_8c;
          }
        }
      }
    }
  }
  iVar9 = this_ptr->vertex_data[vertex_idx_2].adjacent_edge_count;
  for (iVar5 = 0; iVar5 < iVar9; iVar5 = iVar5 + 1) {
    aiStack_1c8[iVar5] = this_ptr->vertex_data[vertex_idx_2].adjacent_edge_indices[iVar5];
  }
  if (0 < iVar9) {
    for (local_28 = 0; local_28 < iVar9; local_28 = local_28 + 1) {
      local_88 = aiStack_1c8[local_28];
      pCVar13 = this_ptr->edges_ptr + local_88;
      for (iVar7 = 0; iVar7 < pCVar13->adjacent_tri_count; iVar7 = iVar7 + 1) {
        pCVar8 = this_ptr->tri_data + pCVar13->adjacent_tri_indices[iVar7];
        for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
          if ((&pCVar8->vertex_idx_0)[iVar5] == vertex_idx_2) {
            (&pCVar8->vertex_idx_0)[iVar5] = vertex_idx_1;
          }
        }
      }
      local_84 = -1;
      if (pCVar13->vertex_idx_1 == vertex_idx_2) {
        local_84 = shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                             (this_ptr,vertex_idx_1,pCVar13->vertex_idx_2,0);
        if (local_84 < 0) {
          pCVar13->vertex_idx_1 = vertex_idx_1;
        }
      }
      else if (vertex_idx_2 == pCVar13->vertex_idx_2) {
        local_84 = shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                             (this_ptr,pCVar13->vertex_idx_1,vertex_idx_1,0);
        if (local_84 < 0) {
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
                  (this_ptr->vertex_data + vertex_idx_1,local_88);
      }
      else {
        iVar5 = pCVar13->adjacent_tri_count;
        while (0 < iVar5) {
          iVar9 = pCVar13->adjacent_tri_indices[0];
          local_80 = this_ptr->tri_data + iVar9;
          iVar5 = shape_meshlod_cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0
                            (this_ptr,iVar9,local_88);
          (&local_80->edge_idx_0)[iVar5] = local_84;
          shape_meshlod_cpp_CLodEdge_addAdjacentFace_FUN_00515ca0
                    (this_ptr->edges_ptr + local_84,iVar9);
          iVar5 = pCVar13->adjacent_tri_count;
        }
      }
    }
  }
  this_ptr->vertex_data[vertex_idx_2].adjacent_edge_count = 0;
  pCVar10 = this_ptr->vertex_data + vertex_idx_1;
  (pCVar10->position).x = local_d0;
  (pCVar10->position).y = local_cc;
  (pCVar10->position).z = local_c8;
  iVar9 = 0;
  if (0 < this_ptr->extra_attribute_count) {
    iVar5 = 0;
    do {
      pCVar10 = this_ptr->vertex_data;
      iVar9 = iVar9 + 1;
      *(float *)(pCVar10[vertex_idx_1].lod_workspace + iVar5 + -4) =
           *(float *)(pCVar10[vertex_idx_2].lod_workspace + iVar5 + -4) * collapse_weight +
           *(float *)(pCVar10[vertex_idx_1].lod_workspace + iVar5 + -4) * fVar3;
      iVar5 = iVar5 + 4;
    } while (iVar9 < this_ptr->extra_attribute_count);
  }
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  for (local_1c = 0;
      local_1c < this_ptr->vertex_data[vertex_idx_1].adjacent_edge_count;
      local_1c = local_1c + 1) {
    iVar9 = shape_meshlod_cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980
                      (this_ptr,vertex_idx_1,local_1c);
    for (iVar5 = 0; iVar5 < this_ptr->vertex_data[iVar9].adjacent_edge_count; iVar5 = iVar5 + 1) {
      this_ptr->edges_ptr[this_ptr->vertex_data[iVar9].adjacent_edge_indices[iVar5]].
      needs_recalc_flag = 1;
    }
    local_68 = this_ptr->vertex_data[vertex_idx_1].adjacent_edge_indices[local_1c];
    pCVar11 = this_ptr->edges_ptr + local_68;
    local_64 = pCVar11;
    for (iVar9 = 0; iVar9 < local_64->adjacent_tri_count; iVar9 = iVar9 + 1) {
      pCVar8 = this_ptr->tri_data + local_64->adjacent_tri_indices[iVar9];
      if (g_LodGenerationStamp != pCVar8->visited_stamp) {
        pCVar8->visited_stamp = g_LodGenerationStamp;
        shape_meshlod_cpp_CLodMesh_validateFace_FUN_00519830(this_ptr,pCVar8);
      }
    }
    shape_meshlod_cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(this_ptr,local_68,0);
  }
  for (iVar9 = 0; iVar9 < this_ptr->sample_point_count; iVar9 = iVar9 + 1) {
    if ((this_ptr->tri_data[this_ptr->sample_points_ptr[iVar9].closest_triangle_idx].
         processed_flag != 0) ||
       (iVar7 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                          (this_ptr->tri_data +
                           this_ptr->sample_points_ptr[iVar9].closest_triangle_idx,vertex_idx_1),
        -1 < iVar7)) {
      shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300(this_ptr,iVar9);
    }
  }
  return;
}
