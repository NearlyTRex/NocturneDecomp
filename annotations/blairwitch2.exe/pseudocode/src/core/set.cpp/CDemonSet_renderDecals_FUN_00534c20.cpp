// Name: core_set.cpp_CDemonSet_renderDecals_FUN_00534c20
// Address: 00534c20
// Address Range: [[00534c20, 00534c68]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderDecals_FUN_00534c20(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderDecals_FUN_00534c20(CDemonSet *this_ptr)

{
  core_set_cpp_FUN_005332f0(this_ptr,0x10);
  core_set_cpp_FUN_0052dc10(this_ptr,1);
  core_gore_cpp_CGore_renderDecals_FUN_004c94c0(g_CGorePtr,1,0);
  core_fire_cpp_CFireEffect_renderDecals_FUN_0049cb50(0x01C3DEB4,1,0);
  return;
}
