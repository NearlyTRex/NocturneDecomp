// Name: FUN_0055c730
// Address: 0055c730
// Address Range: [[0055c730, 0055c7a5]]
// Convention: unknown
// Signature: void FUN_0055c730(float param_1)

#include "nocturne.h"

void FUN_0055c730(float param_1)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_48 [6];
  float local_30;
  uint local_2c;
  uint local_28;
  float local_24;
  float local_20;
  uint local_1c;
  float local_10;
  float local_c;
  
  fVar3 = (float10)fsin((float10)param_1);
  fVar4 = (float10)fcos((float10)param_1);
  local_48[0] = 1.0;
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  local_48[4] = 0.0;
  local_2c = 0;
  local_28 = 0;
  local_1c = 0;
  local_10 = (float)fVar4;
  local_c = (float)fVar3;
  local_48[5] = local_10;
  local_24 = local_c;
  local_20 = local_10;
  local_30 = -local_c;
  pfVar2 = local_48;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
