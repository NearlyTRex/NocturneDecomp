// Name: core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0
// Address: 004828b0
// Address Range: [[004828b0, 00482a04]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_renderFaces_FUN_004828b0(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_renderFaces_FUN_004828b0(CDemonPart *this_ptr)

{
  int iVar1;
  SSurfacePlane *plane;
  uint uVar2;
  SMRGLHeaderPrimitive local_58;
  int local_40;
  int local_34;
  int local_28;
  int local_1c;
  
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,0);
  iVar1 = this_ptr->vertex_count / this_ptr->vertex_group_size;
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,iVar1,
             &this_ptr->vertex_positions[this_ptr->current_vertex_group * iVar1].x);
  if (g_CDemonRendererPtr2->advanced_culling_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  }
  plane = this_ptr->face_data;
  uVar2 = 0;
  if (0 < this_ptr->face_count) {
    do {
      iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&plane->plane);
      if (iVar1 != 0) {
        engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                  (g_CDemonRendererPtr2,-((uVar2 & 0x7f) + 0x80));
        local_58.surface_normal.A = (plane->plane).A;
        local_58.surface_normal.B = (plane->plane).B;
        local_58.surface_normal.C = (plane->plane).C;
        local_58.surface_normal.D = (plane->plane).D;
        local_40 = plane->vertex_index_1;
        local_34 = plane->vertex_index_2;
        local_28 = plane->vertex_index_3;
        if (plane->vertex_index_4 == -1) {
          local_58.base.count = 3;
        }
        else {
          local_58.base.count = 4;
          local_1c = plane->vertex_index_4;
        }
        core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_00570960
                  (g_CDemonSetPtr,&local_58,1);
      }
      uVar2 = uVar2 + 1;
      plane = plane + 1;
    } while ((int)uVar2 < this_ptr->face_count);
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  return;
}
