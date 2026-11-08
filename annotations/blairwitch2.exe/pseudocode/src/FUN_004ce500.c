// Name: FUN_004ce500
// Address: 004ce500
// Address Range: [[004ce500, 004ce535]]
// Convention: unknown
// Signature: undefined4 FUN_004ce500(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_004ce500(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(int *)(0x01CB6900 + 0x1ec) == 0) && ((*(uint *)(param_1 + 0x10a60) & 0x7fffffff) == 0)) {
    uVar1 = FUN_00408f00(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}
