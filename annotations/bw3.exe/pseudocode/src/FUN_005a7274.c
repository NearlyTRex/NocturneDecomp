// Name: FUN_005a7274
// Address: 005a7274
// Address Range: [[005a7274, 005a72cb]]
// Convention: unknown
// Signature: void FUN_005a7274(float10 *param_1,uint param_2)

#include "nocturne.h"

void FUN_005a7274(float10 *param_1,uint param_2)

{
  float10 *pfVar1;
  
  if (0x1fff < (int)param_2) {
    param_2 = 0x2000;
  }
  pfVar1 = (float10 *)&DAT_0060789c;
  for (; 0 < (int)param_2; param_2 = (int)param_2 >> 1) {
    if ((param_2 & 1) != 0) {
      *param_1 = *pfVar1 * *param_1;
    }
    pfVar1 = (float10 *)((int)pfVar1 + 10);
  }
  FUN_005a7a5e();
  return;
}
