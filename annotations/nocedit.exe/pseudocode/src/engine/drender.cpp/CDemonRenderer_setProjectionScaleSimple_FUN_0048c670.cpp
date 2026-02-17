// Name: engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
// Address: 0048c670
// Address Range: [[0048c670, 0048c685]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670(CDemonRenderer *this_ptr,float scale_factor)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670(CDemonRenderer *this_ptr,float scale_factor)

{
  g_ProjectionScale = (int)ROUND(ROUND((float)65536 / scale_factor));
  return;
}
