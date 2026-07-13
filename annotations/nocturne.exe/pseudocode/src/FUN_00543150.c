// Name: FUN_00543150
// Address: 00543150
// Address Range: [[00543150, 0054317d]]
// Convention: unknown
// Signature: int FUN_00543150(undefined4 param_1)

#include "nocturne.h"

int FUN_00543150(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ee950(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_FUN_005a2c04;
  FUN_0051e0c0(iVar1 + 0x150,"bassplayer.dfm");
  return iVar1;
}
