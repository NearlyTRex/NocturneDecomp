// Name: FUN_00599c10
// Address: 00599c10
// Address Range: [[00599c10, 00599c40]]
// Convention: unknown
// Signature: undefined4 FUN_00599c10(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00599c10(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0040c840(param_2,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = FUN_00427a00(param_1,param_2);
  return uVar2;
}
