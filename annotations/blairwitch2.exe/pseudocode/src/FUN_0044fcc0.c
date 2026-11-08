// Name: FUN_0044fcc0
// Address: 0044fcc0
// Address Range: [[0044fcc0, 0044fcf4]]
// Convention: unknown
// Signature: void FUN_0044fcc0(undefined4 param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0044fcc0(uint param_1,float param_2,uint param_3)

{
  uint uVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_2;
  uVar1 = FUN_005b7ff0(param_3);
  uVar1 = FUN_0044fd20(uVar1,(int)ROUND(fVar2),uVar1);
  FUN_0044e6a0(uVar1);
  return;
}
