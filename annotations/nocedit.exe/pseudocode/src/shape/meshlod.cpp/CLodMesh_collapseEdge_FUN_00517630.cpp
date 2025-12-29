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
  float fVar1;
  byte *puVar2;
  CLodFace *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CLodFace *pCVar7;
  int extraout_EAX;
  int iVar8;
  int iVar9;
  CLodVert *pCVar10;
  BADSPACEBASE *in_ESP;
  CLodEdge *pCVar11;
  int *piVar12;
  CLodEdge *pCVar13;
  float in_stack_fffffb20;
  float fStack_4dc;
  int aiStack_4d8 [2];
  float afStack_4d0 [198];
  float afStack_1b8 [50];
  CVector3f local_f0;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  CVector3f local_cc;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  CLodEdge *local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  CLodFace *local_9c;
  CLodEdge *local_98;
  int local_94;
  int local_90;
  float local_8c;
  CLodEdge *local_88;
  int local_84;
  int local_80;
  float local_7c;
  float local_78;
  int local_74;
  CLodFace *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_54;
  CLodEdge *local_50;
  int local_4c;
  int local_48;
  CLodFace *local_40;
  CLodFace *local_3c;
  int local_38;
  int local_34;
  CLodEdge *local_30;
  int local_2c;
  int local_28;
  CLodEdge *local_24;
  int local_20;
  CLodEdge *local_1c;
  int local_18;
  int local_14;
  
  local_c0 = 0.0;
  local_b8 = (float)shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                              (this_ptr,vertex_idx_1,vertex_idx_2,0);
  if ((int)local_b8 < 0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x824;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Tried to collapse edge that doesn't exist!");
  }
  pCVar10 = this_ptr->vertex_data;
  local_f0.y = pCVar10[vertex_idx_2].position.x * collapse_weight;
  local_f0.z = pCVar10[vertex_idx_2].position.y * collapse_weight;
  local_e4 = pCVar10[vertex_idx_2].position.z * collapse_weight;
  local_d8 = 1.0 - collapse_weight;
  pCVar10 = this_ptr->vertex_data;
  local_e0 = pCVar10[vertex_idx_1].position.x * local_d8;
  local_dc = pCVar10[vertex_idx_1].position.y * local_d8;
  local_d8 = pCVar10[vertex_idx_1].position.z * local_d8;
  local_cc.y = local_e0 + local_f0.y;
  local_cc.z = local_dc + local_f0.z;
  local_c0 = local_d8 + local_e4;
  local_b0 = this_ptr->edges_ptr + (int)local_b4;
  shape_meshlod_cpp_CLodVert_removeEdge_FUN_00515e00
            (this_ptr->vertex_data + local_b0->vertex_idx_1,(int)local_b4);
  shape_meshlod_cpp_CLodVert_removeEdge_FUN_00515e00
            (this_ptr->vertex_data + *(int *)(local_ac + 4),(int)local_b4);
  local_a4 = 0;
  local_b4 = 0.0;
  *(uint *)(local_a8 + 0x14) = 1;
  if (0 < *(int *)(local_a8 + 0x24)) {
    local_38 = local_a8;
    do {
      local_a0 = *(int *)(local_38 + 0x28);
      local_9c = this_ptr->tri_data + *(int *)(local_38 + 0x28);
      iVar8 = 0;
      if (0 < local_a4) {
        iVar4 = 0;
        do {
          if (*(int *)((int)aiStack_4d8 + iVar4) == local_9c->attribute_indices[0]) break;
          iVar4 = iVar4 + 0x10;
          iVar8 = iVar8 + 1;
        } while (iVar4 < local_a4 * 0x10);
      }
      if (local_a4 <= iVar8) {
        iVar4 = local_9c->attribute_indices[0];
        aiStack_4d8[iVar8 * 4 + 1] = 0;
        afStack_4d0[iVar8 * 4] = 0.0;
        afStack_4d0[iVar8 * 4 + 1] = 0.0;
        aiStack_4d8[iVar8 * 4] = iVar4;
        local_a4 = local_a4 + 1;
      }
      aiStack_4d8[iVar8 * 4 + 1] = aiStack_4d8[iVar8 * 4 + 1] + 1;
      local_40 = local_9c;
      local_3c = (CLodFace *)&local_9c->submesh_id;
      pCVar7 = local_9c;
      do {
        pCVar3 = local_40;
        fVar1 = fStack_4dc;
        if ((pCVar7->vertex_idx_0 == vertex_idx_1) ||
           (fVar1 = in_stack_fffffb20, pCVar7->vertex_idx_0 == vertex_idx_2)) {
          afStack_4d0[iVar8 * 4] = local_40->uv_coords[0][0] * fVar1 + afStack_4d0[iVar8 * 4];
          afStack_4d0[iVar8 * 4 + 1] = fVar1 * pCVar3->uv_coords[0][1] + afStack_4d0[iVar8 * 4 + 1];
        }
        if (pCVar7->edge_idx_0 != local_ac) {
          shape_meshlod_cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0
                    (this_ptr,local_a0,pCVar7->edge_idx_0);
        }
        pCVar7 = (CLodFace *)(pCVar7->attribute_indices + 1);
        local_40 = (CLodFace *)(local_40->attribute_indices + 2);
      } while (pCVar7 != local_3c);
      local_9c->processed_flag = 1;
      local_b4 = (float)((int)local_b4 + 1);
      local_38 = local_38 + 4;
    } while ((int)local_b4 < *(int *)(local_a8 + 0x24));
  }
  *(uint *)(local_a8 + 0x24) = 0;
  if (0 < local_a4) {
    iVar4 = local_a4 * 0x10;
    iVar8 = 0;
    do {
      iVar9 = *(int *)((int)aiStack_4d8 + iVar8 + 4);
      fVar1 = *(float *)((int)afStack_4d0 + iVar8);
      iVar6 = *(int *)((int)aiStack_4d8 + iVar8 + 4);
      iVar5 = iVar8 + 0x10;
      *(uint *)((int)aiStack_4d8 + iVar8 + 4) = 1;
      *(float *)((int)afStack_4d0 + iVar8) = fVar1 / (float)iVar9;
      *(float *)((int)afStack_4d0 + iVar8 + 4) =
           *(float *)((int)afStack_4d0 + iVar8 + 4) / (float)iVar6;
      iVar8 = iVar5;
    } while (iVar5 < iVar4);
  }
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  if (0.0 < in_stack_fffffb20) {
    local_2c = 0;
    local_4c = vertex_idx_1 * 0x4c4;
    for (iVar8 = 0;
        iVar8 < *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + local_4c + -4);
        iVar8 = iVar8 + 1) {
      local_98 = this_ptr->edges_ptr +
                 *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + local_2c + local_4c);
      local_94 = 0;
      if (0 < local_98->adjacent_tri_count) {
        local_30 = local_98;
        do {
          local_90 = local_30->adjacent_tri_indices[0];
          pCVar7 = this_ptr->tri_data + local_30->adjacent_tri_indices[0];
          if (g_LodGenerationStamp != pCVar7->visited_stamp) {
            iVar4 = pCVar7->vertex_idx_0;
            pCVar7->visited_stamp = g_LodGenerationStamp;
            iVar9 = 0;
            pCVar3 = pCVar7;
            while (iVar4 != vertex_idx_1) {
              iVar9 = iVar9 + 1;
              if (2 < iVar9) break;
              iVar4 = pCVar3->vertex_idx_1;
              pCVar3 = (CLodFace *)(pCVar3->attribute_indices + 1);
            }
            iVar4 = 0;
            if (0 < local_a4) {
              iVar6 = 0;
              local_34 = local_a4 << 4;
              do {
                if (*(int *)((int)aiStack_4d8 + iVar6) == pCVar7->attribute_indices[0]) break;
                iVar6 = iVar6 + 0x10;
                iVar4 = iVar4 + 1;
              } while (iVar6 < local_a4 << 4);
            }
            if (iVar4 < local_a4) {
              pCVar7->uv_coords[iVar9][0] = afStack_4d0[iVar4 * 4];
              pCVar7->uv_coords[iVar9][1] = afStack_4d0[iVar4 * 4 + 1];
              iVar4 = 2;
            }
            else {
              iVar4 = 0;
            }
            piVar12 = pCVar7->attribute_indices + iVar9 * 2 + iVar4;
            for (; iVar4 < this_ptr->sort_attribute_count; iVar4 = iVar4 + 1) {
              shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
                        (this_ptr,local_90,iVar4,&local_f0,&local_8c);
              (*(float (*) [2])(piVar12 + 7))[0] =
                   local_b4 * local_e4 + local_bc * local_f0.y + local_b8 * local_f0.z +
                   (float)local_88;
              piVar12 = piVar12 + 1;
            }
          }
          local_94 = local_94 + 1;
          local_30 = (CLodEdge *)&local_30->vertex_idx_2;
        } while (local_94 < local_98->adjacent_tri_count);
      }
      local_2c = local_2c + 4;
    }
  }
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  if (0.0 < fStack_4dc) {
    local_20 = 0;
    local_48 = vertex_idx_2 * 0x4c4;
    for (iVar8 = 0;
        iVar8 < *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + local_48 + -4);
        iVar8 = iVar8 + 1) {
      local_88 = this_ptr->edges_ptr +
                 *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + local_20 + local_48);
      local_84 = 0;
      if (0 < local_88->adjacent_tri_count) {
        local_24 = local_88;
        do {
          local_80 = local_24->adjacent_tri_indices[0];
          pCVar7 = this_ptr->tri_data + local_24->adjacent_tri_indices[0];
          if (g_LodGenerationStamp != pCVar7->visited_stamp) {
            iVar4 = pCVar7->vertex_idx_0;
            pCVar7->visited_stamp = g_LodGenerationStamp;
            iVar9 = 0;
            pCVar3 = pCVar7;
            while (iVar4 != vertex_idx_2) {
              iVar9 = iVar9 + 1;
              if (2 < iVar9) break;
              iVar4 = pCVar3->vertex_idx_1;
              pCVar3 = (CLodFace *)(pCVar3->attribute_indices + 1);
            }
            iVar4 = 0;
            if (0 < local_a4) {
              iVar6 = 0;
              local_28 = local_a4 << 4;
              do {
                if (*(int *)((int)aiStack_4d8 + iVar6) == pCVar7->attribute_indices[0]) break;
                iVar6 = iVar6 + 0x10;
                iVar4 = iVar4 + 1;
              } while (iVar6 < local_a4 << 4);
            }
            if (iVar4 < local_a4) {
              pCVar7->uv_coords[iVar9][0] = afStack_4d0[iVar4 * 4];
              pCVar7->uv_coords[iVar9][1] = afStack_4d0[iVar4 * 4 + 1];
              iVar4 = 2;
            }
            else {
              iVar4 = 0;
            }
            piVar12 = pCVar7->attribute_indices + iVar9 * 2 + iVar4;
            for (; iVar4 < this_ptr->sort_attribute_count; iVar4 = iVar4 + 1) {
              shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
                        (this_ptr,local_80,iVar4,&local_cc,&local_7c);
              (*(float (*) [2])(piVar12 + 7))[0] =
                   local_b4 * local_c0 + local_bc * local_cc.y + local_b8 * local_cc.z + local_78;
              piVar12 = piVar12 + 1;
            }
          }
          local_84 = local_84 + 1;
          local_24 = (CLodEdge *)&local_24->vertex_idx_2;
        } while (local_84 < local_88->adjacent_tri_count);
      }
      local_20 = local_20 + 4;
    }
  }
  iVar8 = this_ptr->vertex_data[vertex_idx_2].adjacent_edge_count;
  if (0 < iVar8) {
    iVar4 = 0;
    do {
      iVar9 = iVar4 + 4;
      *(uint *)((int)afStack_1b8 + iVar4) =
           *(uint *)((int)this_ptr->vertex_data[vertex_idx_2].adjacent_edge_indices + iVar4);
      iVar4 = iVar9;
    } while (iVar9 < iVar8 * 4);
  }
  if (0 < iVar8) {
    local_18 = 0;
    local_14 = iVar8 << 2;
    local_68 = vertex_idx_1 * 0x4c4;
    do {
      local_78 = *(float *)((int)afStack_1b8 + local_18);
      pCVar13 = this_ptr->edges_ptr + (int)local_78;
      iVar8 = 0;
      pCVar11 = pCVar13;
      if (0 < pCVar13->adjacent_tri_count) {
        do {
          local_1c = pCVar11;
          pCVar7 = this_ptr->tri_data + local_1c->adjacent_tri_indices[0];
          piVar12 = &pCVar7->submesh_id;
          do {
            if (pCVar7->vertex_idx_0 == vertex_idx_2) {
              pCVar7->vertex_idx_0 = vertex_idx_1;
            }
            pCVar7 = (CLodFace *)(pCVar7->attribute_indices + 1);
          } while (pCVar7 != (CLodFace *)piVar12);
          iVar8 = iVar8 + 1;
          local_1c = (CLodEdge *)&local_1c->vertex_idx_2;
          pCVar11 = local_1c;
        } while (iVar8 < pCVar13->adjacent_tri_count);
      }
      local_74 = -1;
      if (pCVar13->vertex_idx_1 == vertex_idx_2) {
        local_74 = shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                             (this_ptr,vertex_idx_1,pCVar13->vertex_idx_2,0);
        if (local_74 < 0) {
          pCVar13->vertex_idx_1 = vertex_idx_1;
        }
      }
      else if (vertex_idx_2 == pCVar13->vertex_idx_2) {
        local_74 = shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                             (this_ptr,pCVar13->vertex_idx_1,vertex_idx_1,0);
        if (local_74 < 0) {
          pCVar13->vertex_idx_2 = vertex_idx_1;
        }
      }
      else {
        g_CurrentFilename = "..\\shape\\meshlod.cpp";
        g_CurrentLineNumber = 0x992;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
      }
      if (local_74 < 0) {
        if (pCVar13->vertex_idx_2 < pCVar13->vertex_idx_1) {
          iVar8 = pCVar13->vertex_idx_1;
          pCVar13->vertex_idx_1 = pCVar13->vertex_idx_2;
          pCVar13->vertex_idx_2 = iVar8;
        }
        shape_meshlod_cpp_CLodVert_addAdjacentEdge_FUN_00515d90
                  ((CLodVert *)(this_ptr->vertex_data->lod_workspace + local_68 + -0x10),
                   (int)local_78);
        iVar8 = local_6c;
      }
      else {
        iVar4 = pCVar13->adjacent_tri_count;
        iVar9 = local_74 * 0xf0;
        iVar8 = local_6c;
        while (local_6c = iVar9, 0 < iVar4) {
          in_stack_fffffb20 = (float)pCVar13->adjacent_tri_indices[0];
          local_70 = this_ptr->tri_data + (int)in_stack_fffffb20;
          shape_meshlod_cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0
                    (this_ptr,(int)in_stack_fffffb20,(int)local_78);
          *(CLodFace **)(extraout_EAX * 4 + local_6c + 0x34) = local_70;
          shape_meshlod_cpp_CLodEdge_addAdjacentFace_FUN_00515ca0
                    ((CLodEdge *)((int)this_ptr->edges_ptr->adjacent_tri_indices + local_68 + -0x28)
                     ,(int)in_stack_fffffb20);
          iVar9 = local_6c;
          iVar8 = local_6c;
          iVar4 = pCVar13->adjacent_tri_count;
        }
      }
      local_6c = iVar8;
      local_18 = local_18 + 4;
    } while (local_18 < local_14);
  }
  this_ptr->vertex_data[vertex_idx_2].adjacent_edge_count = 0;
  local_64 = vertex_idx_1 * 0x4c4;
  pCVar10 = this_ptr->vertex_data + vertex_idx_1;
  (pCVar10->position).x = local_c0;
  (pCVar10->position).y = local_bc;
  (pCVar10->position).z = local_b8;
  iVar8 = 0;
  if (0 < this_ptr->reserved_attribute_count) {
    iVar4 = 0;
    do {
      pCVar10 = this_ptr->vertex_data;
      iVar8 = iVar8 + 1;
      *(float *)(pCVar10[vertex_idx_1].lod_workspace + iVar4 + -4) =
           *(float *)(pCVar10[vertex_idx_2].lod_workspace + iVar4 + -4) * in_stack_fffffb20 +
           *(float *)(pCVar10[vertex_idx_1].lod_workspace + iVar4 + -4) * fStack_4dc;
      iVar4 = iVar4 + 4;
      local_60 = local_64;
      local_5c = vertex_idx_2 * 0x4c4;
    } while (iVar8 < this_ptr->reserved_attribute_count);
  }
  local_50 = (CLodEdge *)(vertex_idx_1 * 0x4c4);
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  while (0 < *(int *)((int)local_50[4].adjacent_tri_indices +
                     (int)this_ptr->vertex_data->lod_workspace)) {
    iVar8 = shape_meshlod_cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980(this_ptr,vertex_idx_1,0);
    local_40 = (CLodFace *)(iVar8 * 0x4c4);
    iVar8 = 0;
    iVar4 = 0;
    while( true ) {
      pCVar10 = this_ptr->vertex_data;
      if (*(int *)((int)pCVar10->adjacent_edge_indices + (int)(local_40->attribute_indices + -1)) <=
          iVar8) break;
      puVar2 = (byte *)(iVar4 + (int)local_40->attribute_indices);
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 1;
      this_ptr->edges_ptr[*(int *)((int)pCVar10->adjacent_edge_indices + (int)puVar2)].
      needs_recalc_flag = 1;
    }
    local_54 = *(int *)((int)pCVar10->adjacent_edge_indices + local_4c);
    pCVar11 = this_ptr->edges_ptr + local_54;
    iVar8 = 0;
    local_50 = pCVar11;
    if (0 < pCVar11->adjacent_tri_count) {
      do {
        pCVar7 = this_ptr->tri_data + pCVar11->adjacent_tri_indices[0];
        if (g_LodGenerationStamp != pCVar7->visited_stamp) {
          pCVar7->visited_stamp = g_LodGenerationStamp;
          shape_meshlod_cpp_CLodMesh_validateFace_FUN_00519830(this_ptr,pCVar7);
        }
        iVar8 = iVar8 + 1;
        pCVar11 = (CLodEdge *)&pCVar11->vertex_idx_2;
      } while (iVar8 < local_50->adjacent_tri_count);
    }
    shape_meshlod_cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(this_ptr,local_54,0);
  }
  iVar8 = 0;
  if (0 < this_ptr->sample_point_count) {
    iVar4 = 0;
    do {
      if ((this_ptr->tri_data
           [*(int *)((int)&this_ptr->sample_points_ptr->closest_triangle_idx + iVar4)].
           processed_flag != 0) ||
         (iVar9 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                            (this_ptr->tri_data +
                             *(int *)((int)&this_ptr->sample_points_ptr->closest_triangle_idx +
                                     iVar4),vertex_idx_1), -1 < iVar9)) {
        shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300(this_ptr,iVar8);
      }
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + 0x1c;
    } while (iVar8 < this_ptr->sample_point_count);
  }
  if (local_b0 == (CLodEdge *)0x0) {
    return;
  }
  return;
}
