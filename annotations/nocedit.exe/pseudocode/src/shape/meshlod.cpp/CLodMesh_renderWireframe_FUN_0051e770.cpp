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
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  int iVar6;
  int *piVar7;
  byte bVar8;
  SRenderVertex *in_stack_ffffff84;
  SRenderVertex *in_stack_ffffff88;
  int aiStack_4c [12];
  int local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  local_18 = 0;
  if (0 < this_ptr->tri_count) {
    local_1c = 0;
    do {
      iVar3 = (int)this_ptr->tri_data->attribute_indices + local_1c;
      if (*(int *)(iVar3 + 0x40) == 0) {
        iVar2 = 0;
        local_14 = iVar3;
        do {
          iVar6 = iVar2 + 1;
          if (2 < iVar6) {
            iVar6 = 0;
          }
          pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar4 = pSVar5 + *(int *)(iVar6 * 4 + local_14 + 0x10);
          piVar7 = aiStack_4c;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar7 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
            piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
          }
          piVar7 = (int *)(iVar3 + 0x10);
          iVar3 = iVar3 + 4;
          iVar2 = iVar2 + 1;
          pSVar5 = pSVar5 + *piVar7;
          piVar7 = (int *)&stack0xffffff84;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar7 = (pSVar5->projected_vertex).transformed_x;
            pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
            piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff84,in_stack_ffffff88);
        } while (iVar2 < 3);
      }
      local_1c = local_1c + 0x8c;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->tri_count);
  }
  return;
}
