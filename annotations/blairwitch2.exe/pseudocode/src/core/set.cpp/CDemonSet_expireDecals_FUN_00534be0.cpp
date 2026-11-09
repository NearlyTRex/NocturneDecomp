// Name: core_set.cpp_CDemonSet_expireDecals_FUN_00534be0
// Address: 00534be0
// Address Range: [[00534be0, 00534c10]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_expireDecals_FUN_00534be0(CDemonSet *this_ptr,int expire_flag)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_expireDecals_FUN_00534be0(CDemonSet *this_ptr,int expire_flag)

{
  core_gore_cpp_CGore_renderDecals_FUN_004c94c0(g_CGorePtr,0,expire_flag);
  core_fire_cpp_CFireEffect_renderDecals_FUN_0049cb50(0x01C3DEB4,0,expire_flag);
  return;
}
