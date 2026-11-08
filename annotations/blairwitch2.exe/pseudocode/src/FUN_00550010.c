// Name: FUN_00550010
// Address: 00550010
// Address Range: [[00550010, 00550049]]
// Convention: unknown
// Signature: undefined4 FUN_00550010(int param_1)

#include "nocturne.h"

uint FUN_00550010(int param_1)

{
  if (((*(int *)(param_1 + 0x124) < 2) && (*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0x128)))
     && (*(int *)(param_1 + 0x13c) < 1)) {
    if (*(int *)(param_1 + 0x13c) == 0) {
      return 1;
    }
    return 0;
  }
  return 2;
}
