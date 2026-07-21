// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
// Address: 0051d380
// Address Range: [[0051d380, 0051d3b6]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(int param_1,undefined4 *param_2,int param_3)

#include "nocturne.h"

uint * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(int param_1,uint *param_2,int param_3)

{
  param_1 = param_3 * 0x30 + param_1;
  *param_2 = *(uint *)(param_1 + 0xe8c);
  param_2[1] = *(uint *)(param_1 + 0xe9c);
  param_2[2] = *(uint *)(param_1 + 0xeac);
  return param_2;
}
