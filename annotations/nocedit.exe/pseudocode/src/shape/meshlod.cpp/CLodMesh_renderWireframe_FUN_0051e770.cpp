// Name: shape_meshlod.cpp_CLodMesh_renderWireframe_FUN_0051e770
// Address: 0051e770
// Address Range: [[0051e770, 0051e826] [0060de5d, 0060df10]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh *this_ptr)

{
  SRenderVertex vertex1;
  SRenderVertex vertex2;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  int iVar8;
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
  int iVar32;
  int local_1c;
  int local_18;
  
  bVar10 = 0;
  local_18 = 0;
  if (0 < this_ptr->tri_count) {
    local_1c = 0;
    do {
      iVar3 = (int)this_ptr->tri_data->attribute_indices + local_1c;
      if (*(int *)(iVar3 + 0x40) == 0) {
        iVar4 = 0;
        iVar5 = iVar3;
        do {
          iVar8 = iVar4 + 1;
          if (2 < iVar8) {
            iVar8 = 0;
          }
          pSVar7 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar6 = pSVar7 + *(int *)(iVar8 * 4 + iVar3 + 0x10);
          iVar8 = (pSVar6->projected_vertex).transformed_x;
          iVar22 = (pSVar6->projected_vertex).transformed_y;
          iVar23 = (pSVar6->projected_vertex).transformed_z;
          iVar24 = (pSVar6->projected_vertex).inv_z;
          iVar25 = (pSVar6->projected_vertex).screen_x;
          iVar26 = (pSVar6->projected_vertex).screen_y;
          iVar27 = pSVar6->u;
          iVar28 = pSVar6->v;
          iVar29 = pSVar6->r;
          iVar30 = pSVar6->g;
          iVar31 = pSVar6->b;
          iVar1 = pSVar6->a;
          piVar9 = (int *)&stack0xffffffb4;
          iVar32 = iVar1;
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar9 = (pSVar6->projected_vertex).transformed_x;
            pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar10 * -2 + 1) * 4);
            piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
          }
          pSVar7 = pSVar7 + *(int *)(iVar5 + 0x10);
          iVar5 = iVar5 + 4;
          iVar4 = iVar4 + 1;
          iVar1 = (pSVar7->projected_vertex).transformed_x;
          iVar11 = (pSVar7->projected_vertex).transformed_y;
          iVar12 = (pSVar7->projected_vertex).transformed_z;
          iVar13 = (pSVar7->projected_vertex).inv_z;
          iVar14 = (pSVar7->projected_vertex).screen_x;
          iVar15 = (pSVar7->projected_vertex).screen_y;
          iVar16 = pSVar7->u;
          iVar17 = pSVar7->v;
          iVar18 = pSVar7->r;
          iVar19 = pSVar7->g;
          iVar20 = pSVar7->b;
          iVar2 = pSVar7->a;
          piVar9 = (int *)&stack0xffffff84;
          iVar21 = iVar2;
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar9 = (pSVar7->projected_vertex).transformed_x;
            pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar10 * -2 + 1) * 4);
            piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
          }
          vertex1.projected_vertex.transformed_y = iVar11;
          vertex1.projected_vertex.transformed_x = iVar1;
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
          vertex2.projected_vertex.transformed_y = iVar22;
          vertex2.projected_vertex.transformed_x = iVar8;
          vertex2.projected_vertex.transformed_z = iVar23;
          vertex2.projected_vertex.inv_z = iVar24;
          vertex2.projected_vertex.screen_x = iVar25;
          vertex2.projected_vertex.screen_y = iVar26;
          vertex2.u = iVar27;
          vertex2.v = iVar28;
          vertex2.r = iVar29;
          vertex2.g = iVar30;
          vertex2.b = iVar31;
          vertex2.a = iVar32;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
        } while (iVar4 < 3);
      }
      local_1c = local_1c + 0x8c;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->tri_count);
  }
  return;
}
