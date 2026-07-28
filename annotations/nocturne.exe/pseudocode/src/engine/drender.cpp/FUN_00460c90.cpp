// Name: engine_drender.cpp_FUN_00460c90
// Address: 00460c90
// Address Range: [[00460c90, 00460ce6]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_00460c90(undefined4 param_1,float *param_2)

#include "nocturne.h"

void engine_drender_cpp_FUN_00460c90(uint param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  int dir_z;
  
  dVar1 = (double)param_2[1] * 65536;
  dVar2 = (double)*param_2 * 65536;
  round((double)param_2[2] * 65536);
  dVar1 = round(dVar1);
  dir_z = 0x460cd0;
  dVar2 = round(dVar2);
  engine_light_cpp_setDirectionalLightVector_FUN_004c6a10((int)ROUND(dVar2),(int)ROUND(dVar1),dir_z)
  ;
  return;
}
