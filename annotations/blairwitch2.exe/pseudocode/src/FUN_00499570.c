// Name: FUN_00499570
// Address: 00499570
// Address Range: [[00499570, 004995d4]]
// Convention: unknown
// Signature: void FUN_00499570(int param_1)

#include "nocturne.h"

void FUN_00499570(int param_1)

{
  if (*(float *)(param_1 + 0x3dc) <= 0.0) {
    return;
  }
  FUN_0046b2b0(DAT_0060b280,param_1 + 0x180);
  FUN_0046b350(DAT_0060b280,param_1 + 0x18c,0);
  FUN_0044fcc0(param_1 + 4,0,0xffffffff);
  thunk_FUN_004e9810(DAT_0060b280);
  return;
}
