// Name: FUN_005c3166
// Address: 005c3166
// Address Range: [[005c3166, 005c3185]]
// Convention: unknown
// Signature: double FUN_005c3166(double param_1,double *param_2)

#include "nocturne.h"

double FUN_005c3166(double param_1,double *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1;
  fVar2 = fVar1;
  FUN_005c03a0();
  *param_2 = (double)fVar1;
  return (double)(fVar2 - fVar1);
}
