// Name: engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0
// Address: 004841a0
// Address Range: [[004841a0, 00484207]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0(CDemonRenderer *this_ptr,SMRGLPrimitiveTriangle *primitive_array,int primitive_count ,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0(CDemonRenderer *this_ptr,SMRGLPrimitiveTriangle *primitive_array,int primitive_count ,int render_flags)

{
  int iVar1;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (*(int *)(this_ptr + 0x1c) == 0) {
    engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_00484280
              (this_ptr,(SMRGLPrimitiveQuad *)primitive_array,primitive_count,0x3c,render_flags);
    return;
  }
  iVar1 = 0;
  if (0 < primitive_count) {
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_00484a80
                (this_ptr,(SMRGLHeaderPrimitive *)primitive_array,render_flags);
      primitive_array = primitive_array + 0x3c;
    } while (iVar1 < primitive_count);
  }
  return;
}
