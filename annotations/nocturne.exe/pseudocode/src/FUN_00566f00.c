// Name: FUN_00566f00
// Address: 00566f00
// Address Range: [[00566f00, 00566f20]]
// Convention: unknown
// Signature: undefined4 FUN_00566f00(LPCSTR param_1,LPCSTR param_2)

#include "nocturne.h"

uint FUN_00566f00(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    uVar2 = FUN_0056c73c();
    return uVar2;
  }
  return 0;
}
