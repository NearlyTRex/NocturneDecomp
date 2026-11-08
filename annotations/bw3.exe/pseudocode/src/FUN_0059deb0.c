// Name: FUN_0059deb0
// Address: 0059deb0
// Address Range: [[0059deb0, 0059ded2]]
// Convention: unknown
// Signature: bool FUN_0059deb0(int param_1)

#include "nocturne.h"

bool FUN_0059deb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004fc070(param_1 + 0x158);
  return *(int *)(iVar1 + 0x24) == 0x9a;
}
