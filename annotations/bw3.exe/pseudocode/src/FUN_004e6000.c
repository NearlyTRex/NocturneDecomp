// Name: FUN_004e6000
// Address: 004e6000
// Address Range: [[004e6000, 004e6059]]
// Convention: unknown
// Signature: int FUN_004e6000(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

int FUN_004e6000(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  float10 fVar1;
  
  fVar1 = SQRT((float10)(param_3 - param_6) * (float10)(param_3 - param_6) +
               (float10)(param_2 - param_5) * (float10)(param_2 - param_5) +
               (float10)(param_1 - param_4) * (float10)(param_1 - param_4));
  FUN_005a3120();
  return (int)ROUND(fVar1);
}
