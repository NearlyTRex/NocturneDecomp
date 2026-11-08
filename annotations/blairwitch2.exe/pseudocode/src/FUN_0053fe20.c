// Name: FUN_0053fe20
// Address: 0053fe20
// Address Range: [[0053fe20, 0053fe9d]]
// Convention: unknown
// Signature: int FUN_0053fe20(undefined4 param_1)

#include "nocturne.h"

int FUN_0053fe20(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005899d0(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5fb714;
  FUN_0044fd70(iVar1 + 0x2b4,0x5e6841);
  *(uint *)(iVar1 + 0x43c) = 7;
  *(uint *)(iVar1 + 0x6c8) = 0xffffffff;
  *(uint *)(iVar1 + 0x6c4) = 0;
  *(uint *)(iVar1 + 0x434) = 0;
  *(uint *)(iVar1 + 0x438) = 0;
  *(uint *)(iVar1 + 0x440) = 0;
  *(uint *)(iVar1 + 0x444) = 0x40a00000;
  *(uint *)(iVar1 + 0x448) = 0;
  return iVar1;
}
