// Name: FUN_0051fcb0
// Address: 0051fcb0
// Address Range: [[0051e914, 0051e919] [0051fcb0, 0051fcd6]]
// Convention: unknown
// Signature: undefined4 FUN_0051fcb0(int param_1)

#include "nocturne.h"

uint FUN_0051fcb0(int param_1)

{
  if (((*(int *)(param_1 + 0x25640) != 0) && (*(int *)(param_1 + 0x25654) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x25654) + 0x43c) == 9)) {
    return 1;
  }
  return 0;
}
