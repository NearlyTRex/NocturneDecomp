// Name: FUN_00410d00
// Address: 00410d00
// Address Range: [[00410d00, 00410d23]]
// Convention: unknown
// Signature: void FUN_00410d00(int param_1)

#include "nocturne.h"

void FUN_00410d00(int param_1)

{
  FUN_00408a80(param_1);
  *(uint *)(param_1 + 0xfc) = 1;
  *(uint *)(param_1 + 0xf8) = 1;
  return;
}
