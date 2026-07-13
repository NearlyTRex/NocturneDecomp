// Name: FUN_00428bc0
// Address: 00428bc0
// Address Range: [[00428bc0, 00428bef]]
// Convention: unknown
// Signature: undefined4 FUN_00428bc0(int param_1)

#include "nocturne.h"

uint FUN_00428bc0(int param_1)

{
  if ((*(int *)(param_1 + 0x2598) != 0) &&
     ((*(int *)(param_1 + 0x25a8) != 0 || (*(int *)(param_1 + 0x25ac) != 0)))) {
    return 0;
  }
  return 1;
}
