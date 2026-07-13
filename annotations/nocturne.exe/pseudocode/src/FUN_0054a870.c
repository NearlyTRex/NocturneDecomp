// Name: FUN_0054a870
// Address: 0054a870
// Address Range: [[0054a870, 0054a88f]]
// Convention: unknown
// Signature: undefined4 FUN_0054a870(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0054a870(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x854) != 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x854) = param_2;
  return 1;
}
