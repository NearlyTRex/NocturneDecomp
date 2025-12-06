// Name: engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
// Address: 0048c670
// Address Range: [[0048c670, 0048c685]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670(CDemonRenderer * this_ptr, float scale_factor)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
          (CDemonRenderer *this_ptr,float scale_factor)

{
  uint in_EAX;
  uint in_EDX;
  float10 fVar1;
  
  fVar1 = (float10)65536 / (float10)scale_factor;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX));
  g_ProjectionScale = (int)ROUND(fVar1);
  return;
}
