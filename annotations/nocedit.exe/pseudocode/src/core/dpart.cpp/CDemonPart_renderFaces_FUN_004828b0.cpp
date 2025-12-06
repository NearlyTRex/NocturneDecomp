// Name: core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0
// Address: 004828b0
// Address Range: [[004828b0, 00482a04]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0(CDemonPart * this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_renderFaces_FUN_004828b0(CDemonPart *this_ptr)

{
  int iVar1;
  SSurfacePlane *plane;
  BADSPACEBASE *in_ESP;
  uint uVar2;
  int iStack_64;
  
  iStack_64 = 0x4828c9;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,0);
  iVar1 = this_ptr->vertex_count / this_ptr->vertex_group_size;
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,iVar1,
             &this_ptr->vertex_positions[this_ptr->current_vertex_group * iVar1].x);
  if (g_CDemonRendererPtr->advanced_culling_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  }
  plane = this_ptr->face_data;
  uVar2 = 0;
  if (0 < this_ptr->face_count) {
    do {
      iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&plane->plane);
      if (iVar1 != 0) {
        engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                  (g_CDemonRendererPtr,-((uVar2 & 0x7f) + 0x80));
        core_set_cpp_CDemonSet_FUN_00570960(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&iStack_64,1);
      }
      uVar2 = uVar2 + 1;
      plane = plane + 1;
    } while ((int)uVar2 < this_ptr->face_count);
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}
