// Name: shape_meshlod.cpp_CLodMesh_renderWireframe_FUN_0051e770
// Address: 0051e770
// Address Range: [[0051e770, 0051e826]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  int *piVar8;
  byte bVar9;
  SRenderVertex in_stack_ffffff84;
  SRenderVertex in_stack_ffffffb4;
  int local_1c;
  int local_18;
  
  bVar9 = 0;
  local_18 = 0;
  if (0 < this_ptr->tri_count) {
    local_1c = 0;
    do {
      iVar2 = (int)this_ptr->tri_data->attribute_indices + local_1c;
      if (*(int *)(iVar2 + 0x40) == 0) {
        iVar3 = 0;
        iVar4 = iVar2;
        do {
          iVar7 = iVar3 + 1;
          if (2 < iVar7) {
            iVar7 = 0;
          }
          pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar5 = pSVar6 + *(int *)(iVar7 * 4 + iVar2 + 0x10);
          piVar8 = (int *)&stack0xffffffb4;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar8 = (pSVar5->projected_vertex).transformed_x;
            pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar9 * -2 + 1) * 4);
            piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
          }
          piVar8 = (int *)(iVar4 + 0x10);
          iVar4 = iVar4 + 4;
          iVar3 = iVar3 + 1;
          pSVar6 = pSVar6 + *piVar8;
          piVar8 = (int *)&stack0xffffff84;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar8 = (pSVar6->projected_vertex).transformed_x;
            pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar9 * -2 + 1) * 4);
            piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff84,in_stack_ffffffb4);
        } while (iVar3 < 3);
      }
      local_1c = local_1c + 0x8c;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->tri_count);
  }
  return;
}
