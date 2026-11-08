// Name: FUN_004d5f70
// Address: 004d5f70
// Address Range: [[004d5f70, 004d5fc0]]
// Convention: unknown
// Signature: undefined4 FUN_004d5f70(int param_1)

#include "nocturne.h"

uint FUN_004d5f70(int param_1)

{
  uint uVar1;
  
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  uVar1 = FUN_0040bab0(param_1 + 0x158,"motion state");
  return uVar1;
}
