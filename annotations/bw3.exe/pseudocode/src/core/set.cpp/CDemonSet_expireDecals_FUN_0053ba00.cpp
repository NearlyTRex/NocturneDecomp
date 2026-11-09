// Name: core_set.cpp_CDemonSet_expireDecals_FUN_0053ba00
// Address: 0053ba00
// Address Range: [[0053ba00, 0053ba30]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_expireDecals_FUN_0053ba00(CDemonSet *this_ptr,int expire_flag)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_expireDecals_FUN_0053ba00(CDemonSet *this_ptr,int expire_flag)

{
  core_gore_cpp_CGore_renderDecals_FUN_004ce630(g_CGorePtr,0,expire_flag);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004a1e90(0x01C73654,0,expire_flag);
  return;
}
