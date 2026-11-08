// Name: FUN_00509830
// Address: 00509830
// Address Range: [[00509830, 0050985e]]
// Convention: unknown
// Signature: undefined4 FUN_00509830(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00509830(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x588) != 0) {
    iVar1 = FUN_0040c550(param_2,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
  }
  return 3;
}
