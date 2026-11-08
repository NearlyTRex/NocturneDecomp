// Name: FUN_00431620
// Address: 00431620
// Address Range: [[00431620, 00431652]]
// Convention: unknown
// Signature: undefined4 FUN_00431620(int param_1)

#include "nocturne.h"

uint FUN_00431620(int param_1)

{
  if ((*(int *)(param_1 + 0x2704) != 0) &&
     ((*(int *)(param_1 + 0x273c) != 0 || (*(int *)(param_1 + 0x2740) != 0)))) {
    return 0;
  }
  return 1;
}
