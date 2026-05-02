// Name: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
// Address: 0048c650
// MANUAL RECONSTRUCTION
// Address Range: [[0048c650, 0048c66b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer *this_ptr,float field_of_view)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer *this_ptr,float field_of_view)

{
  g_ProjectionScale =
       (int)ROUND(ROUND(((float)18 / field_of_view) *
                        (float)65536));
  return;
}
