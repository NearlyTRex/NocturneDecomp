// Name: FUN_00592e00
// Address: 00592e00
// Address Range: [[00592e00, 00592e87]]
// Convention: unknown
// Signature: int FUN_00592e00(undefined4 param_1)

#include "nocturne.h"

int FUN_00592e00(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ea830(param_1);
  iVar1 = FUN_0043e5c0(iVar1 + 0x1ffb4);
  iVar1 = FUN_0043e5c0(iVar1 + 0x3ab30);
  *(byte ***)(iVar1 + -0x5a990) = &PTR_FUN_00606414;
  *(uint *)(iVar1 + -0x3ab38) = 0;
  *(uint *)(iVar1 + -0x3ab34) = 0;
  FUN_00569f50(iVar1 + -0x5a98c,"svetlana.dfm");
  *(uint *)(iVar1 + 0x3ab40) = 0x3f800000;
  *(uint *)(iVar1 + 0x3ab3c) = 0;
  *(uint *)(iVar1 + 0x3ab38) = *(uint *)(iVar1 + 0x3ab3c);
  *(uint *)(iVar1 + 0x3ab34) = *(uint *)(iVar1 + 0x3ab38);
  return iVar1 + -0x5aae4;
}
