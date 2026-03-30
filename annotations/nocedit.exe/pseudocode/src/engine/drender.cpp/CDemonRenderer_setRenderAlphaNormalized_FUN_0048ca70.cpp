// Name: engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0048ca70
// Address: 0048ca70
// Address Range: [[0048ca70, 0048ca94]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0048ca70(CDemonRenderer *this_ptr,float render_alpha)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0048ca70(CDemonRenderer *this_ptr,float render_alpha)

{
  engine_3d_c_setRenderAlpha_FUN_00406d80
            ((int)ROUND(ROUND(render_alpha * (float)65535)));
  return;
}
