// Name: FUN_005b7b30
// Address: 005b7b30
// Address Range: [[005b7b30, 005b7b69]]
// Convention: unknown
// Signature: void FUN_005b7b30(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b7b30(float param_1)

{
  float *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1 * (float10)_DAT_005fa180);
  fVar2 = (float10)fsin((float10)param_1 * (float10)_DAT_005fa180);
  *unaff_ESI = (float)fVar1;
  unaff_ESI[1] = 0.0;
  unaff_ESI[2] = (float)fVar2;
  unaff_ESI[3] = 0.0;
  return;
}
