// Name: FUN_004bed80
// Address: 004bed80
// Address Range: [[004bed80, 004bedb0]]
// Convention: unknown
// Signature: bool FUN_004bed80(int param_1,undefined4 param_2)

#include "nocturne.h"

bool FUN_004bed80(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00563350(param_2,"\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n",param_1,param_1 + 0x100,
                       param_1 + 0x200);
  return iVar1 == 3;
}
