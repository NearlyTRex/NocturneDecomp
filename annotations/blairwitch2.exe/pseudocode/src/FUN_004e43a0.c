// Name: FUN_004e43a0
// Address: 004e43a0
// Address Range: [[004e43a0, 004e4420]]
// Convention: unknown
// Signature: void FUN_004e43a0(int param_1)

#include "nocturne.h"

void FUN_004e43a0(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040b8e0(param_1 + 0x2b4,&DAT_005dc11a);
  FUN_0040b8e0(param_1 + 0x2b8,"falloff");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b960(param_1 + 700,"state");
  FUN_0040b730(param_1 + 0x2c0,"onEvent");
  FUN_0040b730(param_1 + 0x324,"offEvent");
  return;
}
