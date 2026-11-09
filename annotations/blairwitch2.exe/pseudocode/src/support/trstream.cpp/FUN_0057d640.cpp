// Name: support_trstream.cpp_FUN_0057d640
// Address: 0057d640
// Address Range: [[0057d640, 0057d674]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_0057d640(int param_1,int param_2)

#include "nocturne.h"

uint support_trstream_cpp_FUN_0057d640(int param_1,int param_2)

{
  if ((((-1 < param_2) && (param_2 < 0x100)) && (*(int *)(param_1 + 4) != 0)) &&
     (0 < *(int *)(param_1 + 0xc))) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    return 1;
  }
  return 0;
}
