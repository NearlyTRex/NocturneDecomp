// Name: FUN_0040e4f0
// Address: 0040e4f0
// Address Range: [[0040e4f0, 0040e51b]]
// Convention: unknown
// Signature: undefined4 FUN_0040e4f0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0040e4f0(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x314) != 0) {
    iVar1 = FUN_0040c550(param_2,"CHero");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
