// Name: FUN_00462580
// Address: 00462580
// Address Range: [[00462580, 0046259a]]
// Convention: unknown
// Signature: void FUN_00462580(int param_1)

#include "nocturne.h"

void FUN_00462580(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00462420(param_1 + 0x78);
  *(uint *)(param_1 + 0x178) = uVar1;
  return;
}
