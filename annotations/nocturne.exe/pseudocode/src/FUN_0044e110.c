// Name: FUN_0044e110
// Address: 0044e110
// Address Range: [[0044e110, 0044e1bd]]
// Convention: unknown
// Signature: void FUN_0044e110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0044e110(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043fee0(param_1);
  *(uint *)(iVar1 + 0x1cb4) = 1;
  *(uint *)(iVar1 + 0x1cb8) = 1;
  *(uint *)(iVar1 + 0x2f94) = 0;
  *(uint *)(iVar1 + 0x2f98) = 0;
  *(uint *)(iVar1 + 0x2f9c) = 0;
  *(uint *)(iVar1 + 0x164) = 0;
  *(uint *)(iVar1 + 0x100) = 0x437f0000;
  *(uint *)(iVar1 + 0x2fa0) = 0;
  *(uint *)(iVar1 + 0x1c6c) = 0;
  *(uint *)(iVar1 + 0x1c54) = 0;
  *(uint *)(iVar1 + 0x2fa4) = 0x10000;
  *(uint *)(iVar1 + 0x2fa8) = 0x3f800000;
  *(uint *)(iVar1 + 0x1cbc) = 0;
  *(uint *)(iVar1 + 0x1cd0) = 1;
  *(uint *)(iVar1 + 0x1cc0) = param_2;
  *(uint *)(iVar1 + 0x1cc4) = param_3;
  return;
}
