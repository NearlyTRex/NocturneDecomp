// Name: shape_meshlod.cpp_CLodMesh_renderWireframe_FUN_0051e770
// Address: 0051e770
// Address Range: [[0051e770, 0051e826]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh *this_ptr)

{
  SRenderVertex *pSVar1;
  int iVar1;
  int iVar5;
  int iVar2;
  int iVar3;
  int iVar6;
  int iVar4;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  int *piVar7;
  int *piVar8;
  byte bVar9;
  int local_1c;
  int local_18;
  SRenderVertex in_stack_ffffff84;
  SRenderVertex in_stack_ffffffb4;
  
  bVar9 = 0;
  local_18 = 0;
  if (0 < this_ptr->tri_count) {
    local_1c = 0;
    do {
      iVar2 = (int)this_ptr->tri_data->attribute_indices + local_1c;
      if (*(int *)(iVar2 + 0x40) == 0) {
        iVar3 = 0;
        iVar6 = iVar2;
        do {
          iVar7 = iVar3 + 1;
          if (2 < iVar7) {
            iVar7 = 0;
          }
          pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar5 = pSVar1 + *(int *)(iVar7 * 4 + iVar2 + 0x10);
          piVar7 = (int *)&stack0xffffffb4;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar9 * -8 + 4);
            *piVar7 = (pSVar5->projected_vertex).transformed_x;
            pSVar5 = pSVar5;
            piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
          }
          iVar4 = iVar6 + 4;
          iVar3 = iVar3 + 1;
          pSVar6 = pSVar1 + *(int *)(iVar6 + 0x10);
          piVar8 = (int *)&stack0xffffff84;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
            pSVar6 = (SRenderVertex *)((int)pSVar6 + (uint)bVar9 * -8 + 4);
            *piVar8 = (pSVar6->projected_vertex).transformed_x;
            pSVar6 = pSVar6;
            piVar8 = piVar8;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff84,in_stack_ffffffb4);
          iVar6 = iVar4;
        } while (iVar3 < 3);
      }
      local_1c = local_1c + 0x8c;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->tri_count);
  }
  return;
}
