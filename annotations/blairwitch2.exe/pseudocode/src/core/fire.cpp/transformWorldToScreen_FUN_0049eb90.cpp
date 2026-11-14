// Name: core_fire.cpp_transformWorldToScreen_FUN_0049eb90
// Address: 0049eb90
// Address Range: [[0049eb90, 0049ebd0]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_transformWorldToScreen_FUN_0049eb90(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_transformWorldToScreen_FUN_0049eb90(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)

{
  CVector3i CStack_10;
  
  CStack_10.x = (int)ROUND(world_position->x * _DAT_005f64e4);
  CStack_10.y = (int)ROUND(world_position->y * _DAT_005f64e4);
  CStack_10.z = (int)ROUND(world_position->z * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d9ec(output,&CStack_10);
  return;
}
