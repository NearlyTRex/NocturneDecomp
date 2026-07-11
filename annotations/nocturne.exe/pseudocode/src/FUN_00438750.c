// Name: FUN_00438750
// Address: 00438750
// Address Range: [[00438750, 0043877f]]
// Convention: unknown
// Signature: void FUN_00438750(int param_1,int param_2)

#include "nocturne.h"

void FUN_00438750(int param_1,int param_2)

{
  param_1 = param_2 * 0x11c + param_1;
  *(uint *)(param_1 + 0x470) = 0xffffffff;
  *(uint *)(param_1 + 0x40c) = 0;
  return;
}
