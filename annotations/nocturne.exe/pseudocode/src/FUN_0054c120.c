// Name: FUN_0054c120
// Address: 0054c120
// Address Range: [[0054c120, 0054c18d]]
// Convention: unknown
// Signature: void FUN_0054c120(int param_1,int param_2)

#include "nocturne.h"

void FUN_0054c120(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2434) = fVar1;
  uVar2 = 0x01C78C7C;
  if (0.0 < fVar1) {
    FUN_00479f70(param_1,param_2);
    return;
  }
  *(uint *)(param_1 + 0x2434) = 0;
  FUN_004b0200(uVar2,param_1 + 0x20,0,10,0);
  *(uint *)(param_1 + 0xbee0) = 1;
  FUN_00479f70(param_1,param_2);
  return;
}
