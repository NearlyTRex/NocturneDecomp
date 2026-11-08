// Name: FUN_00598590
// Address: 00598590
// Address Range: [[00598590, 005985f0]]
// Convention: unknown
// Signature: undefined4 FUN_00598590(int param_1)

#include "nocturne.h"

uint FUN_00598590(int param_1)

{
  uint uVar1;
  
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  uVar1 = FUN_0040bab0(param_1 + 0x158,"motion state");
  return uVar1;
}
