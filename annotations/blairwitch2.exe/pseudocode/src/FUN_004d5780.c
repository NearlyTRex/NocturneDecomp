// Name: FUN_004d5780
// Address: 004d5780
// Address Range: [[004d5780, 004d57a7]]
// Convention: unknown
// Signature: undefined4 FUN_004d5780(int param_1)

#include "nocturne.h"

uint FUN_004d5780(int param_1)

{
  if (*(int *)(param_1 + 0x25660) == 0) {
    return 0;
  }
  FUN_00503620(param_1 + 0x2b4,0x16,1);
  return 1;
}
