// Name: FUN_00502f80
// Address: 00502f80
// Address Range: [[00502f80, 00503000]]
// Convention: unknown
// Signature: void FUN_00502f80(int param_1)

#include "nocturne.h"

void FUN_00502f80(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b5f0(param_1 + 0x158,&DAT_005e7062);
  FUN_0040b5f0(param_1 + 0x15c,"falloff");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b670(param_1 + 0x160,"state");
  FUN_0040b440(param_1 + 0x164,"onEvent");
  FUN_0040b440(param_1 + 0x1c8,"offEvent");
  return;
}
