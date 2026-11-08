// Name: FUN_004473f0
// Address: 004473f0
// Address Range: [[004473f0, 00447442]]
// Convention: unknown
// Signature: undefined4 FUN_004473f0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_004473f0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2e0) == 0) {
    if (*(char *)(param_1 + 0x2b8) == '\0') {
      if (param_2 == *(int *)(param_1 + 0x2b4)) {
        return 1;
      }
    }
    else {
      iVar1 = FUN_0040c840(param_2,param_1 + 0x2b8);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x2b4) = param_2;
        return 1;
      }
    }
  }
  return 0;
}
