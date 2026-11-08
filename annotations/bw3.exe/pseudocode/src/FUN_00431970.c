// Name: FUN_00431970
// Address: 00431970
// Address Range: [[00431970, 0043197e]]
// Convention: unknown
// Signature: void FUN_00431970(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00431970(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2740) = param_2;
  return;
}
