// Name: FUN_005b7750
// Address: 005b7750
// Address Range: [[005b7750, 005b7784]]
// Convention: unknown
// Signature: void FUN_005b7750(float *param_1)

#include "nocturne.h"

void FUN_005b7750(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *unaff_ESI = -*param_1;
  unaff_ESI[1] = fVar1;
  unaff_ESI[2] = fVar2;
  unaff_ESI[3] = fVar3;
  return;
}
