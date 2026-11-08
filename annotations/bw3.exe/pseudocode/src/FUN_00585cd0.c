// Name: FUN_00585cd0
// Address: 00585cd0
// Address Range: [[00585cd0, 00585d09]]
// Convention: unknown
// Signature: void FUN_00585cd0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00585cd0(float param_1)

{
  float *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1 * (float10)_DAT_005d81a7);
  fVar2 = (float10)fsin((float10)param_1 * (float10)_DAT_005d81a7);
  *unaff_ESI = (float)fVar1;
  unaff_ESI[1] = (float)fVar2;
  unaff_ESI[2] = 0.0;
  unaff_ESI[3] = 0.0;
  return;
}
