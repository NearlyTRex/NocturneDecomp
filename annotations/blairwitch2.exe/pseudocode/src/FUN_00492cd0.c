// Name: FUN_00492cd0
// Address: 00492cd0
// Address Range: [[00492cd0, 00492d0c]]
// Convention: unknown
// Signature: void FUN_00492cd0(int param_1)

#include "nocturne.h"

void FUN_00492cd0(int param_1)

{
  FUN_00447100(param_1);
  FUN_0044fd00(param_1 + 0x350);
  *(uint *)(param_1 + 0xf8) = 1;
  *(uint *)(param_1 + 0x534) = 0;
  *(uint *)(param_1 + 0x538) = 0;
  return;
}
