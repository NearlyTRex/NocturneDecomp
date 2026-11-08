// Name: FUN_00462540
// Address: 00462540
// Address Range: [[00462540, 00462574]]
// Convention: unknown
// Signature: void FUN_00462540(undefined4 param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00462540(uint param_1,float param_2,uint param_3)

{
  uint uVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_2;
  uVar1 = FUN_005a3120(param_3);
  uVar1 = FUN_004625a0(uVar1,(int)ROUND(fVar2),uVar1);
  FUN_00460f20(uVar1);
  return;
}
