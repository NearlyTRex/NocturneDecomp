// Name: FUN_00585d90
// Address: 00585d90
// Address Range: [[00585d90, 00585ddb]]
// Convention: unknown
// Signature: void FUN_00585d90(float param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00585d90(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)fsin((float10)param_1 * (float10)_DAT_005d81b3);
  fVar5 = (float10)fcos((float10)param_1 * (float10)_DAT_005d81b3);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *unaff_ESI = (float)fVar5;
  unaff_ESI[1] = (float)(fVar4 * (float10)fVar1);
  unaff_ESI[2] = (float)(fVar4 * (float10)fVar2);
  unaff_ESI[3] = (float)(fVar4 * (float10)fVar3);
  return;
}
