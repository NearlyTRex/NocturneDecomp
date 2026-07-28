// Name: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
// Address: 00460c00
// Address Range: [[00460c00, 00460c1b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(CDemonRenderer *this_ptr,float field_of_view)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(CDemonRenderer *this_ptr,float field_of_view)

{
  double dVar1;
  
  dVar1 = round
                    ((double)(((float)18 / field_of_view) * (float)65536));
  DAT_005b7648 = (int)ROUND(dVar1);
  return;
}
