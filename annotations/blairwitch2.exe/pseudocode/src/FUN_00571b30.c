// Name: FUN_00571b30
// Address: 00571b30
// Address Range: [[00571b30, 00571b5d]]
// Convention: unknown
// Signature: int FUN_00571b30(undefined4 param_1)

#include "nocturne.h"

int FUN_00571b30(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00510460(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5fc744;
  FUN_005478b0(iVar1 + 0x2b4,"bassplayer.dfm");
  return iVar1;
}
