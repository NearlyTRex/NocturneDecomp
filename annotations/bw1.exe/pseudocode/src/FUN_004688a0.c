// Name: FUN_004688a0
// Address: 004688a0
// Address Range: [[004688a0, 004688d4]]
// Convention: unknown
// Signature: void FUN_004688a0(undefined4 param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004688a0(uint param_1,float param_2,uint param_3)

{
  uint uVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_2;
  uVar1 = FUN_005c03a0(param_3);
  uVar1 = FUN_00468900(uVar1,(int)ROUND(fVar2),uVar1);
  FUN_00467270(uVar1);
  return;
}
