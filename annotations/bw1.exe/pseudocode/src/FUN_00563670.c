// Name: FUN_00563670
// Address: 00563670
// Address Range: [[00563670, 00563689]]
// Convention: unknown
// Signature: int FUN_00563670(int param_1)

#include "nocturne.h"

int FUN_00563670(int param_1)

{
  return (*(int *)(param_1 + 0x1de78) * 0x10 + 0x18) * *(int *)(param_1 + 0x1ec8c);
}
