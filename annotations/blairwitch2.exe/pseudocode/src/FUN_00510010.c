// Name: FUN_00510010
// Address: 00510010
// Address Range: [[00510010, 00510067]]
// Convention: unknown
// Signature: int FUN_00510010(undefined4 param_1)

#include "nocturne.h"

int FUN_00510010(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005b7f5f(param_1,8,&DAT_005f6f60);
  iVar1 = FUN_005b7f5f(iVar1 + 0xa0,7,&DAT_005f6f60);
  iVar1 = FUN_005b7f5f(iVar1 + 0x8c,0xf,&DAT_005f6f60);
  *(uint *)(iVar1 + 300) = 0;
  *(uint *)(iVar1 + 0x130) = 0;
  return iVar1 + -300;
}
