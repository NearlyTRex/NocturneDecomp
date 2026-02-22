// Name: core_set.cpp_CDemonSet_cacheMirrorLighting_FUN_00570cd0
// Address: 00570cd0
// Address Range: [[00570cd0, 00570d58]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_cacheMirrorLighting_FUN_00570cd0(CDemonSet *this_ptr,CVector3f *position)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_cacheMirrorLighting_FUN_00570cd0(CDemonSet *this_ptr,CVector3f *position)

{
  int iVar1;
  int iVar2;
  CVector3i local_10;
  
  if (position == (CVector3f *)0x0) {
    this_ptr->mirror_lighting_cached = 0;
    return;
  }
  local_10.x = (int)ROUND(position->x * 256.0f);
  local_10.y = (int)ROUND(position->y * 256.0f);
  local_10.z = (int)ROUND(position->z * 256.0f);
  core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(this_ptr,&local_10,(CVector3i *)0x0,0,0);
  iVar1 = g_RenderVertexBuffer[0].z;
  this_ptr->mirror_lighting_cached = 1;
  iVar2 = g_RenderVertexBuffer[0].g;
  this_ptr->mirror_cached_light = iVar1;
  this_ptr->mirror_cached_fog = iVar2;
  this_ptr->mirror_cached_color = g_RenderVertexBuffer[0].r;
  return;
}
