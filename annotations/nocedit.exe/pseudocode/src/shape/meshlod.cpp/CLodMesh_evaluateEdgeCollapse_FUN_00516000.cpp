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
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  CLodFace *this_ptr_00;
  int *piVar7;
  float *out_offset;
  byte local_6c [12];
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  CLodFace *local_50;
  CLodEdge *local_4c;
  int local_48;
  float local_44;
  CLodFace *local_40;
  CVector3f *local_3c;
  int *local_38;
  int local_34;
  CLodFace *local_30;
  CLodEdge *local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *piStack_14;
  
  local_4c = this_ptr->edges_ptr + edge_index;
  if (full_check == 0) {
    if (local_4c->collapse_viability < 2) {
      local_4c->collapse_viability = 0;
    }
  }
  else {
    local_4c->collapse_viability = 0;
    local_4c->collapse_curvature = 0;
  }
  if (local_4c->adjacent_tri_count < 2) {
    local_4c->collapse_curvature = 2;
    return;
  }
  if (local_4c->collapse_viability < 2) {
    pCVar1 = this_ptr->tri_data;
    local_40 = pCVar1 + local_4c->adjacent_tri_indices[0];
    if ((g_LodReplayMode == 0) &&
       (local_48 = 1, pCVar3 = local_4c, 1 < local_4c->adjacent_tri_count)) {
      do {
        iVar4 = 0;
        pCVar6 = this_ptr;
        if (0 < this_ptr->active_attribute_count) {
          do {
            if ((pCVar6->attribute_enabled_flags[0] != 0) &&
               (local_40->attribute_indices[iVar4] !=
                pCVar1[pCVar3->adjacent_tri_indices[1]].attribute_indices[iVar4])) {
              local_4c->collapse_viability = 1;
              return;
            }
            iVar4 = iVar4 + 1;
            pCVar6 = (CLodMesh *)&pCVar6->vertex_data;
          } while (iVar4 < this_ptr->active_attribute_count);
        }
        local_48 = local_48 + 1;
        pCVar3 = (CLodEdge *)&pCVar3->vertex_idx_2;
        local_50 = pCVar1;
      } while (local_48 < local_4c->adjacent_tri_count);
    }
    if ((full_check != 0) && (local_44 = 0.0, local_2c = local_4c, 0 < local_4c->adjacent_tri_count)
       ) {
      do {
        local_28 = local_4c->adjacent_tri_indices[0];
        local_30 = this_ptr->tri_data + local_28;
        local_34 = (int)local_44 + 1;
        if (local_34 < local_2c->adjacent_tri_count) {
          local_3c = &local_30->normal;
          local_38 = local_2c->adjacent_tri_indices + (int)local_44 + -9;
          do {
            pCVar1 = local_30;
            local_1c = local_38[10];
            this_ptr_00 = this_ptr->tri_data + local_1c;
            fVar2 = local_3c->z * (this_ptr_00->normal).z +
                    local_3c->x * (this_ptr_00->normal).x + local_3c->y * (this_ptr_00->normal).y;
            if (local_2c->collapse_curvature < 2) {
              if (fVar2 <= (float)-0.25879999999999997) {
                local_2c->collapse_curvature = 1;
              }
              if (fVar2 <= (float)-0.5) {
                local_2c->collapse_curvature = 2;
              }
            }
            if (((g_LodReplayMode == 0) && (this_ptr->attribute_enabled_flags[0] != 0)) &&
               (local_2c->collapse_viability < 2)) {
              piStack_14 = (int *)shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                                            (local_30,local_2c->vertex_idx_1);
              iVar4 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                                (pCVar1,*(int *)(local_28 + 4));
              fStack_54 = (float)shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                                           (this_ptr_00,*local_24);
              corner_idx = 0;
              iVar5 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                                (this_ptr_00,*(int *)(local_20 + 4));
              iVar4 = local_20 + iVar4 * 8;
              piStack_14 = this_ptr_00->attribute_indices + iVar5 * 2;
              iVar5 = unaff_ESI * 8 + local_20;
              piVar7 = this_ptr_00->attribute_indices + (int)local_50 * 2;
              do {
                if (((float)3 <
                     ABS(*(float *)(iVar5 + 0x1c) - (*(float (*) [2])(piVar7 + 7))[0])) ||
                   ((float)3 <
                    ABS(*(float *)(iVar4 + corner_idx * 4 + 0x1c) -
                        (float)piStack_14[corner_idx + 7]))) {
                  *(uint *)(local_1c + 0x18) = 2;
                  break;
                }
                shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
                          (this_ptr,local_18,corner_idx,(CVector3f *)(local_6c + 8),
                           (float *)&local_4c);
                out_offset = &local_44;
                shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
                          (this_ptr,unaff_ESI,corner_idx,(CVector3f *)local_6c,out_offset);
                if (fStack_54 * local_60 +
                    local_5c * (float)local_6c._4_4_ + local_58 * (float)local_6c._8_4_ <=
                    SQRT(local_60 * local_60 +
                         (float)local_6c._4_4_ * (float)local_6c._4_4_ +
                         (float)local_6c._8_4_ * (float)local_6c._8_4_) *
                    SQRT(fStack_54 * fStack_54 + local_5c * local_5c + local_58 * local_58) *
                    (float)out_offset * (float)0.5) {
                  piStack_14[6] = 2;
                  break;
                }
                iVar5 = iVar5 + 4;
                corner_idx = corner_idx + 1;
                piVar7 = piVar7 + 1;
              } while (corner_idx < 2);
            }
            local_38 = local_38 + 1;
            local_34 = local_34 + 1;
          } while (local_34 < local_2c->adjacent_tri_count);
        }
        local_4c = (CLodEdge *)&local_4c->vertex_idx_2;
        local_44 = (float)((int)local_44 + 1);
      } while ((int)local_44 < local_2c->adjacent_tri_count);
    }
  }
  return;
}
