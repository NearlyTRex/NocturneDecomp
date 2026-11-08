// Name: FUN_00508af0
// Address: 00508af0
// Address Range: [[00508af0, 00508b47]]
// Convention: unknown
// Signature: int FUN_00508af0(undefined4 param_1)

#include "nocturne.h"

int FUN_00508af0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a30d7(param_1,8,&DAT_005dbf20);
  iVar1 = FUN_005a30d7(iVar1 + 0xa0,7,&DAT_005dbf20);
  iVar1 = FUN_005a30d7(iVar1 + 0x8c,0xf,&DAT_005dbf20);
  *(uint *)(iVar1 + 300) = 0;
  *(uint *)(iVar1 + 0x130) = 0;
  return iVar1 + -300;
}
