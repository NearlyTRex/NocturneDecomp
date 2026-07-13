// Name: FUN_00411400
// Address: 00411400
// Address Range: [[00411400, 0041142c]]
// Convention: unknown
// Signature: undefined4 FUN_00411400(int param_1)

#include "nocturne.h"

uint FUN_00411400(int param_1)

{
  FUN_00411530(param_1);
  if (*(int *)(param_1 + 0x570) == 0) {
    return 0;
  }
  *(uint *)(*(int *)(param_1 + 0x570) + 0xbca0) = 1;
  return 1;
}
