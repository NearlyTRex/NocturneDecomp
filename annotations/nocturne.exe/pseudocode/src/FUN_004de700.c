// Name: FUN_004de700
// Address: 004de700
// Address Range: [[004de700, 004de747]]
// Convention: unknown
// Signature: void FUN_004de700(int param_1)

#include "nocturne.h"

void FUN_004de700(int param_1)

{
  *(uint *)(param_1 + 0x21cf8) = 0;
  *(uint *)(param_1 + 0x21cf4) = 1;
  if (*(int *)(param_1 + 0x21cf0) != 0) {
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"moloch-morph-todemon.wav");
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"moloch-morph-tohuman.wav");
  return;
}
