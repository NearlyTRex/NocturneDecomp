// Name: FUN_005715ac
// Address: 005715ac
// Address Range: [[005715ac, 005715cf]]
// Convention: unknown
// Signature: undefined4 FUN_005715ac(undefined4 param_1,int param_2)

#include "nocturne.h"

uint FUN_005715ac(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00571588(param_1);
  if (iVar1 == param_2) {
    uVar2 = FUN_00571564(param_1);
    return uVar2;
  }
  return 0;
}
