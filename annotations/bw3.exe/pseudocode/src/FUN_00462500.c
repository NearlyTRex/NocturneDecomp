// Name: FUN_00462500
// Address: 00462500
// Address Range: [[00462500, 0046251f]]
// Convention: unknown
// Signature: int FUN_00462500(int param_1)

#include "nocturne.h"

int FUN_00462500(int param_1)

{
  *(byte *)(param_1 + 0x78) = 0;
  *(uint *)(param_1 + 0x178) = 0;
  FUN_00462520(param_1);
  return param_1;
}
