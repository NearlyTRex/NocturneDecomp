// Name: FUN_004cbd50
// Address: 004cbd50
// Address Range: [[004cbd50, 004cbdb9]]
// Convention: unknown
// Signature: int FUN_004cbd50(undefined4 param_1)

#include "nocturne.h"

int FUN_004cbd50(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005899d0(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5f7e34;
  FUN_0044fd70(iVar1 + 0x2b4,"revolver.kfm");
  *(uint *)(iVar1 + 0x434) = 0;
  *(uint *)(iVar1 + 0x438) = 1;
  *(uint *)(iVar1 + 0x440) = 1;
  *(uint *)(iVar1 + 0x444) = 0x42480000;
  *(uint *)(iVar1 + 0x448) = 0;
  *(uint *)(iVar1 + 0x6c4) = 6;
  return iVar1;
}
