// Name: FUN_004baa40
// Address: 004baa40
// Address Range: [[004baa40, 004baac0]]
// Convention: unknown
// Signature: int FUN_004baa40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

int FUN_004baa40(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte local_108 [256];
  
  iVar1 = FUN_004ba730(param_1);
  iVar1 = FUN_0040d0a0(iVar1 + 0x18);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_00600944;
  FUN_00479580(param_2,0,0,local_108,0);
  FUN_0040d220(iVar1,local_108,param_3,param_4);
  *(uint *)(iVar1 + -0x10) = *(uint *)(iVar1 + 0xc);
  *(uint *)(iVar1 + -0xc) = *(uint *)(iVar1 + 0x10);
  return iVar1 + -0x18;
}
