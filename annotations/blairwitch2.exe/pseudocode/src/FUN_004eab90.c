// Name: FUN_004eab90
// Address: 004eab90
// Address Range: [[004eab90, 004eabbe]]
// Convention: unknown
// Signature: undefined4 FUN_004eab90(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004eab90(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6e4) != 0) {
    iVar1 = FUN_0040c840(param_2,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
  }
  return 3;
}
