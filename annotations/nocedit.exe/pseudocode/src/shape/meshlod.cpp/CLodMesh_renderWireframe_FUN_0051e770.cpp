// Name: shape_meshlod.cpp_CLodMesh_renderWireframe_FUN_0051e770
// Address: 0051e770
// Address Range: [[0051e770, 0051e826]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh * this_ptr)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_7c */
/* WARNING: Variable defined which should be unmapped: local_4c */

void __cdecl shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  int iVar8;
  SRenderVertex *pSVar9;
  byte bVar10;
  SRenderVertex local_7c;
  SRenderVertex local_4c;
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
          pSVar9 = &local_4c;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(int *)pSVar9 = (pSVar6->projected_vertex).transformed_x;
            pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar10 * -2 + 1) * 4);
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
          }
          piVar1 = (int *)(iVar5 + 0x10);
          iVar5 = iVar5 + 4;
          iVar4 = iVar4 + 1;
          pSVar7 = pSVar7 + *piVar1;
          pSVar6 = &local_7c;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(int *)pSVar6 = (pSVar7->projected_vertex).transformed_x;
            pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar10 * -2 + 1) * 4);
            pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar10 * -2 + 1) * 4);
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(local_7c,local_4c);
        } while (iVar4 < 3);
      }
      local_1c = local_1c + 0x8c;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->tri_count);
  }
  return;
}
