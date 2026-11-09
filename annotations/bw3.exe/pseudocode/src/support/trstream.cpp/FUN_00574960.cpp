// Name: support_trstream.cpp_FUN_00574960
// Address: 00574960
// Address Range: [[00574960, 0057497a]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_00574960(int param_1)

#include "nocturne.h"

uint support_trstream_cpp_FUN_00574960(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = _ftell(*(int *)(param_1 + 4));
  return uVar1;
}
