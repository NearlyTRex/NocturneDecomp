// Name: engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_00460c20
// Address: 00460c20
// Address Range: [[00460c20, 00460c35]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_00460c20(CDemonRenderer *this_ptr,float scale_factor)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_00460c20(CDemonRenderer *this_ptr,float scale_factor)

{
  double dVar1;
  
  dVar1 = round((double)((float)65536 / scale_factor));
  DAT_005b7648 = (int)ROUND(dVar1);
  return;
}
