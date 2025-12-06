// Name: engine_drender.cpp_scaleAndSetDirectionalLight_FUN_0048c6e0
// Address: 0048c6e0
// Address Range: [[0048c6e0, 0048c736]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_scaleAndSetDirectionalLight_FUN_0048c6e0(CVector3f * light_direction)

#include "nocturne.h"

void __cdecl engine_drender_cpp_scaleAndSetDirectionalLight_FUN_0048c6e0(CVector3f *light_direction)

{
  int dir_y;
  uint in_EDX;
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  float *in_stack_00000008;
  int dir_z;
  
  fVar1 = (float10)in_stack_00000008[2] * (float10)65536;
  fVar2 = (float10)*in_stack_00000008 * (float10)65536;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_stack_00000008));
  dVar3 = crt_math_c_round_FUN_005fe6b0(dVar3);
  dir_z = (int)ROUND(fVar1);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(dir_z,SUB84 /* extract 2-byte value */(dVar3,0)));
  engine_light_cpp_setDirectionalLightVector_FUN_005054d0((int)ROUND(fVar2),dir_y,dir_z);
  return;
}
