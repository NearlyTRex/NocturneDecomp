// Name: core_course.cpp_FUN_004436d0
// Address: 004436d0
// Address Range: [[004436d0, 00443759]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_FUN_004436d0(void)

#include "nocturne.h"

void __cdecl core_course_cpp_FUN_004436d0(void)

{
  SRenderVertex *vertices;
  int iVar1;
  int iVar2;
  
  vertices = g_CDemonRendererPtr1->vertex_buffer_ptr;
  if ((int)((vertices->projected_vertex).screen_x & -0x80000000) == 0) {
    iVar2 = (vertices->projected_vertex).transformed_z;
    iVar1 = iVar2 >> 0x1f;
    iVar2 = 0xff - ((int)((iVar2 + iVar1 * -0x80) - (uint)(iVar1 << 6 < 0)) >> 7);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0xff < iVar2) {
      iVar2 = 0xff;
    }
    g_ActiveRenderColor =
         (int)g_ColorCubeLookup
              [((int)((iVar2 + (iVar2 >> 0x1f) * -8) - (uint)((iVar2 >> 0x1f) << 2 < 0)) >> 3) *
               0x421];
    engine_prim_c_replaceWWithDepth_FUN_00552110(vertices,1);
    engine_2d_c_plotPixelWithDepth_FUN_00401290
              ((vertices->projected_vertex).screen_x >> 0x10,
               (vertices->projected_vertex).screen_y >> 0x10,
               (vertices->projected_vertex).transformed_z);
  }
  return;
}
