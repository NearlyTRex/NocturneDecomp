// Name: FUN_0047c760
// Address: 0047c760
// Address Range: [[0047c760, 0047c7ea]]
// Convention: unknown
// Signature: bool FUN_0047c760(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

bool FUN_0047c760(uint param_1,uint param_2)

{
  int iVar1;
  byte local_18 [16];
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  FUN_005b7768(0x1c239f0,param_2,&local_8);
  local_8 = (byte *)0x0;
  FUN_00480d20(local_18);
  FUN_00480e70(local_18,"^Yes, I know what I'm doing and I hate these annoying prompts.");
  FUN_00480e70(local_18,"^No, please, I didn't mean to do it!");
  iVar1 = FUN_0047c0f0(0x1c239f0,local_18,1);
  FUN_00480d40(local_18,0);
  return iVar1 == 0;
}
