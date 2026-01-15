// Name: shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000
// Address: 00516000
// Address Range: [[00516000, 0051641d]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(CLodMesh * this_ptr, int edge_index, int full_check)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000
          (CLodMesh *this_ptr,int edge_index,int full_check)

{
  CLodFace *pCVar1;
  float fVar2;
  CLodEdge *pCVar3;
  int iVar4;
  int iVar5;
  CLodMesh *pCVar6;
  int corner_idx;
  CLodFace *this_ptr_00;
  int *piVar7;
  int *piVar8;
  CVector3f local_7c;
  CVector3f local_70;
  int local_5c;
  float local_58;
  float afStack_54 [2];
  CLodFace *local_4c;
  CLodEdge *local_48;
  int local_44;
  int local_40;
  CLodFace *local_3c;
  CVector3f *local_38;
  int *local_34;
  int local_30;
  CLodFace *local_2c;
  CLodEdge *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  int iStack_14;
  
  local_48 = this_ptr->edges_ptr + edge_index;
  if (full_check == 0) {
    if (local_48->collapse_viability < 2) {
      local_48->collapse_viability = 0;
    }
  }
  else {
    local_48->collapse_viability = 0;
    local_48->collapse_curvature = 0;
  }
  if (local_48->adjacent_tri_count < 2) {
    local_48->collapse_curvature = 2;
    return;
  }
  if (local_48->collapse_viability < 2) {
    pCVar1 = this_ptr->tri_data;
    local_3c = pCVar1 + local_48->adjacent_tri_indices[0];
    if ((g_LodReplayMode == 0) &&
       (local_44 = 1, pCVar3 = local_48, 1 < local_48->adjacent_tri_count)) {
      do {
        iVar4 = 0;
        pCVar6 = this_ptr;
        if (0 < this_ptr->active_attribute_count) {
          do {
            if ((pCVar6->attribute_enabled_flags[0] != 0) &&
               (local_3c->attribute_indices[iVar4] !=
                pCVar1[pCVar3->adjacent_tri_indices[1]].attribute_indices[iVar4])) {
              local_48->collapse_viability = 1;
              return;
            }
            iVar4 = iVar4 + 1;
            pCVar6 = (CLodMesh *)&pCVar6->vertex_data;
          } while (iVar4 < this_ptr->active_attribute_count);
        }
        local_44 = local_44 + 1;
        pCVar3 = (CLodEdge *)&pCVar3->vertex_idx_2;
        local_4c = pCVar1;
      } while (local_44 < local_48->adjacent_tri_count);
    }
    if ((full_check != 0) && (local_40 = 0, local_28 = local_48, 0 < local_48->adjacent_tri_count))
    {
      do {
        local_24 = local_48->adjacent_tri_indices[0];
        local_2c = this_ptr->tri_data + local_24;
        local_30 = local_40 + 1;
        if (local_30 < local_28->adjacent_tri_count) {
          local_38 = &local_2c->normal;
          local_34 = local_28->adjacent_tri_indices + local_40 + -9;
          do {
            pCVar1 = local_2c;
            local_18 = local_34[10];
            this_ptr_00 = this_ptr->tri_data + local_18;
            fVar2 = local_38->z * (this_ptr_00->normal).z +
                    local_38->x * (this_ptr_00->normal).x + local_38->y * (this_ptr_00->normal).y;
            if (local_28->collapse_curvature < 2) {
              if (fVar2 <= (float)-0.25879999999999997) {
                local_28->collapse_curvature = 1;
              }
              if (fVar2 <= (float)-0.5) {
                local_28->collapse_curvature = 2;
              }
            }
            if (((g_LodReplayMode == 0) && (this_ptr->attribute_enabled_flags[0] != 0)) &&
               (local_28->collapse_viability < 2)) {
              iStack_14 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                                    (local_2c,local_28->vertex_idx_1);
              iVar4 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                                (pCVar1,local_28->vertex_idx_2);
              local_5c = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                                   (this_ptr_00,local_28->vertex_idx_1);
              corner_idx = 0;
              iVar5 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                                (this_ptr_00,local_28->vertex_idx_2);
              local_1c = local_2c->attribute_indices + iVar4 * 2;
              local_20 = this_ptr_00->attribute_indices + iVar5 * 2;
              piVar8 = local_2c->attribute_indices + iStack_14 * 2;
              piVar7 = this_ptr_00->attribute_indices + local_5c * 2;
              do {
                if (((float)3 <
                     ABS((*(float (*) [2])(piVar8 + 7))[0] - (*(float (*) [2])(piVar7 + 7))[0])) ||
                   ((float)3 <
                    ABS((float)local_1c[corner_idx + 7] - (float)local_20[corner_idx + 7]))) {
                  local_28->collapse_viability = 2;
                  break;
                }
                shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
                          (this_ptr,local_24,corner_idx,&local_70,&local_58);
                shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
                          (this_ptr,local_18,corner_idx,&local_7c,afStack_54);
                if (local_70.z * local_7c.z + local_70.x * local_7c.x + local_70.y * local_7c.y <=
                    SQRT(local_7c.z * local_7c.z + local_7c.x * local_7c.x + local_7c.y * local_7c.y
                        ) * SQRT(local_70.z * local_70.z +
                                 local_70.x * local_70.x + local_70.y * local_70.y) * fVar2 *
                    (float)0.5) {
                  local_28->collapse_viability = 2;
                  break;
                }
                piVar8 = piVar8 + 1;
                corner_idx = corner_idx + 1;
                piVar7 = piVar7 + 1;
              } while (corner_idx < 2);
            }
            local_34 = local_34 + 1;
            local_30 = local_30 + 1;
          } while (local_30 < local_28->adjacent_tri_count);
        }
        local_48 = (CLodEdge *)&local_48->vertex_idx_2;
        local_40 = local_40 + 1;
      } while (local_40 < local_28->adjacent_tri_count);
    }
  }
  return;
}
