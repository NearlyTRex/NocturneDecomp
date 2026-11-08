// Name: FUN_005a5f20
// Address: 005a5f20
// Address Range: [[005a5f20, 005a5f40]]
// Convention: unknown
// Signature: undefined4 FUN_005a5f20(LPCSTR param_1,LPCSTR param_2)

#include "nocturne.h"

uint FUN_005a5f20(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    uVar2 = FUN_005ab46c();
    return uVar2;
  }
  return 0;
}
