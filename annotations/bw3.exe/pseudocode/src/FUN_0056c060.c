// Name: FUN_0056c060
// Address: 0056c060
// Address Range: [[0056c060, 0056c0b5]]
// Convention: unknown
// Signature: int FUN_0056c060(undefined4 param_1)

#include "nocturne.h"

int FUN_0056c060(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00488fd0(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005e5504;
  FUN_0054eae0(iVar1 + 0x158,"thehand.dfm");
  *(uint *)(iVar1 + 0x3274) = 0x42480000;
  *(uint *)(iVar1 + 0x3278) = 0x42c80000;
  *(uint *)(iVar1 + 0xd054) = 0;
  *(uint *)(iVar1 + 0xd058) = 0;
  return iVar1;
}
