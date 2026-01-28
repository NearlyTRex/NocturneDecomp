// Name: engine_drender.cpp_scaleAndSetDirectionalLight_FUN_0048c6e0
// Address: 0048c6e0
// Address Range: [[0048c6e0, 0048c736]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_scaleAndSetDirectionalLight_FUN_0048c6e0(CVector3f *light_direction)

#include "nocturne.h"

void __cdecl engine_drender_cpp_scaleAndSetDirectionalLight_FUN_0048c6e0(CVector3f *light_direction)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  float *in_stack_00000008;
  int dir_z;
  
  fVar2 = (float10)65536;
  fVar1 = in_stack_00000008[1];
  fVar3 = (float10)*in_stack_00000008 * fVar2;
  crt_math_c_round_FUN_005fe6b0((double)((float10)in_stack_00000008[2] * fVar2));
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)((float10)fVar1 * fVar2));
  dir_z = 0x48c720;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
  engine_light_cpp_setDirectionalLightVector_FUN_005054d0((int)ROUND(dVar5),(int)ROUND(dVar4),dir_z)
  ;
  return;
}
