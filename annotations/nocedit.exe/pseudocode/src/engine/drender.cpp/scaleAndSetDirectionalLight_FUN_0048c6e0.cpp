// Name: engine_drender.cpp_scaleAndSetDirectionalLight_FUN_0048c6e0
// Address: 0048c6e0
// Address Range: [[0048c6e0, 0048c736]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_scaleAndSetDirectionalLight_FUN_0048c6e0(CVector3f *light_direction)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl engine_drender_cpp_scaleAndSetDirectionalLight_FUN_0048c6e0(CVector3f *light_direction)

{
  float *in_stack_00000008;
  
  engine_light_cpp_setDirectionalLightVector_FUN_005054d0
            ((int)ROUND(ROUND((double)*in_stack_00000008 * 65536)),
             (int)ROUND(ROUND((double)in_stack_00000008[1] * 65536)),
             (int)ROUND(ROUND((double)in_stack_00000008[2] * 65536)));
  return;
}
