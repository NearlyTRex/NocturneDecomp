// Name: core_fire.cpp_transformWorldToScreen_FUN_004a44c0
// Address: 004a44c0
// Address Range: [[004a44c0, 004a4500]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_transformWorldToScreen_FUN_004a44c0(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)

#include "nocturne.h"

void __cdecl core_fire_cpp_transformWorldToScreen_FUN_004a44c0(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)

{
  CVector3i CStack_10;
  
  CStack_10.x = (int)ROUND(world_position->x * 256.0f);
  CStack_10.y = (int)ROUND(world_position->y * 256.0f);
  CStack_10.z = (int)ROUND(world_position->z * 256.0f);
  engine_special_cpp_transformPoint_FUN_0056356c(output,&CStack_10);
  return;
}
