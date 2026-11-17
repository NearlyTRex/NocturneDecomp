// Name: core_dpart.cpp_CDemonPart_renderFaces_FUN_00461a50
// Address: 00461a50
// Address Range: [[00461a50, 00461ba4]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_renderFaces_FUN_00461a50(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_renderFaces_FUN_00461a50(CDemonPart *this_ptr)

{
  int iVar1;
  UIntegerFloat *plane;
  uint uVar2;
  SMRGLHeaderPrimitive SStack_58;
  UIntegerFloat UStack_40;
  UIntegerFloat UStack_34;
  UIntegerFloat UStack_28;
  int iStack_1c;
  
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(g_CDemonRenderer_PTR_0060b280,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870
            (g_CDemonRenderer_PTR_0060b280,0);
  iVar1 = this_ptr->vertex_count / this_ptr->vertex_group_size;
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90
            (g_CDemonSetPtr,iVar1,
             this_ptr->vertex_positions + this_ptr->current_vertex_group * iVar1);
  if (g_CDemonRenderer_PTR_0060b280->advanced_culling_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
              (g_CDemonRenderer_PTR_0060b280,1);
  }
  plane = (UIntegerFloat *)this_ptr->face_data;
  uVar2 = 0;
  if (0 < this_ptr->face_count) {
    do {
      iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970((SClipPlane *)plane);
      if (iVar1 != 0) {
        engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0
                  (g_CDemonRenderer_PTR_0060b280,-((uVar2 & 0x7f) + 0x80));
        SStack_58.surface_normal.A = *plane;
        SStack_58.surface_normal.B = plane[1];
        SStack_58.surface_normal.C = plane[2];
        SStack_58.surface_normal.D = plane[3];
        UStack_40 = plane[4];
        UStack_34 = plane[5];
        UStack_28 = plane[6];
        if (plane[7].i == -1) {
          SStack_58.base.count = 3;
        }
        else {
          SStack_58.base.count = 4;
          iStack_1c = plane[7].i;
        }
        core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_00534130
                  (g_CDemonSetPtr,&SStack_58,1);
      }
      uVar2 = uVar2 + 1;
      plane = plane + 8;
    } while ((int)uVar2 < this_ptr->face_count);
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870
            (g_CDemonRenderer_PTR_0060b280,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(g_CDemonRenderer_PTR_0060b280,1);
  return;
}
