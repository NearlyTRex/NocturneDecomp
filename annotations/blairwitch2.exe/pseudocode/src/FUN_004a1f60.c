// Name: FUN_004a1f60
// Address: 004a1f60
// Address Range: [[004a1f60, 004a1f70]]
// Convention: unknown
// Signature: bool FUN_004a1f60(int param_1)

#include "nocturne.h"

bool FUN_004a1f60(int param_1)

{
  return *(int *)(param_1 + 0x10) != 0;
}
