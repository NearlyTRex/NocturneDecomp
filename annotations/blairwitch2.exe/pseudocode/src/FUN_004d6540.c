// Name: FUN_004d6540
// Address: 004d6540
// Address Range: [[004d6540, 004d658d]]
// Convention: unknown
// Signature: undefined4 FUN_004d6540(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_004d6540(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_005f8d20);
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
