// Name: unkaddr_0059f520.cpp_FUN_005a0d00
// Address: 005a0d00
// Address Range: [[005a0d00, 005a0d43]]
// Convention: unknown
// Signature: undefined4 unkaddr_0059f520_cpp_FUN_005a0d00(int param_1,int param_2,uint param_3)

#include "nocturne.h"

uint unkaddr_0059f520_cpp_FUN_005a0d00(int param_1,int param_2,uint param_3)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (param_3 != 0) {
      if (param_3 < 2) {
        param_2 = param_2 + *(int *)(param_1 + 0x10);
      }
      else {
        if (param_3 != 2) {
          return 0;
        }
        param_2 = param_2 + *(int *)(param_1 + 8);
      }
    }
    if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 8))) {
      *(int *)(param_1 + 0x10) = param_2;
      return 1;
    }
  }
  return 0;
}
