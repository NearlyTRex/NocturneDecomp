// Name: FUN_00571dc7
// Address: 00571dc7
// Address Range: [[00571dc7, 00571df7]]
// Convention: unknown
// Signature: undefined4 FUN_00571dc7(undefined4 param_1)

#include "nocturne.h"

uint FUN_00571dc7(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00571ee0(0x204);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  FUN_00571df8(param_1,iVar1,iVar1 + 0x204,1);
  return 0;
}
