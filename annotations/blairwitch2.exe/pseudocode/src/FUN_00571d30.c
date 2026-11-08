// Name: FUN_00571d30
// Address: 00571d30
// Address Range: [[00571d30, 00571d74]]
// Convention: unknown
// Signature: void FUN_00571d30(int param_1,int param_2)

#include "nocturne.h"

void FUN_00571d30(int param_1,int param_2)

{
  float fVar1;
  
  if ((*(int *)(param_1 + 0x281c) == 0) &&
     (fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4),
     *(float *)(param_1 + 0x25a8) = fVar1, fVar1 <= 0.0)) {
    *(uint *)(param_1 + 0x25a8) = 0;
    FUN_00503620(param_1 + 0x2b4,3,1);
    return;
  }
  return;
}
