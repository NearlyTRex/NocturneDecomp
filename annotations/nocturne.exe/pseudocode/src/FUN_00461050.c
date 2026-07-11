// Name: FUN_00461050
// Address: 00461050
// Address Range: [[00461050, 00461060]]
// Convention: unknown
// Signature: void FUN_00461050(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00461050(int param_1,uint param_2)

{
  DAT_005b7644 = param_2;
  *(uint *)(param_1 + 0x10) = param_2;
  return;
}
