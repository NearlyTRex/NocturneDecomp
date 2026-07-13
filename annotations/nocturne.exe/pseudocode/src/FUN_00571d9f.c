// Name: FUN_00571d9f
// Address: 00571d9f
// Address Range: [[00571d9f, 00571dc6]]
// Convention: unknown
// Signature: int FUN_00571d9f(int param_1)

#include "nocturne.h"

int FUN_00571d9f(int param_1)

{
  *(byte ***)(param_1 + 0x28) = &PTR_FUN_005a4ab0;
  if ((*(byte *)(param_1 + 0x24) & 2) == 0) {
    return param_1;
  }
  FUN_00571ef0(*(uint *)(param_1 + 4));
  return param_1;
}
