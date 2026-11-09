// Name: support_trstream.cpp_FUN_005a1990
// Address: 005a1990
// Address Range: [[005a1990, 005a19aa]]
// Convention: unknown
// Signature: bool support_trstream_cpp_FUN_005a1990(int param_1)

#include "nocturne.h"

bool support_trstream_cpp_FUN_005a1990(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return false;
  }
  return (*(byte *)(*(int *)(param_1 + 4) + 0xc) & 0x20) == 0;
}
