// Name: shape_meshlod.cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830
// Address: 0051e830
// Address Range: [[0051e830, 0051e983]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(CLodMesh * this_ptr, int backface_culling_enabled)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830
          (CLodMesh *this_ptr,int backface_culling_enabled)

{
  CLodFace *pCVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  int *piVar7;
  byte bVar8;
  SRenderVertex *in_stack_ffffff88;
  SRenderVertex *in_stack_ffffff8c;
  int aiStack_48 [8];
  uint uStack_28;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  local_14 = 0;
  if (0 < this_ptr->edge_count) {
    local_18 = 0;
    do {
      piVar7 = (int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + local_18 + -0x28);
      if (piVar7[5] == 0) {
        if (backface_culling_enabled != 0) {
          iVar3 = 0;
          piVar4 = piVar7;
          if (0 < piVar7[9]) {
            do {
              iVar2 = piVar4[10];
              pCVar1 = this_ptr->tri_data;
              pSVar6 = g_CDemonRendererPtr->vertex_buffer_ptr;
              uStack_28 = 0x51e8ca;
              iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                (pSVar6 + pCVar1[iVar2].vertex_idx_0,
                                 pSVar6 + pCVar1[iVar2].vertex_idx_1,
                                 pSVar6 + pCVar1[iVar2].vertex_idx_2);
              if (iVar2 == 0) break;
              iVar3 = iVar3 + 1;
              piVar4 = piVar4 + 1;
            } while (iVar3 < piVar7[9]);
          }
          if (piVar7[9] <= iVar3) goto LAB_0051e85d;
        }
        if (piVar7[6] == 0) {
          if (piVar7[7] == 0) {
            g_ActiveRenderColor = 2;
          }
          else {
            g_ActiveRenderColor = 0xfa;
          }
        }
        else if (piVar7[6] == 1) {
          if (piVar7[7] == 0) {
            g_ActiveRenderColor = 3;
          }
          else {
            g_ActiveRenderColor = 0xfb;
          }
        }
        else if (piVar7[7] == 0) {
          g_ActiveRenderColor = 1;
        }
        else {
          g_ActiveRenderColor = 0xf9;
        }
        pSVar6 = g_CDemonRendererPtr->vertex_buffer_ptr;
        pSVar5 = pSVar6 + piVar7[1];
        piVar4 = aiStack_48;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar4 = (pSVar5->projected_vertex).transformed_x;
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
          piVar4 = piVar4 + (uint)bVar8 * -2 + 1;
        }
        pSVar6 = pSVar6 + *piVar7;
        piVar7 = (int *)&stack0xffffff88;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar7 = (pSVar6->projected_vertex).transformed_x;
          pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
          piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
        }
        engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff88,in_stack_ffffff8c);
      }
LAB_0051e85d:
      local_18 = local_18 + 0xf0;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->edge_count);
  }
  return;
}
