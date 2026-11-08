// Name: FUN_00476430
// Address: 00476430
// Address Range: [[00476430, 00476458]]
// Convention: unknown
// Signature: undefined4 FUN_00476430(undefined4 param_1)

#include "nocturne.h"

uint FUN_00476430(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004a6c30(0x01C51D80,"docCannotDie");
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_00431c30(param_1);
  return uVar2;
}
