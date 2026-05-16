// Name: core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_0059b5a0
// Address: 0059b5a0
// MANUAL RECONSTRUCTION
// Address Range: [[0059b5a0, 0059b635]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_0059b5a0(CDeformableModel *this_ptr,int lod_level)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_0059b5a0(CDeformableModel *this_ptr,int lod_level)

{
  SInputFace *pSVar3;
  int iVar4;

  for (iVar4 = 0; iVar4 < this_ptr->tri_count[lod_level]; iVar4 = iVar4 + 1) {
    pSVar3 = this_ptr->tri_data_ptr[lod_level];
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
              (g_CDemonRendererPtr2,
               (uint)pSVar3[iVar4].vertex_indices.vertex_index_0,
               (uint)pSVar3[iVar4].vertex_indices.vertex_index_1);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
              (g_CDemonRendererPtr2,
               (uint)pSVar3[iVar4].vertex_indices.vertex_index_1,
               (uint)pSVar3[iVar4].vertex_indices.vertex_index_2);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
              (g_CDemonRendererPtr2,
               (uint)pSVar3[iVar4].vertex_indices.vertex_index_2,
               (uint)pSVar3[iVar4].vertex_indices.vertex_index_0);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  return;
}
