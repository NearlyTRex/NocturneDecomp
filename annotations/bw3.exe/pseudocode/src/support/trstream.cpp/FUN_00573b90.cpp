// Name: support_trstream.cpp_FUN_00573b90
// Address: 00573b90
// Address Range: [[00573b90, 00573bf6]]
// Convention: unknown
// Signature: uint support_trstream_cpp_FUN_00573b90(int param_1,int param_2)

#include "nocturne.h"

uint support_trstream_cpp_FUN_00573b90(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xfffffffe;
  }
  if (param_2 < *(int *)(param_1 + 8)) {
    if ((param_2 < *(int *)(param_1 + 0x1c)) ||
       (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24) <= param_2)) {
      iVar1 = support_trstream_cpp_FUN_00573eb0(param_1,param_2);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
    }
    return (uint)*(byte *)((param_2 - *(int *)(param_1 + 0x1c)) + *(int *)(param_1 + 0x18));
  }
  return 0xffffffff;
}
