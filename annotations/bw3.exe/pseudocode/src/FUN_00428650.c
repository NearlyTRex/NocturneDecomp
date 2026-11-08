// Name: FUN_00428650
// Address: 00428650
// Address Range: [[00428650, 004286b9]]
// Convention: unknown
// Signature: void FUN_00428650(int param_1)

#include "nocturne.h"

void FUN_00428650(int param_1)

{
  int iVar1;
  
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"speed");
  iVar1 = param_1 + 0x158;
  FUN_0040ba30(iVar1,"modelName");
  FUN_0040bab0(iVar1,"motion state");
  FUN_0040bba0(iVar1,"partStatus");
  FUN_0040b8b0(param_1 + 0xd070,"alwaysChaseFast");
  return;
}
