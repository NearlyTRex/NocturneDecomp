// Name: FUN_004d2760
// Address: 004d2760
// Address Range: [[004d2760, 004d27a0]]
// Convention: unknown
// Signature: undefined4 FUN_004d2760(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint FUN_004d2760(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if ((*(int *)(0x01D2130C + 500) == 0) && ((*(uint *)(param_1 + 0xcdcc) & 0x7fffffff) == 0)) {
    uVar1 = FUN_00408da0(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}
