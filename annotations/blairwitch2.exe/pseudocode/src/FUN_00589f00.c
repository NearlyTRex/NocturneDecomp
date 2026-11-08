// Name: FUN_00589f00
// Address: 00589f00
// Address Range: [[00589f00, 00589f0e]]
// Convention: unknown
// Signature: void FUN_00589f00(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00589f00(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x460) = param_2;
  return;
}
