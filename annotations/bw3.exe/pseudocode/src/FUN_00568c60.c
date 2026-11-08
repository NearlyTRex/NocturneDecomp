// Name: FUN_00568c60
// Address: 00568c60
// Address Range: [[00568c60, 00568c7c]]
// Convention: unknown
// Signature: undefined4 FUN_00568c60(int param_1)

#include "nocturne.h"

uint FUN_00568c60(int param_1)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 0x300) & 0x7fffffff) != 0) {
    return 0;
  }
  uVar1 = FUN_0057af80(param_1);
  return uVar1;
}
