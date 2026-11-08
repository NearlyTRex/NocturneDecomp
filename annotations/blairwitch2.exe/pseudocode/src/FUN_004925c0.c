// Name: FUN_004925c0
// Address: 004925c0
// Address Range: [[004925c0, 00492604]]
// Convention: unknown
// Signature: undefined4 FUN_004925c0(int param_1)

#include "nocturne.h"

uint FUN_004925c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00492570(param_1);
  if (iVar1 < 0) {
    return 0;
  }
  FUN_004894f0(0x01C38BC0,iVar1 * 100 + param_1 + 0x1f8);
  return 1;
}
