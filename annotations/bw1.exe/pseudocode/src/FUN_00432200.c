// Name: FUN_00432200
// Address: 00432200
// Address Range: [[00432200, 00432232]]
// Convention: unknown
// Signature: undefined4 FUN_00432200(int param_1)

#include "nocturne.h"

uint FUN_00432200(int param_1)

{
  if ((*(int *)(param_1 + 0x2704) != 0) &&
     ((*(int *)(param_1 + 0x273c) != 0 || (*(int *)(param_1 + 0x2740) != 0)))) {
    return 0;
  }
  return 1;
}
