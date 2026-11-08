// Name: FUN_00447630
// Address: 00447630
// Address Range: [[00447630, 00447659]]
// Convention: unknown
// Signature: undefined4 FUN_00447630(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_00447630(int param_1,int *param_2)

{
  uint uVar1;
  
  if (*param_2 == 4) {
    return 1;
  }
  if (*(int *)(param_1 + 0xca58) != 0) {
    return 0;
  }
  uVar1 = FUN_004310b0(param_1,param_2);
  return uVar1;
}
