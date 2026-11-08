// Name: FUN_005783a0
// Address: 005783a0
// Address Range: [[005783a0, 005783e7]]
// Convention: unknown
// Signature: undefined4 FUN_005783a0(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_005783a0(int param_1,int *param_2)

{
  if ((*param_2 == 1) && ((*(int *)(param_1 + 0x2d0) == 4 || (*(int *)(param_1 + 0x2d0) == 7)))) {
    return 1;
  }
  if (((*param_2 == 3) && (*(int *)(param_1 + 0x2d0) == 5)) &&
     (*(int *)(param_1 + 0x450) == param_2[1])) {
    return 1;
  }
  return 0;
}
