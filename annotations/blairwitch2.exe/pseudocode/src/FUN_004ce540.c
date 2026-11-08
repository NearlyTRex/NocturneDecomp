// Name: FUN_004ce540
// Address: 004ce540
// Address Range: [[004ce540, 004ce580]]
// Convention: unknown
// Signature: undefined4 FUN_004ce540(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint FUN_004ce540(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if ((*(int *)(0x01CB6900 + 0x1ec) == 0) && ((*(uint *)(param_1 + 0x10a60) & 0x7fffffff) == 0)) {
    uVar1 = FUN_00408f90(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}
