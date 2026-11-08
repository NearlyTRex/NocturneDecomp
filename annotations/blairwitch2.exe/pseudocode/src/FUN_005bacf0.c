// Name: FUN_005bacf0
// Address: 005bacf0
// Address Range: [[005bacf0, 005bad10]]
// Convention: unknown
// Signature: undefined4 FUN_005bacf0(LPCSTR param_1,LPCSTR param_2)

#include "nocturne.h"

uint FUN_005bacf0(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    uVar2 = FUN_005c036c();
    return uVar2;
  }
  return 0;
}
