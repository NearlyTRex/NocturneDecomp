// Name: FUN_004a8470
// Address: 004a8470
// Address Range: [[004a8470, 004a8480]]
// Convention: unknown
// Signature: bool FUN_004a8470(int param_1)

#include "nocturne.h"

bool FUN_004a8470(int param_1)

{
  return *(int *)(param_1 + 0x10) != 0;
}
