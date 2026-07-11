// Name: FUN_004544d0
// Address: 004544d0
// Address Range: [[004544d0, 00454504]]
// Convention: unknown
// Signature: void FUN_004544d0(undefined4 param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004544d0(uint param_1,float param_2,uint param_3)

{
  uint uVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_2;
  uVar1 = FUN_00563a30(param_3);
  uVar1 = FUN_00454530(uVar1,(int)ROUND(fVar2),uVar1);
  FUN_00453040(uVar1);
  return;
}
