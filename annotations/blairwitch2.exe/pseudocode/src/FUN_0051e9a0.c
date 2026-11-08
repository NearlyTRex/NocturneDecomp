// Name: FUN_0051e9a0
// Address: 0051e9a0
// Address Range: [[0051e9a0, 0051ea5e]]
// Convention: unknown
// Signature: int FUN_0051e9a0(undefined4 param_1)

#include "nocturne.h"

int FUN_0051e9a0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce240(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5fae34;
  *(uint *)(iVar1 + 0x25640) = 0;
  FUN_005478b0(iVar1 + 0x2b4,0x5e29b7);
  *(uint *)(iVar1 + 0x25650) = 0x3f800000;
  *(uint *)(iVar1 + 0x2564c) = 0;
  *(uint *)(iVar1 + 0x25648) = *(uint *)(iVar1 + 0x2564c);
  *(uint *)(iVar1 + 0x25644) = *(uint *)(iVar1 + 0x25648);
  FUN_0051ec20(iVar1);
  *(uint *)(iVar1 + 0x25654) = 0;
  *(uint *)(iVar1 + 0x2565c) = 0;
  *(uint *)(iVar1 + 0x25664) = 0;
  *(uint *)(iVar1 + 0x25668) = 0;
  *(uint *)(iVar1 + 0x25658) = *(uint *)(iVar1 + 0x2565c);
  FUN_0042a330(iVar1,0,1,"draw_stand2coatPocket",0);
  FUN_0042a330(iVar1,1,2,"draw_coatPocket2aimPistols",0);
  return iVar1;
}
