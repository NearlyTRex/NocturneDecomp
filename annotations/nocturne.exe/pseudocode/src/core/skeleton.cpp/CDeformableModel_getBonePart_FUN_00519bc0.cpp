// Name: core_skeleton.cpp_CDeformableModel_getBonePart_FUN_00519bc0
// Address: 00519bc0
// Address Range: [[00519bc0, 00519bdb]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_skeleton_cpp_CDeformableModel_getBonePart_FUN_00519bc0(int param_1,int param_2)

#include "nocturne.h"

uint __cdecl core_skeleton_cpp_CDeformableModel_getBonePart_FUN_00519bc0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc00) < 2) {
    return 0;
  }
  return *(uint *)(param_1 + 0x26fc + param_2 * 4);
}
