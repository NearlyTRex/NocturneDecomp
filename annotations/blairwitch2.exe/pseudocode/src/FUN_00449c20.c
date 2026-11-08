// Name: FUN_00449c20
// Address: 00449c20
// Address Range: [[00449c20, 00449c46]]
// Convention: unknown
// Signature: void FUN_00449c20(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

void FUN_00449c20(float *param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)*param_3);
  fVar2 = (float10)fsin((float10)*param_3);
  *param_2 = (float)fVar1;
  *param_1 = (float)fVar2;
  return;
}
