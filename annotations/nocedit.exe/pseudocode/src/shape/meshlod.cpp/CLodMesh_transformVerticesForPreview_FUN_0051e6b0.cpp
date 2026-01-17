// Name: shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0
// Address: 0051e6b0
// Address Range: [[0051e6b0, 0051e76b]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(CLodMesh *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CVector3i local_1c;
  CVector3f local_10;
  
  iVar2 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                (this_ptr,&local_10,
                 (CVector3f *)(this_ptr->vertex_data->lod_workspace + iVar4 + -0x10));
      local_1c.x = (int)ROUND(local_10.x * 256.0f);
      local_1c.y = (int)ROUND(local_10.y * 256.0f);
      local_1c.z = (int)ROUND(local_10.z * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar3),&local_1c);
      pCVar1 = g_CDemonRendererPtr;
      *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar3) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->color + iVar3) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar3) = 0xffff;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x4c4;
      iVar3 = iVar3 + 0x30;
    } while (iVar2 < this_ptr->vertex_count);
  }
  return;
}
