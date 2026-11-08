// Name: FUN_004f0550
// Address: 004f0550
// Address Range: [[004f0550, 004f05a0]]
// Convention: unknown
// Signature: undefined4 FUN_004f0550(int param_1)

#include "nocturne.h"

uint FUN_004f0550(int param_1)

{
  uint uVar1;
  
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"speed");
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  uVar1 = FUN_0040b870(param_1 + 0x158,"motion state");
  return uVar1;
}
