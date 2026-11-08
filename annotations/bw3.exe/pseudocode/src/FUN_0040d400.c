// Name: FUN_0040d400
// Address: 0040d400
// Address Range: [[0040d400, 0040d453]]
// Convention: unknown
// Signature: void FUN_0040d400(int *param_1)

#include "nocturne.h"

void FUN_0040d400(int *param_1)

{
  if (*param_1 != 0) {
    FUN_005a3770(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_005a3770(param_1[1]);
    param_1[1] = 0;
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_005a3770(param_1[2]);
  param_1[2] = 0;
  return;
}
