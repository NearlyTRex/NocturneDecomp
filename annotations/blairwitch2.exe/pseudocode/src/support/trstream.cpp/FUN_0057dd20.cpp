// Name: support_trstream.cpp_FUN_0057dd20
// Address: 0057dd20
// Address Range: [[0057dd20, 0057dd3a]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_0057dd20(int param_1)

#include "nocturne.h"

uint support_trstream_cpp_FUN_0057dd20(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = _ftell(*(int *)(param_1 + 4));
  return uVar1;
}
