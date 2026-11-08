// Name: FUN_00478a50
// Address: 00478a50
// Address Range: [[00478a50, 00478ab1]]
// Convention: unknown
// Signature: void FUN_00478a50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

#include "nocturne.h"

void FUN_00478a50(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  if (param_1 + 3 != param_3) {
    param_1[3] = *param_3;
    param_1[4] = param_3[1];
    param_1[5] = param_3[2];
  }
  if (param_1 + 6 != param_4) {
    param_1[6] = *param_4;
    param_1[7] = param_4[1];
    param_1[8] = param_4[2];
  }
  FUN_00478900(param_1);
  return;
}
