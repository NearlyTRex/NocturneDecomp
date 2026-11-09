// Name: support_trstream.cpp_FUN_0057d600
// Address: 0057d600
// Address Range: [[0057d600, 0057d63e]]
// Convention: unknown
// Signature: uint support_trstream_cpp_FUN_0057d600(int param_1)

#include "nocturne.h"

uint support_trstream_cpp_FUN_0057d600(int param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    return 0xffffffff;
  }
  bVar1 = *(byte *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc));
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return (uint)bVar1;
}
