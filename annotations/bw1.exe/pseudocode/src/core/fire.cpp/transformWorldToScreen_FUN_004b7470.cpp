// Name: core_fire.cpp_transformWorldToScreen_FUN_004b7470
// Address: 004b7470
// Address Range: [[004b7470, 004b74b0]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_transformWorldToScreen_FUN_004b7470(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_transformWorldToScreen_FUN_004b7470(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)

{
  CVector3i CStack_10;
  
  CStack_10.x = (int)ROUND(world_position->x * _DAT_005fff94);
  CStack_10.y = (int)ROUND(world_position->y * _DAT_005fff94);
  CStack_10.z = (int)ROUND(world_position->z * _DAT_005fff94);
  engine_special_cpp_FUN_0058043c(output,&CStack_10);
  return;
}
