// Name: core_set.cpp_FUN_0050e370
// Address: 0050e370
// Address Range: [[0050e370, 0050e3f8]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0050e370(CDemonSet *this_ptr,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_0050e370(CDemonSet *this_ptr,CVector3f *position)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  CVector3i local_10;
  
  if (position == (CVector3f *)0x0) {
    this_ptr->sorted_render_actors[0x6e2] = (CDemonActor *)0x0;
    return;
  }
  local_10.x = (int)ROUND(position->x * _DAT_005a18f0);
  local_10.y = (int)ROUND(position->y * _DAT_005a18f0);
  local_10.z = (int)ROUND(position->z * _DAT_005a18f0);
  core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0(this_ptr,&local_10,(CVector3i *)0x0,0,0);
  pCVar1 = DAT_005c5034;
  this_ptr->sorted_render_actors[0x6e2] = (CDemonActor *)0x1;
  pCVar2 = DAT_005c503c;
  this_ptr->sorted_render_actors[0x6e3] = pCVar1;
  this_ptr->sorted_render_actors[0x6e5] = pCVar2;
  this_ptr->sorted_render_actors[0x6e4] = DAT_005c5038;
  return;
}
