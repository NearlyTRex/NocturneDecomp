// Name: engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
// Address: 0048dc50
// Address Range: [[0048dc50, 0048dcbd]]
// Convention: __cdecl
// Signature: int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)

#include "nocturne.h"

int __cdecl
engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50
          (CDemonRenderer *this_ptr,SRenderVertex *vertex_ptr)

{
  int iVar1;
  int iVar2;
  
  if ((int)((vertex_ptr->projected_vertex).screen_x & -0x80000000) != 0) {
    return 0;
  }
  if (this_ptr->face_count == 0) {
    engine_prim_c_replaceWWithDepth_FUN_00552110(vertex_ptr,1);
  }
  iVar1 = (vertex_ptr->projected_vertex).screen_x >> 0x10;
  iVar2 = (vertex_ptr->projected_vertex).screen_y >> 0x10;
  if (this_ptr->face_count == 0) {
    if ((vertex_ptr->projected_vertex).transformed_z < (int)g_ZBufferScanlineArray[iVar2][iVar1]) {
      return 0;
    }
  }
  else if ((vertex_ptr->projected_vertex).transformed_z <
           *(int *)((int)g_ScreenBufferArray[iVar2] + iVar1 * 4)) {
    return 0;
  }
  return 1;
}
