// Name: FUN_00548210
// Address: 00548210
// Address Range: [[00548210, 00548229]]
// Convention: unknown
// Signature: int FUN_00548210(int param_1)

#include "nocturne.h"

int FUN_00548210(int param_1)

{
  return (*(int *)(param_1 + 0x1de78) * 0x10 + 0x18) * *(int *)(param_1 + 0x1ec8c);
}
