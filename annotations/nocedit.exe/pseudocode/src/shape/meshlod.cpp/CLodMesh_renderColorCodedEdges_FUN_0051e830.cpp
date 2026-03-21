// Name: shape_meshlod.cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830
// Address: 0051e830
// Address Range: [[0051e830, 0051e983] [0060df11, 0060dfc0]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(CLodMesh *this_ptr,int backface_culling_enabled)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(CLodMesh *this_ptr,int backface_culling_enabled)

{
  CLodFace *pCVar1;
  SRenderVertex vertex1;
  SRenderVertex vertex2;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  int *piVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  local_14 = 0;
  if (0 < this_ptr->edge_count) {
    local_18 = 0;
    do {
      piVar9 = (int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + local_18 + -0x28);
      if (piVar9[5] == 0) {
        if (backface_culling_enabled != 0) {
          iVar5 = 0;
          piVar6 = piVar9;
          if (0 < piVar9[9]) {
            do {
              iVar2 = piVar6[10];
              pCVar1 = this_ptr->tri_data;
              pSVar8 = g_CDemonRendererPtr2->vertex_buffer_ptr;
              iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                (pSVar8 + pCVar1[iVar2].vertex_idx_0,
                                 pSVar8 + pCVar1[iVar2].vertex_idx_1,
                                 pSVar8 + pCVar1[iVar2].vertex_idx_2);
              if (iVar2 == 0) break;
              iVar5 = iVar5 + 1;
              piVar6 = piVar6 + 1;
            } while (iVar5 < piVar9[9]);
          }
          if (piVar9[9] <= iVar5) goto LAB_0051e85d;
        }
        if (piVar9[6] == 0) {
          if (piVar9[7] == 0) {
            g_ActiveRenderColor = 2;
          }
          else {
            g_ActiveRenderColor = 0xfa;
          }
        }
        else if (piVar9[6] == 1) {
          if (piVar9[7] == 0) {
            g_ActiveRenderColor = 3;
          }
          else {
            g_ActiveRenderColor = 0xfb;
          }
        }
        else if (piVar9[7] == 0) {
          g_ActiveRenderColor = 1;
        }
        else {
          g_ActiveRenderColor = 0xf9;
        }
        pSVar8 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        pSVar7 = pSVar8 + piVar9[1];
        iVar5 = (pSVar7->projected_vertex).transformed_x;
        iVar2 = (pSVar7->projected_vertex).transformed_y;
        iVar22 = (pSVar7->projected_vertex).transformed_z;
        iVar23 = (pSVar7->projected_vertex).inv_z;
        iVar24 = (pSVar7->projected_vertex).screen_x;
        iVar25 = (pSVar7->projected_vertex).screen_y;
        iVar26 = pSVar7->u;
        iVar27 = pSVar7->v;
        iVar28 = pSVar7->r;
        iVar29 = pSVar7->g;
        iVar30 = pSVar7->b;
        iVar3 = pSVar7->a;
        piVar6 = (int *)&stack0xffffffb8;
        iVar31 = iVar3;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = (pSVar7->projected_vertex).transformed_x;
          pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar10 * -2 + 1) * 4);
          piVar6 = piVar6 + (uint)bVar10 * -2 + 1;
        }
        pSVar8 = pSVar8 + *piVar9;
        iVar3 = (pSVar8->projected_vertex).transformed_x;
        iVar11 = (pSVar8->projected_vertex).transformed_y;
        iVar12 = (pSVar8->projected_vertex).transformed_z;
        iVar13 = (pSVar8->projected_vertex).inv_z;
        iVar14 = (pSVar8->projected_vertex).screen_x;
        iVar15 = (pSVar8->projected_vertex).screen_y;
        iVar16 = pSVar8->u;
        iVar17 = pSVar8->v;
        iVar18 = pSVar8->r;
        iVar19 = pSVar8->g;
        iVar20 = pSVar8->b;
        iVar4 = pSVar8->a;
        piVar9 = (int *)&stack0xffffff88;
        iVar21 = iVar4;
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar9 = (pSVar8->projected_vertex).transformed_x;
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar10 * -2 + 1) * 4);
          piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
        }
        vertex1.projected_vertex.transformed_y = iVar11;
        vertex1.projected_vertex.transformed_x = iVar3;
        vertex1.projected_vertex.transformed_z = iVar12;
        vertex1.projected_vertex.inv_z = iVar13;
        vertex1.projected_vertex.screen_x = iVar14;
        vertex1.projected_vertex.screen_y = iVar15;
        vertex1.u = iVar16;
        vertex1.v = iVar17;
        vertex1.r = iVar18;
        vertex1.g = iVar19;
        vertex1.b = iVar20;
        vertex1.a = iVar21;
        vertex2.projected_vertex.transformed_y = iVar2;
        vertex2.projected_vertex.transformed_x = iVar5;
        vertex2.projected_vertex.transformed_z = iVar22;
        vertex2.projected_vertex.inv_z = iVar23;
        vertex2.projected_vertex.screen_x = iVar24;
        vertex2.projected_vertex.screen_y = iVar25;
        vertex2.u = iVar26;
        vertex2.v = iVar27;
        vertex2.r = iVar28;
        vertex2.g = iVar29;
        vertex2.b = iVar30;
        vertex2.a = iVar31;
        engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
      }
LAB_0051e85d:
      local_18 = local_18 + 0xf0;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->edge_count);
  }
  return;
}
