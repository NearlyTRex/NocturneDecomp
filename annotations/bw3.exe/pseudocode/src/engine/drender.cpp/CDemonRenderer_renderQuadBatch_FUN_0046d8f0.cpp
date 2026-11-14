// Name: engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_0046d8f0
// Address: 0046d8f0
// Address Range: [[0046d8f0, 0046d957]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderQuadBatch_FUN_0046d8f0(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderQuadBatch_FUN_0046d8f0(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags)

{
  int iVar1;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_0046d960
              (this_ptr,primitive_array,primitive_count,0x48,render_flags);
    return;
  }
  iVar1 = 0;
  if (0 < primitive_count) {
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200
                (this_ptr,&primitive_array->base,render_flags);
      primitive_array = primitive_array + 1;
    } while (iVar1 < primitive_count);
  }
  return;
}
