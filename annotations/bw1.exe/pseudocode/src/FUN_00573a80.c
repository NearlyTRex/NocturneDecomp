// Name: FUN_00573a80
// Address: 00573a80
// Address Range: [[00573a80, 00573aa7]]
// Convention: unknown
// Signature: undefined4 FUN_00573a80(undefined4 param_1)

#include "nocturne.h"

uint FUN_00573a80(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0056fa10(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00571d70(iVar1);
  FUN_00573e70();
  return 1;
}
