// Name: FUN_0053c5f0
// Address: 0053c5f0
// Address Range: [[0053c5f0, 0053c648]]
// Convention: unknown
// Signature: int FUN_0053c5f0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0053c5f0(int param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_00604a50);
    FUN_005c0336(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x194) = &PTR_FUN_00604a34;
  FUN_0053c8f0(param_1);
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005c0344(param_1);
  return param_1;
}
