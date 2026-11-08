// Name: FUN_00531220
// Address: 00531220
// Address Range: [[00531220, 00531277]]
// Convention: unknown
// Signature: int FUN_00531220(undefined4 param_1)

#include "nocturne.h"

int FUN_00531220(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c0357(param_1,8,&DAT_005fca10);
  iVar1 = FUN_005c0357(iVar1 + 0xa0,7,&DAT_005fca10);
  iVar1 = FUN_005c0357(iVar1 + 0x8c,0xf,&DAT_005fca10);
  *(uint *)(iVar1 + 300) = 0;
  *(uint *)(iVar1 + 0x130) = 0;
  return iVar1 + -300;
}
