// Name: FUN_00487370
// Address: 00487370
// Address Range: [[00487370, 0048739d]]
// Convention: unknown
// Signature: int FUN_00487370(int param_1)

#include "nocturne.h"

int FUN_00487370(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00454490(param_1 + 4);
  iVar1 = FUN_0041a610(iVar1 + 0x17c);
  *(uint *)(iVar1 + 0x25c) = 0;
  return iVar1 + -0x180;
}
