// Name: engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90
// Address: 0048ce90
// Address Range: [[0048ce90, 0048cef7]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count, int render_flags)

#include "nocturne.h"

int __cdecl
engine_drender_cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count,
          int render_flags)

{
  int in_EAX;
  int extraout_EAX;
  int iVar1;
  
  if (render_flags == -1) {
    render_flags = RENDER_ENGINE_CORE_PREMIUM;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00
                      (this_ptr,primitive_array,primitive_count,0x48,render_flags);
    return iVar1;
  }
  iVar1 = 0;
  if (0 < primitive_count) {
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
                (this_ptr,primitive_array,render_flags);
      primitive_array = primitive_array + 3;
      in_EAX = extraout_EAX;
    } while (iVar1 < primitive_count);
  }
  return in_EAX;
}
