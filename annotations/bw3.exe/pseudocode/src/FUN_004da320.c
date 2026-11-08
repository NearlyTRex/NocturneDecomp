// Name: FUN_004da320
// Address: 004da320
// Address Range: [[004da320, 004da350]]
// Convention: unknown
// Signature: bool FUN_004da320(int param_1,undefined4 param_2)

#include "nocturne.h"

bool FUN_004da320(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_005a3230(param_2,"\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n",param_1,param_1 + 0x100,param_1 + 0x200);
  return iVar1 == 3;
}
