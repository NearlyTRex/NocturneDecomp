// Name: FUN_0043cdb0
// Address: 0043cdb0
// Address Range: [[0043cdb0, 0043ce5b]]
// Convention: unknown
// Signature: void FUN_0043cdb0(int param_1)

#include "nocturne.h"

void FUN_0043cdb0(int param_1)

{
  byte auStack_28 [4];
  float fStack_24;
  float fStack_18;
  uint uStack_10;
  float fStack_c;
  uint uStack_8;
  
  if (*(int *)(param_1 + 0x70) != 1) {
    return;
  }
  FUN_0043ac60(PTR_DAT_005ad350,"?%s exploding!\n" + 1,param_1);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_28);
  if (&uStack_10 != (uint *)(param_1 + 0x20)) {
    uStack_10 = *(uint *)(param_1 + 0x20);
    fStack_c = *(float *)(param_1 + 0x24);
    uStack_8 = *(uint *)(param_1 + 0x28);
  }
  fStack_c = (fStack_18 - fStack_24) + fStack_c;
  FUN_0048c0d0(0x01C08D04,&uStack_10,0x42000000,0x44bb8000,0x40800000);
  FUN_004d9110(0x01CC9450,param_1,1);
  *(uint *)(param_1 + 0x70) = 2;
  return;
}
