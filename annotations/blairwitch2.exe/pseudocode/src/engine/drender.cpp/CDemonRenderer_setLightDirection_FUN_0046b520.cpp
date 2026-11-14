// Name: engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0046b520
// Address: 0046b520
// Address Range: [[0046b520, 0046b539]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_0046b520(CDemonRenderer *this_ptr,CVector3i *direction)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_0046b520(CDemonRenderer *this_ptr,CVector3i *direction)

{
  engine_light_cpp_setDirectionalLightVector_FUN_004e2600(direction->x,direction->y,direction->z);
  return;
}
