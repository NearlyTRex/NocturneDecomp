// Name: engine_drender.cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0046b540
// Address: 0046b540
// Address Range: [[0046b540, 0046b596]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0046b540(CDemonRenderer *this_ptr,CVector3f *light_direction)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0046b540(CDemonRenderer *this_ptr,CVector3f *light_direction)

{
  double dVar1;
  double dVar2;
  int dir_z;
  
  dVar1 = (double)light_direction->y * _DAT_005d15c3;
  dVar2 = (double)light_direction->x * _DAT_005d15c3;
  round((double)light_direction->z * _DAT_005d15c3);
  dVar1 = round(dVar1);
  dir_z = 0x46b580;
  dVar2 = round(dVar2);
  engine_light_cpp_setDirectionalLightVector_FUN_004e2600((int)ROUND(dVar2),(int)ROUND(dVar1),dir_z)
  ;
  return;
}
