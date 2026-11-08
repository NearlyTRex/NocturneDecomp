// Name: FUN_00442190
// Address: 00442190
// Address Range: [[00442190, 004421ca]]
// Convention: unknown
// Signature: void FUN_00442190(int param_1)

#include "nocturne.h"

void FUN_00442190(int param_1)

{
  FUN_005a28f0(param_1 + 8,0,4000);
  *(uint *)(param_1 + 0xfa8) = 0;
  *(uint *)(param_1 + 0xfac) = 0;
  FUN_00466220("console.txt");
  return;
}
