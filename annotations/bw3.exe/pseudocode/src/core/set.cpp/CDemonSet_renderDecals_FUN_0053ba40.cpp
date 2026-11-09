// Name: core_set.cpp_CDemonSet_renderDecals_FUN_0053ba40
// Address: 0053ba40
// Address Range: [[0053ba40, 0053ba88]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderDecals_FUN_0053ba40(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderDecals_FUN_0053ba40(CDemonSet *this_ptr)

{
  core_set_cpp_FUN_00539f30(this_ptr,0x10);
  core_set_cpp_FUN_005346b0(this_ptr,1);
  core_gore_cpp_CGore_renderDecals_FUN_004ce630(g_CGorePtr,1,0);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004a1e90(0x01C73654,1,0);
  return;
}
