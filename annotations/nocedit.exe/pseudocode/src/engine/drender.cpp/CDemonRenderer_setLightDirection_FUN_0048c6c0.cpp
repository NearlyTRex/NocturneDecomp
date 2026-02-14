// Name: engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0
// Address: 0048c6c0
// Address Range: [[0048c6c0, 0048c6d9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0(CDemonRenderer *this_ptr,CVector3i *direction)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0(CDemonRenderer *this_ptr,CVector3i *direction)

{
  engine_light_cpp_setDirectionalLightVector_FUN_005054d0(direction->x,direction->y,direction->z);
  return;
}
