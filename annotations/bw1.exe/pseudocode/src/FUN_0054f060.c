// Name: FUN_0054f060
// Address: 0054f060
// Address Range: [[0054f060, 0054f0c2]]
// Convention: unknown
// Signature: void FUN_0054f060(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_0054f060(uint param_1,int param_2)

{
  *(uint *)(param_2 + 0x144) = 0x1f;
  if ((uint *)(param_2 + 300) != (uint *)(param_2 + 0x20)) {
    *(uint *)(param_2 + 300) = *(uint *)(param_2 + 0x20);
    *(uint *)(param_2 + 0x130) = *(uint *)(param_2 + 0x24);
    *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x28);
  }
  if ((uint *)(param_2 + 0x138) == (uint *)(param_2 + 0x30)) {
    *(uint *)(param_2 + 0x148) = 0;
    return;
  }
  *(uint *)(param_2 + 0x138) = *(uint *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x13c) = *(uint *)(param_2 + 0x34);
  *(uint *)(param_2 + 0x140) = *(uint *)(param_2 + 0x38);
  *(uint *)(param_2 + 0x148) = 0;
  return;
}
