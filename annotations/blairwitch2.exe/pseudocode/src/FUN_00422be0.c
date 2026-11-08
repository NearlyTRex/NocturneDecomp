// Name: FUN_00422be0
// Address: 00422be0
// Address Range: [[00422be0, 00422c0a]]
// Convention: unknown
// Signature: void FUN_00422be0(int param_1)

#include "nocturne.h"

void FUN_00422be0(int param_1)

{
  FUN_00408ac0(param_1);
  if (*(char *)(param_1 + 0x2514) == '\0') {
    return;
  }
  FUN_00549210(param_1 + 0x2514);
  return;
}
