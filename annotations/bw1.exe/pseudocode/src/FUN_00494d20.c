// Name: FUN_00494d20
// Address: 00494d20
// Address Range: [[00494d20, 00494dd0]]
// Convention: unknown
// Signature: bool FUN_00494d20(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

bool FUN_00494d20(uint param_1,uint param_2)

{
  int iVar1;
  byte local_418 [1024];
  byte local_18 [16];
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  FUN_005bfb18(local_418,param_2,&local_8);
  local_8 = (byte *)0x0;
  FUN_00499380(local_18);
  FUN_004994d0(local_18,&DAT_005dbdd6);
  FUN_004994d0(local_18,&DAT_005dbddb);
  iVar1 = FUN_00494690(local_418,local_18,1);
  FUN_004993a0(local_18,0);
  return iVar1 == 0;
}
