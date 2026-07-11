// Name: FUN_0044bab0
// Address: 0044bab0
// Address Range: [[0044bab0, 0044bb02]]
// Convention: unknown
// Signature: undefined4 FUN_0044bab0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0044bab0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x17c) == 0) {
    if (*(char *)(param_1 + 0x154) == '\0') {
      if (param_2 == *(int *)(param_1 + 0x150)) {
        return 1;
      }
    }
    else {
      iVar1 = FUN_0040d7e0(param_2,param_1 + 0x154);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x150) = param_2;
        return 1;
      }
    }
  }
  return 0;
}
