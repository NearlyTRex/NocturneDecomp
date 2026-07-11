// Name: FUN_00476ce0
// Address: 00476ce0
// Address Range: [[00476ce0, 00476d0a]]
// Convention: unknown
// Signature: void FUN_00476ce0(int *param_1)

#include "nocturne.h"

void FUN_00476ce0(int *param_1)

{
  if (param_1[1] - param_1[2] < *param_1) {
    *param_1 = param_1[1] - param_1[2];
    if (-1 < *param_1) {
      return;
    }
  }
  else if (-1 < *param_1) {
    return;
  }
  *param_1 = 0;
  return;
}
