// Name: FUN_00415250
// Address: 00415250
// Address Range: [[00415250, 004152d3]]
// Convention: unknown
// Signature: void FUN_00415250(int param_1)

#include "nocturne.h"

void FUN_00415250(int param_1)

{
  FUN_00487ec0(param_1);
  FUN_0040b8e0(param_1 + 0x10a60,"speed");
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  FUN_0040bb60(param_1 + 0x2b4,"motion state");
  FUN_0040b960(param_1 + 0x10c74,"morphing");
  FUN_0040b8e0(param_1 + 0x10c78,"morphTimer");
  FUN_0040b730(param_1 + 0x118a8,"morphEvent");
  return;
}
