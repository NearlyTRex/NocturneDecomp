// Name: FUN_00571a20
// Address: 00571a20
// Address Range: [[00571a20, 00571a2e]]
// Convention: unknown
// Signature: void FUN_00571a20(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00571a20(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x25640) = param_2;
  return;
}
