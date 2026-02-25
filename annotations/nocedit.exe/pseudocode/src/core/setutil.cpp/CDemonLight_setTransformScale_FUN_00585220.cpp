// Name: core_setutil.cpp_CDemonLight_setTransformScale_FUN_00585220
// Address: 00585220
// Address Range: [[00585220, 00585239]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_CDemonLight_setTransformScale_FUN_00585220(CDemonLight *this_ptr,float scale)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_setutil_cpp_CDemonLight_setTransformScale_FUN_00585220(CDemonLight *this_ptr,float scale)

{
  this_ptr->transform_scale_factor = (int)ROUND(ROUND(scale * (float)65536));
  return;
}
