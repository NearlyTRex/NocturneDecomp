// Name: FUN_005085c0
// Address: 005085c0
// Address Range: [[005085c0, 00508619]]
// Convention: unknown
// Signature: int FUN_005085c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

int FUN_005085c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  float10 fVar1;
  
  fVar1 = SQRT((float10)(param_3 - param_6) * (float10)(param_3 - param_6) +
               (float10)(param_2 - param_5) * (float10)(param_2 - param_5) +
               (float10)(param_1 - param_4) * (float10)(param_1 - param_4));
  FUN_005c03a0();
  return (int)ROUND(fVar1);
}
