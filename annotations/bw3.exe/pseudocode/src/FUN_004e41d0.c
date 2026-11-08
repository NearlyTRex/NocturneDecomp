// Name: FUN_004e41d0
// Address: 004e41d0
// Address Range: [[004e41d0, 004e4250]]
// Convention: unknown
// Signature: void FUN_004e41d0(int param_1)

#include "nocturne.h"

void FUN_004e41d0(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040b830(param_1 + 0x158,&DAT_005c6b27);
  FUN_0040b830(param_1 + 0x15c,"falloff");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b8b0(param_1 + 0x160,"state");
  FUN_0040b680(param_1 + 0x164,"onEvent");
  FUN_0040b680(param_1 + 0x1c8,"offEvent");
  return;
}
