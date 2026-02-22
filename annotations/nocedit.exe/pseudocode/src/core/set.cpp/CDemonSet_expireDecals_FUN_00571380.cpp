// Name: core_set.cpp_CDemonSet_expireDecals_FUN_00571380
// Address: 00571380
// Address Range: [[00571380, 005713b0]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_expireDecals_FUN_00571380(CDemonSet *this_ptr,int expire_flag)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_expireDecals_FUN_00571380(CDemonSet *this_ptr,int expire_flag)

{
  core_gore_cpp_CGore_renderDecals_FUN_004ed830(g_CGorePtr,0,expire_flag);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0(g_CFireEffectPtr,0,expire_flag);
  return;
}
