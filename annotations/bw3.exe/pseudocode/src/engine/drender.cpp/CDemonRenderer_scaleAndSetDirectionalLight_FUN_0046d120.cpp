// Name: engine_drender.cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0046d120
// Address: 0046d120
// Address Range: [[0046d120, 0046d176]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0046d120(CDemonRenderer *this_ptr,CVector3f *light_direction)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0046d120(CDemonRenderer *this_ptr,CVector3f *light_direction)

{
  int dir_y;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  int dir_z;
  
  fVar1 = (float10)_DAT_005bc553;
  fVar2 = (float10)light_direction->z * fVar1;
  fVar3 = (float10)light_direction->y * fVar1;
  fVar1 = (float10)light_direction->x * fVar1;
  round();
  round();
  dir_z = (int)ROUND(fVar2);
  round(dir_z,dir_z,(int)ROUND(fVar3));
  engine_light_cpp_setDirectionalLightVector_FUN_004e0b50((int)ROUND(fVar1),dir_y,dir_z);
  return;
}
