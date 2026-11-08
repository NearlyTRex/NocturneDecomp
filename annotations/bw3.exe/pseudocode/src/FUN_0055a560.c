// Name: FUN_0055a560
// Address: 0055a560
// Address Range: [[0055a560, 0055a5c5]]
// Convention: unknown
// Signature: void FUN_0055a560(undefined4 param_1)

#include "nocturne.h"

void FUN_0055a560(uint param_1)

{
  byte local_404 [1024];
  byte *local_4;
  
  local_4 = &stack0x00000008;
  FUN_005a2898(local_404,param_1,&local_4);
  local_4 = (byte *)0x0;
  FUN_00581c70("SOUND: ");
  FUN_00581c70(local_404);
  FUN_00581c70(&DAT_005d3fbb);
  return;
}
