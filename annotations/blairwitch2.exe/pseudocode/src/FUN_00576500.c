// Name: FUN_00576500
// Address: 00576500
// Address Range: [[00576500, 0057650e]]
// Convention: unknown
// Signature: void FUN_00576500(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00576500(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x430) = param_2;
  return;
}
