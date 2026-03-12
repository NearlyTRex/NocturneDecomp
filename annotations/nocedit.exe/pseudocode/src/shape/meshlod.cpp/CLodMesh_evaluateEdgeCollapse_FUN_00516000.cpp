// Name: shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000
// Address: 00516000
// Address Range: [[00516000, 0051641d]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(CLodMesh *this_ptr,int edge_index,int full_check)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(CLodMesh *this_ptr,int edge_index,int full_check)

{
  int tri_index;
  CLodEdge *pCVar2;
  CLodFace *this_ptr_01;
  int iVar3;
  int iVar6;
  int iVar4;
  int iVar7;
  int iVar5;
  CLodMesh *pCVar6;
  int corner_idx;
  CLodFace *this_ptr_00;
  int *piVar7;
  int *piVar8;
  CVector3f local_80;
  CVector3f local_74;
  int local_60;
  float local_5c;
  float local_58 [2];
  CLodFace *local_50;
  CLodEdge *local_4c;
  int local_48;
  int local_44;
  CLodFace *local_40;
  CVector3f *local_3c;
  int *local_38;
  int local_34;
  CLodFace *local_30;
  CLodEdge *local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  CLodEdge *pCVar3;
  CLodFace *pCVar1;
  float fVar2;
  
  pCVar2 = this_ptr->edges_ptr + edge_index;
  if (full_check == 0) {
    if (pCVar2->collapse_viability < 2) {
      pCVar2->collapse_viability = 0;
    }
  }
  else {
    pCVar2->collapse_viability = 0;
    pCVar2->collapse_curvature = 0;
  }
  if (pCVar2->adjacent_tri_count < 2) {
    pCVar2->collapse_curvature = 2;
    return;
  }
  if (pCVar2->collapse_viability < 2) {
    if ((g_LodReplayMode == 0) && (local_48 = 1, pCVar3 = pCVar2, 1 < pCVar2->adjacent_tri_count)) {
      do {
        iVar3 = 0;
        pCVar6 = this_ptr;
        if (0 < this_ptr->active_attribute_count) {
          do {
            if ((pCVar6->attribute_enabled_flags[0] != 0) &&
               (this_ptr->tri_data[pCVar2->adjacent_tri_indices[0]].attribute_indices[iVar3] !=
                this_ptr->tri_data[pCVar3->adjacent_tri_indices[1]].attribute_indices[iVar3])) {
              pCVar2->collapse_viability = 1;
              return;
            }
            iVar3 = iVar3 + 1;
            pCVar6 = (CLodMesh *)&pCVar6->vertex_data;
          } while (iVar3 < this_ptr->active_attribute_count);
        }
        local_48 = local_48 + 1;
        pCVar3 = (CLodEdge *)&pCVar3->vertex_idx_2;
      } while (local_48 < pCVar2->adjacent_tri_count);
    }
    if ((full_check != 0) && (local_44 = 0, local_4c = pCVar2, 0 < pCVar2->adjacent_tri_count)) {
      do {
        iVar3 = local_4c->adjacent_tri_indices[0];
        this_ptr_01 = this_ptr->tri_data + iVar3;
        local_34 = local_44 + 1;
        if (local_34 < pCVar2->adjacent_tri_count) {
          local_38 = pCVar2->adjacent_tri_indices + local_44 + -9;
          do {
            tri_index = local_38[10];
            this_ptr_00 = this_ptr->tri_data + tri_index;
            fVar2 = (this_ptr_01->normal).z * (this_ptr_00->normal).z +
                    (this_ptr_01->normal).x * (this_ptr_00->normal).x +
                    (this_ptr_01->normal).y * (this_ptr_00->normal).y;
            if (pCVar2->collapse_curvature < 2) {
              if (fVar2 <= (float)-0.25879999999999997) {
                pCVar2->collapse_curvature = 1;
              }
              if (fVar2 <= (float)-0.5) {
                pCVar2->collapse_curvature = 2;
              }
            }
            if (((g_LodReplayMode == 0) && (this_ptr->attribute_enabled_flags[0] != 0)) &&
               (pCVar2->collapse_viability < 2)) {
              iVar6 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                                (this_ptr_01,pCVar2->vertex_idx_1);
              iVar4 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                                (this_ptr_01,pCVar2->vertex_idx_2);
              iVar7 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                                (this_ptr_00,pCVar2->vertex_idx_1);
              corner_idx = 0;
              iVar5 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                                (this_ptr_00,pCVar2->vertex_idx_2);
              piVar8 = this_ptr_01->attribute_indices + iVar6 * 2;
              piVar7 = this_ptr_00->attribute_indices + iVar7 * 2;
              do {
                if (((float)3 < ABS((float)piVar8[7] - (float)piVar7[7])) ||
                   ((float)3 <
                    ABS(this_ptr_01->uv_coords[iVar4][corner_idx] -
                        this_ptr_00->uv_coords[iVar5][corner_idx]))) {
                  pCVar2->collapse_viability = 2;
                  break;
                }
                shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
                          (this_ptr,iVar3,corner_idx,&local_74,&local_5c);
                shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
                          (this_ptr,tri_index,corner_idx,&local_80,local_58);
                if (local_74.z * local_80.z + local_74.x * local_80.x + local_74.y * local_80.y <=
                    SQRT(local_80.z * local_80.z + local_80.x * local_80.x + local_80.y * local_80.y
                        ) * SQRT(local_74.z * local_74.z +
                                 local_74.x * local_74.x + local_74.y * local_74.y) * fVar2 *
                    (float)0.5) {
                  pCVar2->collapse_viability = 2;
                  break;
                }
                piVar8 = piVar8 + 1;
                corner_idx = corner_idx + 1;
                piVar7 = piVar7 + 1;
              } while (corner_idx < 2);
            }
            local_38 = local_38 + 1;
            local_34 = local_34 + 1;
          } while (local_34 < pCVar2->adjacent_tri_count);
        }
        local_44 = local_44 + 1;
        local_4c = (CLodEdge *)&local_4c->vertex_idx_2;
      } while (local_44 < pCVar2->adjacent_tri_count);
    }
  }
  return;
}
