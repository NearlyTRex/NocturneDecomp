// Name: FUN_0059d960
// Address: 0059d960
// Address Range: [[0059d960, 0059d984]]
// Convention: unknown
// Signature: undefined4 FUN_0059d960(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0059d960(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x834) != 0) && (param_2 <= *(int *)(param_1 + 0x834))) {
    *(int *)(param_1 + 0x844) = param_2;
    return 1;
  }
  return 0;
}
