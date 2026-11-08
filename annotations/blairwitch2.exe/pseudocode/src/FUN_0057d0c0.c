// Name: FUN_0057d0c0
// Address: 0057d0c0
// Address Range: [[0057d0c0, 0057d103]]
// Convention: unknown
// Signature: undefined4 FUN_0057d0c0(int param_1,int param_2,uint param_3)

#include "nocturne.h"

uint FUN_0057d0c0(int param_1,int param_2,uint param_3)

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
