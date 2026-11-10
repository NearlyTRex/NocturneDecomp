// Name: core_set.cpp_CDemonSet_cacheMirrorLighting_FUN_005344f0
// Address: 005344f0
// Address Range: [[005344f0, 00534578]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_cacheMirrorLighting_FUN_005344f0(CDemonSet *this_ptr,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_cacheMirrorLighting_FUN_005344f0(CDemonSet *this_ptr,CVector3f *position)

{
  int iVar1;
  int iVar2;
  CVector3i local_10;
  
  if (position == (CVector3f *)0x0) {
    this_ptr->mirror_lighting_cached = 0;
    return;
  }
  local_10.x = (int)ROUND(position->x * _DAT_005fb210);
  local_10.y = (int)ROUND(position->y * _DAT_005fb210);
  local_10.z = (int)ROUND(position->z * _DAT_005fb210);
  core_set_cpp_CDemonSet_lightVertexColor_FUN_00531460(this_ptr,&local_10,(CVector3i *)0x0,0,0);
  iVar1 = DAT_00622034;
  this_ptr->mirror_lighting_cached = 1;
  iVar2 = DAT_0062203c;
  (this_ptr->mirror_cached_color).r = iVar1;
  (this_ptr->mirror_cached_color).b = iVar2;
  (this_ptr->mirror_cached_color).g = DAT_00622038;
  return;
}
