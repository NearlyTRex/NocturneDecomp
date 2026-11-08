// Name: FUN_00573d60
// Address: 00573d60
// Address Range: [[00573d60, 00573d70]]
// Convention: unknown
// Signature: bool FUN_00573d60(int param_1)

#include "nocturne.h"

bool FUN_00573d60(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}
