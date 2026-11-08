// Name: FUN_0040b930
// Address: 0040b930
// Address Range: [[0040b930, 0040b9ae]]
// Convention: unknown
// Signature: void FUN_0040b930(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b930(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if (DAT_007df9b8 == 1) {
    uVar1 = FUN_004f6770(0x01D81080,DAT_007df9b4,DAT_007df9bc,param_2);
    *param_1 = uVar1;
    return;
  }
  FUN_005a3140(DAT_007df9b4,&DAT_005b5afd,&DAT_005f0990);
  FUN_004f68d0(0x01D81080,*param_1,DAT_007df9b4,DAT_007df9bc,param_2);
  return;
}
