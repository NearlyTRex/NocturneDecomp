// Name: crt_unknown.c_FUN_0056a234
// Address: 0056a234
// Address Range: [[0056a234, 0056a28b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056a234(float10 *param_1,uint param_2)

#include "nocturne.h"

void FUN_0056a234(float10 *param_1,uint param_2)

{
  float10 *pfVar1;
  
  if (0x1fff < (int)param_2) {
    param_2 = 0x2000;
  }
  pfVar1 = (float10 *)&DAT_005c1c28;
  for (; 0 < (int)param_2; param_2 = (int)param_2 >> 1) {
    if ((param_2 & 1) != 0) {
      *param_1 = *pfVar1 * *param_1;
    }
    pfVar1 = (float10 *)((int)pfVar1 + 10);
  }
  return;
}
