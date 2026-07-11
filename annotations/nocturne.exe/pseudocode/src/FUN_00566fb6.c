// Name: FUN_00566fb6
// Address: 00566fb6
// Address Range: [[00566fb6, 00566fd5]]
// Convention: unknown
// Signature: double FUN_00566fb6(double param_1,double *param_2)

#include "nocturne.h"

double FUN_00566fb6(double param_1,double *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1;
  fVar2 = fVar1;
  FUN_00563a30();
  *param_2 = (double)fVar1;
  return (double)(fVar2 - fVar1);
}
