// Name: FUN_00511aa0
// Address: 00511aa0
// Address Range: [[00511aa0, 00511b21]]
// Convention: unknown
// Signature: void FUN_00511aa0(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_00511aa0(uint param_1,int param_2)

{
  uint *puVar1;
  byte auStack_34 [24];
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  puVar1 = (uint *)(**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,auStack_34);
  if (&uStack_1c != puVar1) {
    uStack_1c = *puVar1;
    uStack_18 = puVar1[1];
    uStack_14 = puVar1[2];
  }
  if (&uStack_10 != puVar1 + 3) {
    uStack_10 = puVar1[3];
    uStack_c = puVar1[4];
    uStack_8 = puVar1[5];
  }
  FUN_0046bd90(&DAT_01fba938,param_2 + 0x20,param_2 + 0x30,&uStack_1c,&uStack_10);
  core_path_cpp_resetAllPathMaps_FUN_004f1e90();
  return;
}
