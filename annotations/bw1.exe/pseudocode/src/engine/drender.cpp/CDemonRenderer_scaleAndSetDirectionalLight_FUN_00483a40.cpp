// Name: engine_drender.cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_00483a40
// Address: 00483a40
// Address Range: [[00483a40, 00483a96]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_00483a40(CDemonRenderer *this_ptr,CVector3f *light_direction)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_00483a40(CDemonRenderer *this_ptr,CVector3f *light_direction)

{
  double dVar1;
  double dVar2;
  int dir_z;
  
  dVar1 = (double)light_direction->y * _DAT_005db3bc;
  dVar2 = (double)light_direction->x * _DAT_005db3bc;
  round((double)light_direction->z * _DAT_005db3bc);
  dVar1 = round(dVar1);
  dir_z = 0x483a80;
  dVar2 = round(dVar2);
  engine_light_cpp_setDirectionalLightVector_FUN_004ffa90((int)ROUND(dVar2),(int)ROUND(dVar1),dir_z)
  ;
  return;
}
