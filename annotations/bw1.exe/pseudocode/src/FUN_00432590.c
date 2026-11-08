// Name: FUN_00432590
// Address: 00432590
// Address Range: [[00432590, 004325a3]]
// Convention: unknown
// Signature: bool FUN_00432590(int param_1)

#include "nocturne.h"

bool FUN_00432590(int param_1)

{
  return *(int *)(param_1 + 0x2740) == 0;
}
