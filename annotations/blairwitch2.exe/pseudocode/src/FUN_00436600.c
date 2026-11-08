// Name: FUN_00436600
// Address: 00436600
// Address Range: [[00436600, 0043664d]]
// Convention: unknown
// Signature: undefined4 FUN_00436600(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00436600(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_005f4630);
    FUN_005b7fce(uVar1);
    return param_1;
  }
  uVar1 = FUN_004ce3d0(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005b7fdc(uVar1);
  return uVar1;
}
