// Name: FUN_00585d50
// Address: 00585d50
// Address Range: [[00585d50, 00585d89]]
// Convention: unknown
// Signature: void FUN_00585d50(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00585d50(float param_1)

{
  float *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1 * (float10)_DAT_005d81af);
  fVar2 = (float10)fsin((float10)param_1 * (float10)_DAT_005d81af);
  *unaff_ESI = (float)fVar1;
  unaff_ESI[1] = 0.0;
  unaff_ESI[2] = 0.0;
  unaff_ESI[3] = (float)fVar2;
  return;
}
