// Name: FUN_00429f60
// Address: 00429f60
// Address Range: [[00429f60, 00429f6e]]
// Convention: unknown
// Signature: void FUN_00429f60(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00429f60(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x25cc) = param_2;
  return;
}
