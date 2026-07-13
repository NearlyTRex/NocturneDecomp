// Name: FUN_004eef80
// Address: 004eef80
// Address Range: [[004eef80, 004eef93]]
// Convention: unknown
// Signature: bool FUN_004eef80(int param_1)

#include "nocturne.h"

bool FUN_004eef80(int param_1)

{
  return *(int *)(param_1 + 0x1f568) == 0;
}
