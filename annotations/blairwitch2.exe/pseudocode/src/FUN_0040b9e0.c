// Name: FUN_0040b9e0
// Address: 0040b9e0
// Address Range: [[0040b9e0, 0040ba5e]]
// Convention: unknown
// Signature: void FUN_0040b9e0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b9e0(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if (DAT_007bc038 == 1) {
    uVar1 = FUN_004fc040(0x01D182F0,DAT_007bc034,DAT_007bc03c,param_2);
    *param_1 = uVar1;
    return;
  }
  FUN_005b8010(DAT_007bc034,&DAT_005cab4e,&DAT_00609590);
  FUN_004fc1a0(0x01D182F0,*param_1,DAT_007bc034,DAT_007bc03c,param_2);
  return;
}
