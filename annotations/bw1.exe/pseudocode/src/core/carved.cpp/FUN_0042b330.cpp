// Name: core_carved.cpp_FUN_0042b330
// Address: 0042b330
// Address Range: [[0042b330, 0042b368]]
// Convention: unknown
// Signature: undefined4 core_carved_cpp_FUN_0042b330(int param_1,undefined4 param_2)

#include "nocturne.h"

uint core_carved_cpp_FUN_0042b330(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = core_carved_cpp_FUN_0042b290(param_1,param_2);
  if ((-1 < iVar1) && (iVar1 = *(int *)(param_1 + 0x25ac + iVar1 * 0x78), -1 < iVar1)) {
    return *(uint *)(param_1 + 0x2298 + iVar1 * 4);
  }
  return 0;
}
