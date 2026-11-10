// Name: core_fire.cpp_transformWorldToScreen_FUN_004a44c0
// Address: 004a44c0
// Address Range: [[004a44c0, 004a4500]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_transformWorldToScreen_FUN_004a44c0(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_transformWorldToScreen_FUN_004a44c0(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)

{
  CVector3i CStack_10;
  
  CStack_10.x = (int)ROUND(world_position->x * _DAT_005df8e4);
  CStack_10.y = (int)ROUND(world_position->y * _DAT_005df8e4);
  CStack_10.z = (int)ROUND(world_position->z * _DAT_005df8e4);
  engine_special_cpp_FUN_0056356c(output,&CStack_10);
  return;
}
