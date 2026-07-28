// Name: core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
// Address: 0050e490
// Address Range: [[0050e490, 0050e4bf]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  if (DAT_005ae704->advanced_culling_enabled != 0) {
    iVar1 = core_mirror_cpp_FUN_004d7720(this_ptr->sorted_render_actors[0x6e0],prim);
    return iVar1;
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                    (DAT_005ae704,prim);
  return iVar1;
}
