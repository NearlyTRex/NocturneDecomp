// Name: FUN_00594020
// Address: 00594020
// Address Range: [[00594020, 00594059]]
// Convention: unknown
// Signature: void FUN_00594020(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00594020(float param_1)

{
  float *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1 * (float10)_DAT_005eedb2);
  fVar2 = (float10)fsin((float10)param_1 * (float10)_DAT_005eedb2);
  *unaff_ESI = (float)fVar1;
  unaff_ESI[1] = 0.0;
  unaff_ESI[2] = 0.0;
  unaff_ESI[3] = (float)fVar2;
  return;
}
