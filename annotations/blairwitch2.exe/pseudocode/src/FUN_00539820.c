// Name: FUN_00539820
// Address: 00539820
// Address Range: [[00539820, 00539838]]
// Convention: unknown
// Signature: void FUN_00539820(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00539820(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x15aec4) = param_2;
  *(uint *)(param_1 + 0x15aec8) = param_3;
  return;
}
