// Name: FUN_004a0570
// Address: 004a0570
// Address Range: [[004a0570, 004a05ce]]
// Convention: unknown
// Signature: void FUN_004a0570(float *param_1)

#include "nocturne.h"

void FUN_004a0570(float *param_1)

{
  float fVar1;
  
  if ((0.0 < *param_1) &&
     (fVar1 = *param_1 - *(float *)(0x01D2130C + 0x314), *param_1 = fVar1, fVar1 < 0.0)) {
    *param_1 = 0.0;
    if (param_1[1] != 7.00649e-45) {
      FUN_0057d050(0x02D0C1A0,param_1[1]);
    }
    FUN_00556be0(param_1[2]);
    param_1[2] = 0.0;
  }
  return;
}
