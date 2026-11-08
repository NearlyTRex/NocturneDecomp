// Name: FUN_00537440
// Address: 00537440
// Address Range: [[00537440, 0053748d]]
// Convention: unknown
// Signature: undefined4 FUN_00537440(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00537440(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_006048d0);
    FUN_005c0336(uVar1);
    return param_1;
  }
  uVar1 = FUN_00408730(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005c0344(uVar1);
  return uVar1;
}
