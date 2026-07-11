// Name: FUN_0055d4a0
// Address: 0055d4a0
// Address Range: [[0055d4a0, 0055d4d9]]
// Convention: unknown
// Signature: void FUN_0055d4a0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055d4a0(float param_1)

{
  float *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1 * (float10)_DAT_00598376);
  fVar2 = (float10)fsin((float10)param_1 * (float10)_DAT_00598376);
  *unaff_ESI = (float)fVar1;
  unaff_ESI[1] = (float)fVar2;
  unaff_ESI[2] = 0.0;
  unaff_ESI[3] = 0.0;
  return;
}
