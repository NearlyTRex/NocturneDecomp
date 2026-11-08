// Name: FUN_004a9710
// Address: 004a9710
// Address Range: [[004a9710, 004a9761]]
// Convention: unknown
// Signature: undefined4 FUN_004a9710(int param_1,int param_2,int param_3)

#include "nocturne.h"

uint FUN_004a9710(int param_1,int param_2,int param_3)

{
  while( true ) {
    if ((*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) &&
       (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x18) + param_3)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x1c)) ||
       (*(int *)(param_1 + 0x14) + param_2 <= *(int *)(param_1 + 0x24))) break;
    FUN_004a9270(param_1);
  }
  return 1;
}
