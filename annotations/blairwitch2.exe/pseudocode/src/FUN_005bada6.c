// Name: FUN_005bada6
// Address: 005bada6
// Address Range: [[005bada6, 005badc5]]
// Convention: unknown
// Signature: double FUN_005bada6(double param_1,double *param_2)

#include "nocturne.h"

double FUN_005bada6(double param_1,double *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1;
  fVar2 = fVar1;
  FUN_005b7ff0();
  *param_2 = (double)fVar1;
  return (double)(fVar2 - fVar1);
}
