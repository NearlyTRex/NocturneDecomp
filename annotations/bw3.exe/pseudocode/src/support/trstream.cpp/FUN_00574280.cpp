// Name: support_trstream.cpp_FUN_00574280
// Address: 00574280
// Address Range: [[00574280, 005742b4]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_00574280(int param_1,int param_2)

#include "nocturne.h"

uint support_trstream_cpp_FUN_00574280(int param_1,int param_2)

{
  if ((((-1 < param_2) && (param_2 < 0x100)) && (*(int *)(param_1 + 4) != 0)) &&
     (0 < *(int *)(param_1 + 0xc))) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    return 1;
  }
  return 0;
}
