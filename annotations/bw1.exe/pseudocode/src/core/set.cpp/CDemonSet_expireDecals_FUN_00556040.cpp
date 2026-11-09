// Name: core_set.cpp_CDemonSet_expireDecals_FUN_00556040
// Address: 00556040
// Address Range: [[00556040, 00556070]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_expireDecals_FUN_00556040(CDemonSet *this_ptr,int expire_flag)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_expireDecals_FUN_00556040(CDemonSet *this_ptr,int expire_flag)

{
  core_gore_cpp_CGore_renderDecals_FUN_004e5cd0(g_CGorePtr,0,expire_flag);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004b54a0(0x01C57074,0,expire_flag);
  return;
}
