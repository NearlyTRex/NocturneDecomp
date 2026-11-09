// Name: support_trstream.cpp_FUN_0057dd40
// Address: 0057dd40
// Address Range: [[0057dd40, 0057dd5a]]
// Convention: unknown
// Signature: bool support_trstream_cpp_FUN_0057dd40(int param_1)

#include "nocturne.h"

bool support_trstream_cpp_FUN_0057dd40(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return false;
  }
  return (*(byte *)(*(int *)(param_1 + 4) + 0xc) & 0x20) == 0;
}
