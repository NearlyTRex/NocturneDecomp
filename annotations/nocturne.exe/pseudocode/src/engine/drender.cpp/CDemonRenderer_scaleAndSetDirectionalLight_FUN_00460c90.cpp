// Name: engine_drender.cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_00460c90
// Address: 00460c90
// Address Range: [[00460c90, 00460ce6]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_00460c90(CDemonRenderer *this_ptr,CVector3f *light_direction)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_00460c90(CDemonRenderer *this_ptr,CVector3f *light_direction)

{
  double dVar1;
  double dVar2;
  int dir_z;
  
  dVar1 = (double)light_direction->y * 65536;
  dVar2 = (double)light_direction->x * 65536;
  round((double)light_direction->z * 65536);
  dVar1 = round(dVar1);
  dir_z = 0x460cd0;
  dVar2 = round(dVar2);
  engine_light_cpp_setDirectionalLightVector_FUN_004c6a10((int)ROUND(dVar2),(int)ROUND(dVar1),dir_z)
  ;
  return;
}
