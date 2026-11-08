// Name: FUN_00587b60
// Address: 00587b60
// Address Range: [[00587b60, 00587b82]]
// Convention: unknown
// Signature: void FUN_00587b60(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_00587b60(uint param_1,int param_2)

{
  FUN_00409830(param_1,param_2);
  *(uint *)(param_2 + 0x50) = 0x3e99999a;
  *(uint *)(param_2 + 0x48) = 0x3f4ccccd;
  return;
}
