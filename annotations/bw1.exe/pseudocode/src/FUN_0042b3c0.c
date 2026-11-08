// Name: FUN_0042b3c0
// Address: 0042b3c0
// Address Range: [[0042b3c0, 0042b429]]
// Convention: unknown
// Signature: void FUN_0042b3c0(int param_1)

#include "nocturne.h"

void FUN_0042b3c0(int param_1)

{
  int iVar1;
  
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"speed");
  iVar1 = param_1 + 0x158;
  FUN_0040b7f0(iVar1,"modelName");
  FUN_0040b870(iVar1,"motion state");
  FUN_0040b960(iVar1,"partStatus");
  FUN_0040b670(param_1 + 0xc284,"alwaysChaseFast");
  return;
}
