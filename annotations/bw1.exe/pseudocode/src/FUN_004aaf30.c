// Name: FUN_004aaf30
// Address: 004aaf30
// Address Range: [[004aaf30, 004aaf74]]
// Convention: unknown
// Signature: undefined4 FUN_004aaf30(int param_1)

#include "nocturne.h"

uint FUN_004aaf30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004aaee0(param_1);
  if (iVar1 < 0) {
    return 0;
  }
  FUN_004a1b70(0x01C51D80,iVar1 * 100 + param_1 + 0x1f8);
  return 1;
}
