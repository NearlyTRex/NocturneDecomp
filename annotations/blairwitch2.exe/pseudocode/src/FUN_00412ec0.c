// Name: FUN_00412ec0
// Address: 00412ec0
// Address Range: [[00412ec0, 00412ef6]]
// Convention: unknown
// Signature: void FUN_00412ec0(int param_1)

#include "nocturne.h"

void FUN_00412ec0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040d060(0x3f000000);
  if (iVar1 != 0) {
    FUN_00503620(param_1 + 0x2b4,1,1);
    return;
  }
  FUN_00503620(param_1 + 0x2b4,2,1);
  return;
}
