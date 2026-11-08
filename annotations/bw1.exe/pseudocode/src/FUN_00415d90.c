// Name: FUN_00415d90
// Address: 00415d90
// Address Range: [[00415d90, 00415de3]]
// Convention: unknown
// Signature: void FUN_00415d90(undefined4 param_1)

#include "nocturne.h"

void FUN_00415d90(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00415ba0(param_1);
  iVar1 = FUN_0040d0a0(iVar1 + 4);
  iVar1 = FUN_005c0357(iVar1 + 0x5c,0x32,&DAT_005fca50);
  iVar1 = FUN_00468860(iVar1 + 0x898);
  iVar1 = FUN_00468860(iVar1 + 0x17c);
  *(byte ***)(iVar1 + -0xa74) = &PTR_FUN_005fc974;
  return;
}
