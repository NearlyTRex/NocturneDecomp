// Name: engine_drender.cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0048c6e0
// Address: 0048c6e0
// Address Range: [[0048c6e0, 0048c736]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0048c6e0(CDemonRenderer *this_ptr,CVector3f *light_direction)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl engine_drender_cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0048c6e0(CDemonRenderer *this_ptr,CVector3f *light_direction)

{
  engine_light_cpp_setDirectionalLightVector_FUN_005054d0
            ((int)ROUND(ROUND((double)light_direction->x * 65536)),
             (int)ROUND(ROUND((double)light_direction->y * 65536)),
             (int)ROUND(ROUND((double)light_direction->z * 65536)));
  return;
}
