// Name: FUN_00540ad0
// Address: 00540ad0
// Address Range: [[00540ad0, 00540b8e]]
// Convention: unknown
// Signature: int FUN_00540ad0(undefined4 param_1)

#include "nocturne.h"

int FUN_00540ad0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ea830(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_00604c44;
  *(uint *)(iVar1 + 0x1ffac) = 0;
  FUN_00569f50(iVar1 + 0x158,0x5edcc3);
  *(uint *)(iVar1 + 0x1ffbc) = 0x3f800000;
  *(uint *)(iVar1 + 0x1ffb8) = 0;
  *(uint *)(iVar1 + 0x1ffb4) = *(uint *)(iVar1 + 0x1ffb8);
  *(uint *)(iVar1 + 0x1ffb0) = *(uint *)(iVar1 + 0x1ffb4);
  FUN_00540d50(iVar1);
  *(uint *)(iVar1 + 0x1ffc0) = 0;
  *(uint *)(iVar1 + 0x1ffc8) = 0;
  *(uint *)(iVar1 + 0x1ffd0) = 0;
  *(uint *)(iVar1 + 0x1ffd4) = 0;
  *(uint *)(iVar1 + 0x1ffc4) = *(uint *)(iVar1 + 0x1ffc8);
  FUN_00434320(iVar1,0,1,"draw_stand2coatPocket",0);
  FUN_00434320(iVar1,1,2,"draw_coatPocket2aimPistols",0);
  return iVar1;
}
