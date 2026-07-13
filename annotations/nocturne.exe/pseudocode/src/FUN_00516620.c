// Name: FUN_00516620
// Address: 00516620
// Address Range: [[00516620, 0051672f]]
// Convention: unknown
// Signature: void FUN_00516620(int param_1)

#include "nocturne.h"

void FUN_00516620(int param_1)

{
  uint uVar1;
  uint *puVar2;
  byte local_64 [40];
  byte local_3c [12];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  byte local_18 [12];
  uint local_c;
  
  if (*(int *)(param_1 + 0x560) < 1) {
    return;
  }
  local_30 = 0x40a00000;
  local_2c = 0x40c00000;
  local_28 = 0xc0c00000;
  local_24 = FUN_0040dda0(0xbec90fdb,0x3ec90fdb);
  local_c = local_24;
  local_20 = FUN_0040dda0(0xbec90fdb,0x3ec90fdb);
  local_1c = 0;
  local_c = local_20;
  FUN_0044d7a0(local_64,&local_24);
  uVar1 = FUN_0044da40(local_64,local_18,&local_30);
  puVar2 = (uint *)FUN_0040a200(param_1,local_3c,uVar1);
  if (&local_30 != puVar2) {
    local_30 = *puVar2;
    local_2c = puVar2[1];
    local_28 = puVar2[2];
  }
  uVar1 = FUN_004543b0("shell.kfm");
  FUN_0048c6b0(0x01C08D04,param_1 + 0x20,param_1 + 0x30,&local_30,uVar1);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"shotgun-cock.wav");
  return;
}
