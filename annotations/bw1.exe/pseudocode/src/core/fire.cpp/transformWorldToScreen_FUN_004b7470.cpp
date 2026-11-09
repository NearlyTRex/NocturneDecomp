// Name: core_fire.cpp_transformWorldToScreen_FUN_004b7470
// Address: 004b7470
// Address Range: [[004b7470, 004b74b0]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_transformWorldToScreen_FUN_004b7470(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_transformWorldToScreen_FUN_004b7470(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)

{
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_10 = (int)ROUND(*(float *)world_position * _DAT_005fff94);
  iStack_c = (int)ROUND(*(float *)&world_position->field_0x4 * _DAT_005fff94);
  iStack_8 = (int)ROUND(*(float *)&world_position->field_0x8 * _DAT_005fff94);
  engine_special_cpp_FUN_0058043c(output,(CVector3i *)&iStack_10);
  return;
}
