// Name: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
// Address: 0048ca70
// Address Range: [[0048ca70, 0048ca94]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70 (CDemonRenderer *this_ptr,float render_alpha)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
          (CDemonRenderer *this_ptr,float render_alpha)

{
  double dVar1;
  
  dVar1 = crt_math_c_round_FUN_005fe6b0((double)(render_alpha * (float)65535));
  engine_3d_c_setRenderAlpha_FUN_00406d80((int)ROUND(dVar1));
  return;
}
