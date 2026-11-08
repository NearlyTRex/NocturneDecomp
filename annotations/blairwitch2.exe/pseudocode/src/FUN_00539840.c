// Name: FUN_00539840
// Address: 00539840
// Address Range: [[00539840, 0053985e]]
// Convention: unknown
// Signature: void FUN_00539840(int param_1)

#include "nocturne.h"

void FUN_00539840(int param_1)

{
  if (*(float *)(param_1 + 0x15aec8) <= 0.0) {
    return;
  }
  *(uint *)(param_1 + 0x15aec8) = 0x1e3ce508;
  return;
}
