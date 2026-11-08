// Name: FUN_004d4330
// Address: 004d4330
// Address Range: [[004d4330, 004d4380]]
// Convention: unknown
// Signature: undefined4 FUN_004d4330(int param_1)

#include "nocturne.h"

uint FUN_004d4330(int param_1)

{
  uint uVar1;
  
  FUN_00487ec0(param_1);
  FUN_0040b8e0(param_1 + 0x10a60,"?speed" + 1);
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  uVar1 = FUN_0040bb60(param_1 + 0x2b4,"motion state");
  return uVar1;
}
