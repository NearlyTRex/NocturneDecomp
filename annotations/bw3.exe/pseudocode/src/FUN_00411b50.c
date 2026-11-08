// Name: FUN_00411b50
// Address: 00411b50
// Address Range: [[00411b50, 00411ba3]]
// Convention: unknown
// Signature: void FUN_00411b50(undefined4 param_1)

#include "nocturne.h"

void FUN_00411b50(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00411960(param_1);
  iVar1 = FUN_0040d2e0(iVar1 + 4);
  iVar1 = FUN_005a30d7(iVar1 + 0x50,0x32,&DAT_005dbf60);
  iVar1 = FUN_00462500(iVar1 + 0x898);
  iVar1 = FUN_00462500(iVar1 + 0x17c);
  *(byte ***)(iVar1 + -0xa68) = &PTR_FUN_005dbe84;
  return;
}
