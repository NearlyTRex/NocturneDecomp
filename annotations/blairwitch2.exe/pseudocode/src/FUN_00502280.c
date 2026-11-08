// Name: FUN_00502280
// Address: 00502280
// Address Range: [[00502280, 005022c7]]
// Convention: unknown
// Signature: void FUN_00502280(int param_1)

#include "nocturne.h"

void FUN_00502280(int param_1)

{
  *(uint *)(param_1 + 0x278fc) = 0;
  *(uint *)(param_1 + 0x278f8) = 1;
  if (*(int *)(param_1 + 0x278f4) != 0) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"moloch-morph-todemon.wav");
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"moloch-morph-tohuman.wav");
  return;
}
