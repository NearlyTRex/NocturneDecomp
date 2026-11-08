// Name: FUN_0043c220
// Address: 0043c220
// Address Range: [[0043c220, 0043c277]]
// Convention: unknown
// Signature: int FUN_0043c220(undefined4 param_1)

#include "nocturne.h"

int FUN_0043c220(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00460490(param_1);
  iVar1 = FUN_005a30d7(iVar1 + 0x398,800,&DAT_005dd3f0);
  iVar1 = FUN_005a30d7(iVar1 + 0x377b8,0x32,&DAT_005dd410);
  *(uint *)(iVar1 + 0x2fac) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + -8) = 0;
  return iVar1 + -0x37b50;
}
