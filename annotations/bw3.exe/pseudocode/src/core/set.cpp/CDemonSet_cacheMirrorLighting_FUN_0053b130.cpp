// Name: core_set.cpp_CDemonSet_cacheMirrorLighting_FUN_0053b130
// Address: 0053b130
// Address Range: [[0053b130, 0053b1b8]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_cacheMirrorLighting_FUN_0053b130(CDemonSet *this_ptr,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_cacheMirrorLighting_FUN_0053b130(CDemonSet *this_ptr,CVector3f *position)

{
  int iVar1;
  int iVar2;
  CVector3i local_10;
  
  if (position == (CVector3f *)0x0) {
    this_ptr->mirror_lighting_cached = 0;
    return;
  }
  local_10.x = (int)ROUND(position->x * _DAT_005e3bc0);
  local_10.y = (int)ROUND(position->y * _DAT_005e3bc0);
  local_10.z = (int)ROUND(position->z * _DAT_005e3bc0);
  core_set_cpp_CDemonSet_lightVertexColor_FUN_005380a0(this_ptr,&local_10,(CVector3i *)0x0,0,0);
  iVar1 = DAT_0060b034;
  this_ptr->mirror_lighting_cached = 1;
  iVar2 = DAT_0060b03c;
  (this_ptr->mirror_cached_color).r = iVar1;
  (this_ptr->mirror_cached_color).b = iVar2;
  (this_ptr->mirror_cached_color).g = DAT_0060b038;
  return;
}
