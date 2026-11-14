// Name: core_set.cpp_CDemonSet_renderDecals_FUN_00556080
// Address: 00556080
// Address Range: [[00556080, 005560c8]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderDecals_FUN_00556080(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderDecals_FUN_00556080(CDemonSet *this_ptr)

{
  core_set_cpp_CDemonSet_buildDisplayList_FUN_005545a0(this_ptr,0x10);
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0(this_ptr,1);
  core_gore_cpp_CGore_renderDecals_FUN_004e5cd0(g_CGorePtr,1,0);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004b54a0(0x01C57074,1,0);
  return;
}
