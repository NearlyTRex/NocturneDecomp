// Name: engine_drender.cpp_scaleAndSetDirectionalLight_FUN_0048c6e0
// Address: 0048c6e0
// Address Range: [[0048c6e0, 0048c736]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_scaleAndSetDirectionalLight_FUN_0048c6e0(CVector3f *light_direction)

#include "nocturne.h"

void __cdecl engine_drender_cpp_scaleAndSetDirectionalLight_FUN_0048c6e0(CVector3f *light_direction)

{
  double dVar1;
  double dVar2;
  float *in_stack_00000008;
  int dir_z;
  
  dVar1 = (double)in_stack_00000008[1] * 65536;
  dVar2 = (double)*in_stack_00000008 * 65536;
  round((double)in_stack_00000008[2] * 65536);
  dVar1 = round(dVar1);
  dir_z = 0x48c720;
  dVar2 = round(dVar2);
  engine_light_cpp_setDirectionalLightVector_FUN_005054d0((int)ROUND(dVar2),(int)ROUND(dVar1),dir_z)
  ;
  return;
}
