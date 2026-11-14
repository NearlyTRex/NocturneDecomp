// Name: engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0046d100
// Address: 0046d100
// Address Range: [[0046d100, 0046d119]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_0046d100(CDemonRenderer *this_ptr,CVector3i *direction)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_0046d100(CDemonRenderer *this_ptr,CVector3i *direction)

{
  engine_light_cpp_setDirectionalLightVector_FUN_004e0b50(direction->x,direction->y,direction->z);
  return;
}
