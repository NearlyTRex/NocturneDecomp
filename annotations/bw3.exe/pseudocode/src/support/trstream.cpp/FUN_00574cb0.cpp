// Name: support_trstream.cpp_FUN_00574cb0
// Address: 00574cb0
// Address Range: [[00574cb0, 00574cf2]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_00574cb0(int param_1,int param_2,uint param_3)

#include "nocturne.h"

uint support_trstream_cpp_FUN_00574cb0(int param_1,int param_2,uint param_3)

{
  if (param_3 != 0) {
    if (param_3 < 2) {
      param_2 = param_2 + *(int *)(param_1 + 0xc);
    }
    else {
      if (param_3 != 2) {
        return 0;
      }
      param_2 = param_2 + *(int *)(param_1 + 8);
    }
  }
  if ((-1 < param_2) && ((param_2 <= *(int *)(param_1 + 8) || (*(int *)(param_1 + 0x14) != 0)))) {
    *(int *)(param_1 + 0xc) = param_2;
    return 1;
  }
  return 0;
}
