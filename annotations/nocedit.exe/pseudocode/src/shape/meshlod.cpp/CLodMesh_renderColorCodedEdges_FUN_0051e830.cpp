// Name: shape_meshlod.cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830
// Address: 0051e830
// Address Range: [[0051e830, 0051e983]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(CLodMesh *this_ptr,int backface_culling_enabled)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(CLodMesh *this_ptr,int backface_culling_enabled)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  int *piVar5;
  int *piVar4;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  int local_18;
  int local_14;
  SRenderVertex *in_stack_ffffffdc;
  SRenderVertex *in_stack_ffffffe0;
  SRenderVertex *in_stack_ffffffe4;
  SRenderVertex in_stack_ffffff88;
  CLodFace *pCVar1;
  SRenderVertex vertex2;
  byte auVar9 [24];
  byte in_stack_ffffffb8 [32];
  uint in_stack_ffffffd8;
  
  bVar8 = 0;
  local_14 = 0;
  if (0 < this_ptr->edge_count) {
    local_18 = 0;
    do {
      piVar5 = (int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + local_18 + -0x28);
      if (piVar5[5] == 0) {
        if (backface_culling_enabled != 0) {
          iVar3 = 0;
          piVar4 = piVar5;
          if (0 < piVar5[9]) {
            do {
              iVar4 = piVar4[10];
              pCVar1 = this_ptr->tri_data;
              pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr;
              in_stack_ffffffe4 = pSVar1 + pCVar1[iVar4].vertex_idx_2;
              in_stack_ffffffe0 = pSVar1 + pCVar1[iVar4].vertex_idx_1;
              in_stack_ffffffdc = pSVar1 + pCVar1[iVar4].vertex_idx_0;
              in_stack_ffffffd8 = 0x51e8ca;
              iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                (in_stack_ffffffdc,in_stack_ffffffe0,in_stack_ffffffe4);
              if (iVar2 == 0) break;
              iVar3 = iVar3 + 1;
              piVar4 = piVar4 + 1;
            } while (iVar3 < piVar5[9]);
          }
          if (piVar5[9] <= iVar3) goto LAB_0051e85d;
        }
        if (piVar5[6] == 0) {
          if (piVar5[7] == 0) {
            g_ActiveRenderColor = 2;
          }
          else {
            g_ActiveRenderColor = 0xfa;
          }
        }
        else if (piVar5[6] == 1) {
          if (piVar5[7] == 0) {
            g_ActiveRenderColor = 3;
          }
          else {
            g_ActiveRenderColor = 0xfb;
          }
        }
        else if (piVar5[7] == 0) {
          g_ActiveRenderColor = 1;
        }
        else {
          g_ActiveRenderColor = 0xf9;
        }
        pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        pSVar5 = pSVar1 + piVar5[1];
        piVar6 = (int *)&stack0xffffffb8;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar8 * -8 + 4);
          *piVar6 = (pSVar5->projected_vertex).transformed_x;
          pSVar5 = pSVar5;
          piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
        }
        pSVar6 = pSVar1 + *piVar5;
        piVar7 = (int *)&stack0xffffff88;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
          pSVar6 = (SRenderVertex *)((int)pSVar6 + (uint)bVar8 * -8 + 4);
          *piVar7 = (pSVar6->projected_vertex).transformed_x;
          pSVar6 = pSVar6;
          piVar7 = piVar7;
        }
        vertex2.r = in_stack_ffffffd8;
        auVar9 = in_stack_ffffffb8._0_24_;
        vertex2.projected_vertex.transformed_x = auVar9._0_4_;
        vertex2.projected_vertex.transformed_y = auVar9._4_4_;
        vertex2.projected_vertex.transformed_z = auVar9._8_4_;
        vertex2.projected_vertex.inv_z = auVar9._12_4_;
        vertex2.projected_vertex.screen_x = auVar9._16_4_;
        vertex2.projected_vertex.screen_y = auVar9._20_4_;
        vertex2.u = in_stack_ffffffb8._24_4_;
        vertex2.v = in_stack_ffffffb8._28_4_;
        vertex2.g = (int)in_stack_ffffffdc;
        vertex2.b = (int)in_stack_ffffffe0;
        vertex2.a = (int)in_stack_ffffffe4;
        engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff88,vertex2);
      }
LAB_0051e85d:
      local_18 = local_18 + 0xf0;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->edge_count);
  }
  return;
}
