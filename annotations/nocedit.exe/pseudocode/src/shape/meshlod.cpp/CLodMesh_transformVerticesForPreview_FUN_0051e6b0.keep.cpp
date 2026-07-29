// Name: shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0
// Address: 0051e6b0
// MANUAL RECONSTRUCTION
// Address Range: [[0051e6b0, 0051e76b]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(CLodMesh *this_ptr)

{
  int iVar2;
  CVector3i local_1c;
  CVector3f local_10;
  CDemonRenderer *pCVar1;

  iVar2 = 0;
  if (0 < this_ptr->vertex_count) {
    do {
      shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                (this_ptr,&local_10,&this_ptr->vertex_data[iVar2].position);
      local_1c.x = (int)ROUND(local_10.x * 256.0f);
      local_1c.y = (int)ROUND(local_10.y * 256.0f);
      local_1c.z = (int)ROUND(local_10.z * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar2].projected_vertex,&local_1c);
      pCVar1 = g_CDemonRendererPtr2;
      g_CDemonRendererPtr2->vertex_buffer_ptr[iVar2].r = 0xffff;
      pCVar1->vertex_buffer_ptr[iVar2].g = 0xffff;
      pCVar1->vertex_buffer_ptr[iVar2].b = 0xffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->vertex_count);
  }
  return;
}
