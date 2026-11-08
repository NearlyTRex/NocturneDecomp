// Name: FUN_00573b60
// Address: 00573b60
// Address Range: [[00573b60, 00573b8d]]
// Convention: unknown
// Signature: int FUN_00573b60(int param_1)

#include "nocturne.h"

int FUN_00573b60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00573b90(param_1,*(uint *)(param_1 + 0x10));
  if (-1 < iVar1) {
    if ((*(int *)(param_1 + 0x28) != 0) || (iVar1 != 0xd)) {
      return iVar1;
    }
    iVar1 = 10;
  }
  return iVar1;
}
