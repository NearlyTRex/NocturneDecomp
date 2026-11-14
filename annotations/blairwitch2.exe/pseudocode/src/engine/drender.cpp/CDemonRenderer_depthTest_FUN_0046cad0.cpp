// Name: engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0
// Address: 0046cad0
// Address Range: [[0046cad0, 0046cb3d]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0(CDemonRenderer *this_ptr,SRenderVertex *vertex_ptr)

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0(CDemonRenderer *this_ptr,SRenderVertex *vertex_ptr)

{
  int iVar1;
  int iVar2;
  
  if ((int)((vertex_ptr->projected_vertex).screen_x & -0x80000000) != 0) {
    return 0;
  }
  if (this_ptr->shadow_pass_active == 0) {
    engine_prim_c_replaceWWithDepth_FUN_0051c720(vertex_ptr,1);
  }
  iVar1 = ((vertex_ptr->projected_vertex).screen_x >> 0x10) * 4;
  iVar2 = ((vertex_ptr->projected_vertex).screen_y >> 0x10) * 4;
  if (this_ptr->shadow_pass_active == 0) {
    if ((vertex_ptr->projected_vertex).transformed_z <
        *(int *)(*(int *)(&DAT_01c2b64c + iVar2) + iVar1)) {
      return 0;
    }
  }
  else if ((vertex_ptr->projected_vertex).transformed_z <
           *(int *)(*(int *)(&DAT_01c2a38c + iVar2) + iVar1)) {
    return 0;
  }
  return 1;
}
