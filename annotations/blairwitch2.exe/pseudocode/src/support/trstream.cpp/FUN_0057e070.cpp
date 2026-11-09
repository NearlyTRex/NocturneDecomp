// Name: support_trstream.cpp_FUN_0057e070
// Address: 0057e070
// Address Range: [[0057e070, 0057e0b2]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_0057e070(int param_1,int param_2,uint param_3)

#include "nocturne.h"

uint support_trstream_cpp_FUN_0057e070(int param_1,int param_2,uint param_3)

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
