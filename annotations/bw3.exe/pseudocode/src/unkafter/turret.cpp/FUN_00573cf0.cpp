// Name: unkafter_turret.cpp_FUN_00573cf0
// Address: 00573cf0
// Address Range: [[00573cf0, 00573d33]]
// Convention: unknown
// Signature: undefined4 unkafter_turret_cpp_FUN_00573cf0(int param_1,int param_2,uint param_3)

#include "nocturne.h"

uint unkafter_turret_cpp_FUN_00573cf0(int param_1,int param_2,uint param_3)

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
