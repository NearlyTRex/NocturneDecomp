// Name: FUN_0040b6f0
// Address: 0040b6f0
// Address Range: [[0040b6f0, 0040b76e]]
// Convention: unknown
// Signature: void FUN_0040b6f0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b6f0(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if (DAT_007c3038 == 1) {
    uVar1 = FUN_0051afa0(0x01D2C900,DAT_007c3034,DAT_007c303c,param_2);
    *param_1 = uVar1;
    return;
  }
  FUN_005c03c0(DAT_007c3034,&DAT_005d2ab1,&DAT_006106c0);
  FUN_0051b100(0x01D2C900,*param_1,DAT_007c3034,DAT_007c303c,param_2);
  return;
}
