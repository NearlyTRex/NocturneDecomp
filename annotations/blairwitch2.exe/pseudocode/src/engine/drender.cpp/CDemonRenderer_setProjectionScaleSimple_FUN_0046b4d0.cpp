// Name: engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0046b4d0
// Address: 0046b4d0
// Address Range: [[0046b4d0, 0046b4e5]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0046b4d0(CDemonRenderer *this_ptr,float scale_factor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0046b4d0(CDemonRenderer *this_ptr,float scale_factor)

{
  float10 fVar1;
  
  fVar1 = (float10)_DAT_005d15b3 / (float10)scale_factor;
  round();
  DAT_006141e4 = (int)ROUND(fVar1);
  return;
}
