// Name: engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0048ca70
// Address: 0048ca70
// MANUAL RECONSTRUCTION
// Address Range: [[0048ca70, 0048ca94]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0048ca70(CDemonRenderer *this_ptr,float render_alpha)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0048ca70(CDemonRenderer *this_ptr,float render_alpha)

{
  engine_3d_c_setRenderAlpha_FUN_00406d80
            ((int)ROUND(ROUND(render_alpha * (float)65535)));
  return;
}
