// Name: FUN_00524a40
// Address: 00524a40
// Address Range: [[00524a40, 00524adf]]
// Convention: unknown
// Signature: float FUN_00524a40(int *param_1,int param_2)

#include "nocturne.h"

float FUN_00524a40(int *param_1,int param_2)

{
  float local_10;
  
  if ((float)param_1[5] <= 0.0) {
    if (param_2 != *(int *)(param_1[1] * 0x120 + 0x1c4c + *param_1)) {
      return 0.0;
    }
    local_10 = 1.0;
  }
  else if (param_2 == *(int *)(*param_1 + 0x1c4c + param_1[6] * 0x120)) {
    local_10 = (float)param_1[5];
  }
  else {
    if (param_2 != *(int *)(*param_1 + 0x1c4c + param_1[1] * 0x120)) {
      return 0.0;
    }
    local_10 = 1.0 - (float)param_1[5];
  }
  return local_10;
}
