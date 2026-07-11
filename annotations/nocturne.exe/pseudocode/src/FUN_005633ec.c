// Name: FUN_005633ec
// Address: 005633ec
// Address Range: [[005633ec, 005633fb]]
// Convention: unknown
// Signature: int FUN_005633ec(int param_1)

#include "nocturne.h"

int FUN_005633ec(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x30;
  if (0x39 < iVar1) {
    iVar1 = param_1 + 0x57;
  }
  return iVar1;
}
