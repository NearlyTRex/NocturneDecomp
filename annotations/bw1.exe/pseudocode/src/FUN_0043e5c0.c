// Name: FUN_0043e5c0
// Address: 0043e5c0
// Address Range: [[0043e5c0, 0043e617]]
// Convention: unknown
// Signature: int FUN_0043e5c0(undefined4 param_1)

#include "nocturne.h"

int FUN_0043e5c0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004667e0(param_1);
  iVar1 = FUN_005c0357(iVar1 + 0x398,800,&DAT_005fd910);
  iVar1 = FUN_005c0357(iVar1 + 0x377b8,0x32,&DAT_005fd930);
  *(uint *)(iVar1 + 0x2fac) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + -0xc) = 0;
  return iVar1 + -0x37b50;
}
