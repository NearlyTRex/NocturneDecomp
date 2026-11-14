// Name: engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_00483a20
// Address: 00483a20
// Address Range: [[00483a20, 00483a39]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_00483a20(CDemonRenderer *this_ptr,CVector3i *direction)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_00483a20(CDemonRenderer *this_ptr,CVector3i *direction)

{
  engine_light_cpp_setDirectionalLightVector_FUN_004ffa90(direction->x,direction->y,direction->z);
  return;
}
