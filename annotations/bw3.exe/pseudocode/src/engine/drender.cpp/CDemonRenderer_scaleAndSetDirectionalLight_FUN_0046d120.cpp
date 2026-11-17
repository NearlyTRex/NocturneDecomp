// Name: engine_drender.cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0046d120
// Address: 0046d120
// Address Range: [[0046d120, 0046d176]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0046d120(CDemonRenderer *this_ptr,CVector3f *light_direction)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0046d120(CDemonRenderer *this_ptr,CVector3f *light_direction)

{
  double dVar1;
  double dVar2;
  int dir_z;
  
  dVar1 = (double)light_direction->y * 65536;
  dVar2 = (double)light_direction->x * 65536;
  round((double)light_direction->z * 65536);
  dVar1 = round(dVar1);
  dir_z = 0x46d160;
  dVar2 = round(dVar2);
  engine_light_cpp_setDirectionalLightVector_FUN_004e0b50((int)ROUND(dVar2),(int)ROUND(dVar1),dir_z)
  ;
  return;
}
