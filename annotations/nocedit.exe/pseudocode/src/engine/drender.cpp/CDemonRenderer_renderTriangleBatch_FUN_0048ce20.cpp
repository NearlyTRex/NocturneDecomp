// Name: engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0048ce20
// Address: 0048ce20
// Address Range: [[0048ce20, 0048ce87]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_0048ce20(CDemonRenderer *this_ptr,SMRGLPrimitiveTriangle *primitive_array,int primitive_count ,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_0048ce20(CDemonRenderer *this_ptr,SMRGLPrimitiveTriangle *primitive_array,int primitive_count ,int render_flags)

{
  int iVar1;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_0048cf00
              (this_ptr,(SMRGLPrimitiveQuad *)primitive_array,primitive_count,0x3c,render_flags);
    return;
  }
  iVar1 = 0;
  if (0 < primitive_count) {
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700
                (this_ptr,&primitive_array->base,render_flags);
      primitive_array = primitive_array + 1;
    } while (iVar1 < primitive_count);
  }
  return;
}
