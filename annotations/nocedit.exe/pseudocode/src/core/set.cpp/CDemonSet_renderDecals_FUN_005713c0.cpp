// Name: core_set.cpp_CDemonSet_renderDecals_FUN_005713c0
// Address: 005713c0
// Address Range: [[005713c0, 00571408]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderDecals_FUN_005713c0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderDecals_FUN_005713c0(CDemonSet *this_ptr)

{
  core_set_cpp_CDemonSet_buildDisplayList_FUN_0056fbd0(this_ptr,0x10);
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0(this_ptr,1);
  core_gore_cpp_CGore_renderDecals_FUN_004ed830(g_CGorePtr,1,0);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0(g_CFireEffectPtr,1,0);
  return;
}
