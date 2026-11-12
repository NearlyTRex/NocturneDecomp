// Name: core_demnfolk.cpp_FUN_0045bf60
// Address: 0045bf60
// Address Range: [[0045bf60, 0045bf98]]
// Convention: unknown
// Signature: undefined4 core_demnfolk_cpp_FUN_0045bf60(int param_1,undefined4 param_2)

#include "nocturne.h"

uint core_demnfolk_cpp_FUN_0045bf60(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = core_demnfolk_cpp_FUN_0045bec0(param_1,param_2);
  if ((-1 < iVar1) && (iVar1 = *(int *)(param_1 + 0x25ac + iVar1 * 0x78), -1 < iVar1)) {
    return *(uint *)(param_1 + 0x2298 + iVar1 * 4);
  }
  return 0;
}
