// Name: FUN_00599a40
// Address: 00599a40
// Address Range: [[00599a40, 00599a69]]
// Convention: unknown
// Signature: void FUN_00599a40(int param_1,int param_2)

#include "nocturne.h"

void FUN_00599a40(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x20868) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x24fc) = 1;
    }
    FUN_0042e300(param_1,param_2);
  }
  return;
}
