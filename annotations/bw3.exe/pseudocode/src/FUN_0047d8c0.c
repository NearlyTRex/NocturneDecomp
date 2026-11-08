// Name: FUN_0047d8c0
// Address: 0047d8c0
// Address Range: [[0047d8c0, 0047d970]]
// Convention: unknown
// Signature: bool FUN_0047d8c0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

bool FUN_0047d8c0(uint param_1,uint param_2)

{
  int iVar1;
  byte local_418 [1024];
  byte local_18 [16];
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  FUN_005a2898(local_418,param_2,&local_8);
  local_8 = (byte *)0x0;
  FUN_00481f20(local_18);
  FUN_00482070(local_18,&DAT_005bce93);
  FUN_00482070(local_18,&DAT_005bce98);
  iVar1 = FUN_0047d230(local_418,local_18,1);
  FUN_00481f40(local_18,0);
  return iVar1 == 0;
}
