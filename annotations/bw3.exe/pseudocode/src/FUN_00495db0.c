// Name: FUN_00495db0
// Address: 00495db0
// Address Range: [[00495db0, 00495df4]]
// Convention: unknown
// Signature: undefined4 FUN_00495db0(int param_1)

#include "nocturne.h"

uint FUN_00495db0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00495d60(param_1);
  if (iVar1 < 0) {
    return 0;
  }
  FUN_0048c150(0x01C6E360,iVar1 * 100 + param_1 + 0x1f8);
  return 1;
}
