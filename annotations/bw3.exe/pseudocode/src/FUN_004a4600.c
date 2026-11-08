// Name: FUN_004a4600
// Address: 004a4600
// Address Range: [[004a4600, 004a4631]]
// Convention: unknown
// Signature: int FUN_004a4600(int param_1)

#include "nocturne.h"

int FUN_004a4600(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a30d7(param_1 + 0x30,0x10,&DAT_005db0f0);
  iVar1 = FUN_005a30d7(iVar1 + 0xc0,0x10,&DAT_005db0f0);
  return iVar1 + -0xf0;
}
