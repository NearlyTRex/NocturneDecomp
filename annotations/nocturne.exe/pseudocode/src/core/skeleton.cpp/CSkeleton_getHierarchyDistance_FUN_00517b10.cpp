// Name: core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
// Address: 00517b10
// Address Range: [[00517b10, 00517b46]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10(int param_1,int param_2,int param_3)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_2 == param_3) {
      return iVar1;
    }
    param_2 = *(int *)(param_1 + 0x2857c + param_2 * 0x24);
    iVar1 = iVar1 + 1;
  } while (-1 < param_2);
  if (param_3 < 0) {
    return iVar1;
  }
  return -1;
}
