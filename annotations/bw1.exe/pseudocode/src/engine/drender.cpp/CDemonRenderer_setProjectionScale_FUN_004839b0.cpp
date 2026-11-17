// Name: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0
// Address: 004839b0
// Address Range: [[004839b0, 004839cb]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0(CDemonRenderer *this_ptr,float field_of_view)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0(CDemonRenderer *this_ptr,float field_of_view)

{
  double dVar1;
  
  dVar1 = round
                    ((double)(((float)18 / field_of_view) *
                             (float)65536));
  g_ProjectionScale = (int)ROUND(dVar1);
  return;
}
