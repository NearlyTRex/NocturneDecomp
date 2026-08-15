// Name: core_dpart.cpp_CDemonPart_renderFaces_FUN_004574e0
// Address: 004574e0
// Address Range: [[004574e0, 00457634]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_renderFaces_FUN_004574e0(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_renderFaces_FUN_004574e0(CDemonPart *this_ptr)

{
  int iVar1;
  UIntegerFloat *plane;
  uint uVar2;
  SMRGLHeaderPrimitive local_58;
  UIntegerFloat local_40;
  UIntegerFloat local_34;
  UIntegerFloat local_28;
  int local_1c;
  
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(g_CDemonRenderer_PTR_005ae704,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
            (g_CDemonRenderer_PTR_005ae704,0);
  iVar1 = this_ptr->vertex_count / this_ptr->vertex_group_size;
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
            (g_CDemonSet_PTR_005be368,iVar1,
             this_ptr->vertex_positions + this_ptr->current_vertex_group * iVar1);
  if (g_CDemonRenderer_PTR_005ae704->advanced_culling_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
              (g_CDemonRenderer_PTR_005ae704,1);
  }
  plane = (UIntegerFloat *)this_ptr->face_data;
  uVar2 = 0;
  if (0 < this_ptr->face_count) {
    do {
      iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610((SClipPlane *)plane);
      if (iVar1 != 0) {
        engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10
                  (g_CDemonRenderer_PTR_005ae704,-((uVar2 & 0x7f) + 0x80));
        local_58.surface_normal.A = *plane;
        local_58.surface_normal.B = plane[1];
        local_58.surface_normal.C = plane[2];
        local_58.surface_normal.D = plane[3];
        local_40 = plane[4];
        local_34 = plane[5];
        local_28 = plane[6];
        if (plane[7].i == -1) {
          local_58.base.count = 3;
        }
        else {
          local_58.base.count = 4;
          local_1c = plane[7].i;
        }
        core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0050dfe0
                  (g_CDemonSet_PTR_005be368,&local_58,1);
      }
      uVar2 = uVar2 + 1;
      plane = plane + 8;
    } while ((int)uVar2 < this_ptr->face_count);
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
            (g_CDemonRenderer_PTR_005ae704,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(g_CDemonRenderer_PTR_005ae704,1);
  return;
}
