// Name: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
// Address: 0048c650
// Address Range: [[0048c650, 0048c66b]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
          (CDemonRenderer *this_ptr,float field_of_view)

{
  uint in_EAX;
  uint in_EDX;
  float10 fVar1;
  
  fVar1 = ((float10)18 / (float10)field_of_view) * (float10)65536;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX));
  g_ProjectionScale = (int)ROUND(fVar1);
  return;
}
