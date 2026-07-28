// Name: engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_00460c70
// Address: 00460c70
// Address Range: [[00460c70, 00460c89]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_00460c70(CDemonRenderer *this_ptr,CVector3i *direction)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_00460c70(CDemonRenderer *this_ptr,CVector3i *direction)

{
  engine_light_cpp_setDirectionalLightVector_FUN_004c6a10(direction->x,direction->y,direction->z);
  return;
}
