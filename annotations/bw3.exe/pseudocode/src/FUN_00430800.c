// Name: FUN_00430800
// Address: 00430800
// Address Range: [[00430800, 0043080a]]
// Convention: unknown
// Signature: undefined4 FUN_00430800(int param_1)

#include "nocturne.h"

uint FUN_00430800(int param_1)

{
  return *(uint *)(param_1 + 0x26fc);
}
