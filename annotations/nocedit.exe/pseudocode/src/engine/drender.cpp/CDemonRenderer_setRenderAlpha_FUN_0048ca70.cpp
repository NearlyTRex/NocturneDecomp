// Name: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
// Address: 0048ca70
// Address Range: [[0048ca70, 0048ca94]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70(CDemonRenderer * this_ptr, float render_alpha)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
          (CDemonRenderer *this_ptr,float render_alpha)

{
  uint in_EAX;
  uint in_EDX;
  float10 fVar1;
  
  fVar1 = (float10)render_alpha * (float10)65535;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX));
  engine_3d_c_setRenderAlpha_FUN_00406d80((int)ROUND(fVar1));
  return;
}
