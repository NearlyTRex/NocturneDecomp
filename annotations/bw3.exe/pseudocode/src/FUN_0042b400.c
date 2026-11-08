// Name: FUN_0042b400
// Address: 0042b400
// Address Range: [[0042b400, 0042b42a]]
// Convention: unknown
// Signature: void FUN_0042b400(int param_1)

#include "nocturne.h"

void FUN_0042b400(int param_1)

{
  FUN_004088d0(param_1);
  if (*(char *)(param_1 + 0x24a8) == '\0') {
    return;
  }
  FUN_00550450(param_1 + 0x24a8);
  return;
}
