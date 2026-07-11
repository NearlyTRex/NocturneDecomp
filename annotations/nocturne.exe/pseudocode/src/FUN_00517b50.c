// Name: FUN_00517b50
// Address: 00517b50
// Address Range: [[00517b50, 00517b69]]
// Convention: unknown
// Signature: int FUN_00517b50(int param_1)

#include "nocturne.h"

int FUN_00517b50(int param_1)

{
  return (*(int *)(param_1 + 0x28558) * 0x10 + 0x18) * *(int *)(param_1 + 0x2936c);
}
