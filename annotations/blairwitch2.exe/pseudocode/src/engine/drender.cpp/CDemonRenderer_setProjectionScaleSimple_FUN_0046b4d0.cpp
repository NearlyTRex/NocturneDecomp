// Name: engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0046b4d0
// Address: 0046b4d0
// Address Range: [[0046b4d0, 0046b4e5]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0046b4d0(CDemonRenderer *this_ptr,float scale_factor)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0046b4d0(CDemonRenderer *this_ptr,float scale_factor)

{
  double dVar1;
  
  dVar1 = round((double)((float)65536 / scale_factor));
  g_INT_006141e4 = (int)ROUND(dVar1);
  return;
}
