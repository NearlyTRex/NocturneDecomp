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
  double dVar1;
  
  dVar1 = crt_math_c_round_FUN_005fe6b0
                    ((double)(((float)18 / field_of_view) *
                             (float)65536));
  g_ProjectionScale = (int)ROUND(dVar1);
  return;
}
