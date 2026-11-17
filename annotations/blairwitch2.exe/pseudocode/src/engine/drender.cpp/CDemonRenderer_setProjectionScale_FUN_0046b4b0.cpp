// Name: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0
// Address: 0046b4b0
// Address Range: [[0046b4b0, 0046b4cb]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0(CDemonRenderer *this_ptr,float field_of_view)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0(CDemonRenderer *this_ptr,float field_of_view)

{
  double dVar1;
  
  dVar1 = round
                    ((double)(((float)18 / field_of_view) *
                             (float)65536));
  g_ProjectionScale = (int)ROUND(dVar1);
  return;
}
