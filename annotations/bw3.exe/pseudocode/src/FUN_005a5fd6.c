// Name: FUN_005a5fd6
// Address: 005a5fd6
// Address Range: [[005a5fd6, 005a5ff5]]
// Convention: unknown
// Signature: double FUN_005a5fd6(double param_1,double *param_2)

#include "nocturne.h"

double FUN_005a5fd6(double param_1,double *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1;
  fVar2 = fVar1;
  FUN_005a3120();
  *param_2 = (double)fVar1;
  return (double)(fVar2 - fVar1);
}
