// Name: FUN_004d2720
// Address: 004d2720
// Address Range: [[004d2720, 004d2755]]
// Convention: unknown
// Signature: undefined4 FUN_004d2720(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_004d2720(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(int *)(0x01D2130C + 500) == 0) && ((*(uint *)(param_1 + 0xcdcc) & 0x7fffffff) == 0)) {
    uVar1 = FUN_00408d10(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}
