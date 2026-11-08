// Name: FUN_004f6e90
// Address: 004f6e90
// Address Range: [[004f6e90, 004f6ec0]]
// Convention: unknown
// Signature: bool FUN_004f6e90(int param_1,undefined4 param_2)

#include "nocturne.h"

bool FUN_004f6e90(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_005c04b0(param_2,"\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n",param_1,param_1 + 0x100,param_1 + 0x200);
  return iVar1 == 3;
}
