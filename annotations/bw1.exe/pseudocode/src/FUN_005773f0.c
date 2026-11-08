// Name: FUN_005773f0
// Address: 005773f0
// Address Range: [[005773f0, 00577455]]
// Convention: unknown
// Signature: void FUN_005773f0(undefined4 param_1)

#include "nocturne.h"

void FUN_005773f0(uint param_1)

{
  byte local_404 [1024];
  byte *local_4;
  
  local_4 = &stack0x00000008;
  FUN_005bfb18(local_404,param_1,&local_4);
  local_4 = (byte *)0x0;
  FUN_005b3a90("SOUND: ");
  FUN_005b3a90(local_404);
  FUN_005b3a90(&DAT_005f46c1);
  return;
}
