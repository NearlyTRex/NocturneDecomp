// Name: FUN_004148e0
// Address: 004148e0
// Address Range: [[004148e0, 004148fe]]
// Convention: unknown
// Signature: undefined4 FUN_004148e0(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_004148e0(int param_1,int *param_2)

{
  if (*param_2 != 1) {
    return 0;
  }
  param_2[8] = param_1 + 0x158;
  return 1;
}
