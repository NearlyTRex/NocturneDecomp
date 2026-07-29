// Name: core_fire.cpp_transformWorldToScreen_FUN_0048c8d0
// Address: 0048c8d0
// Address Range: [[0048c8d0, 0048c910]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_transformWorldToScreen_FUN_0048c8d0(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)

#include "nocturne.h"

void __cdecl core_fire_cpp_transformWorldToScreen_FUN_0048c8d0(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)

{
  CVector3i local_10;
  
  local_10.x = (int)ROUND(world_position->x * 256.0f);
  local_10.y = (int)ROUND(world_position->y * 256.0f);
  local_10.z = (int)ROUND(world_position->z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25(output,&local_10);
  return;
}
