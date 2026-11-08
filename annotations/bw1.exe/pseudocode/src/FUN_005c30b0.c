// Name: FUN_005c30b0
// Address: 005c30b0
// Address Range: [[005c30b0, 005c30d0]]
// Convention: unknown
// Signature: undefined4 FUN_005c30b0(LPCSTR param_1,LPCSTR param_2)

#include "nocturne.h"

uint FUN_005c30b0(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    uVar2 = FUN_005c862c();
    return uVar2;
  }
  return 0;
}
