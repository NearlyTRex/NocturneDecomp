// Name: FUN_00432550
// Address: 00432550
// Address Range: [[00432550, 0043255e]]
// Convention: unknown
// Signature: void FUN_00432550(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00432550(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2740) = param_2;
  return;
}
