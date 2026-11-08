// Name: FUN_0045d550
// Address: 0045d550
// Address Range: [[0045d550, 0045d5a2]]
// Convention: unknown
// Signature: undefined4 FUN_0045d550(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0045d550(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x184) == 0) {
    if (*(char *)(param_1 + 0x15c) == '\0') {
      if (param_2 == *(int *)(param_1 + 0x158)) {
        return 1;
      }
    }
    else {
      iVar1 = FUN_0040c550(param_2,param_1 + 0x15c);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x158) = param_2;
        return 1;
      }
    }
  }
  return 0;
}
