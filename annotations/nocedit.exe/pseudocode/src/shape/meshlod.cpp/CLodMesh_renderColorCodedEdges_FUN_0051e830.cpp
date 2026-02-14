// Name: shape_meshlod.cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830
// Address: 0051e830
// Address Range: [[0051e830, 0051e983]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(CLodMesh *this_ptr,int backface_culling_enabled)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_48 */
/* WARNING: Variable defined which should be unmapped: local_78 */

void __cdecl shape_meshlod_cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(CLodMesh *this_ptr,int backface_culling_enabled)

{
  CLodFace *pCVar1;
  SRenderVertex vertex2;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  byte bVar9;
  SRenderVertex local_78;
  SRenderVertex local_48;
  int local_18;
  int local_14;
  
  bVar9 = 0;
  local_14 = 0;
  if (0 < this_ptr->edge_count) {
    local_18 = 0;
    do {
      piVar4 = (int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + local_18 + -0x28);
      if (piVar4[5] == 0) {
        if (backface_culling_enabled != 0) {
          iVar3 = 0;
          piVar5 = piVar4;
          if (0 < piVar4[9]) {
            do {
              iVar2 = piVar5[10];
              pCVar1 = this_ptr->tri_data;
              pSVar7 = g_CDemonRendererPtr2->vertex_buffer_ptr;
              local_48.w_recip = (float)(pSVar7 + pCVar1[iVar2].vertex_idx_2);
              local_48.fog = (int)(pSVar7 + pCVar1[iVar2].vertex_idx_1);
              local_48.color = (int)(pSVar7 + pCVar1[iVar2].vertex_idx_0);
              local_48.light = 0x51e8ca;
              iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                ((SRenderVertex *)local_48.color,(SRenderVertex *)local_48.fog,
                                 (SRenderVertex *)local_48.w_recip);
              if (iVar2 == 0) break;
              iVar3 = iVar3 + 1;
              piVar5 = piVar5 + 1;
            } while (iVar3 < piVar4[9]);
          }
          if (piVar4[9] <= iVar3) goto LAB_0051e85d;
        }
        if (piVar4[6] == 0) {
          if (piVar4[7] == 0) {
            g_ActiveRenderColor = 2;
          }
          else {
            g_ActiveRenderColor = 0xfa;
          }
        }
        else if (piVar4[6] == 1) {
          if (piVar4[7] == 0) {
            g_ActiveRenderColor = 3;
          }
          else {
            g_ActiveRenderColor = 0xfb;
          }
        }
        else if (piVar4[7] == 0) {
          g_ActiveRenderColor = 1;
        }
        else {
          g_ActiveRenderColor = 0xf9;
        }
        pSVar7 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        pSVar6 = pSVar7 + piVar4[1];
        pSVar8 = &local_48;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(int *)pSVar8 = (pSVar6->projected_vertex).transformed_x;
          pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar9 * -2 + 1) * 4);
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
        }
        pSVar7 = pSVar7 + *piVar4;
        pSVar6 = &local_78;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(int *)pSVar6 = (pSVar7->projected_vertex).transformed_x;
          pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
          pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar9 * -2 + 1) * 4);
        }
        vertex2.light = local_48.light;
        vertex2.projected_vertex = local_48.projected_vertex;
        vertex2.u = local_48.u;
        vertex2.v = local_48.v;
        vertex2.color = local_48.color;
        vertex2.fog = local_48.fog;
        vertex2.w_recip = local_48.w_recip;
        engine_3d_c_clipAndDrawLine2D_FUN_00407d70(local_78,vertex2);
      }
LAB_0051e85d:
      local_18 = local_18 + 0xf0;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->edge_count);
  }
  return;
}
