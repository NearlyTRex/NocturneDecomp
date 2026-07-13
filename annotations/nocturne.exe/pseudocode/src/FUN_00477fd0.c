// Name: FUN_00477fd0
// Address: 00477fd0
// Address Range: [[00477fd0, 004780d1]]
// Convention: unknown
// Signature: void FUN_00477fd0(int param_1)

#include "nocturne.h"

void FUN_00477fd0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  byte local_6c [40];
  byte local_44 [12];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  byte local_20 [12];
  uint local_14;
  
  local_38 = 0x40a00000;
  local_34 = 0x40c00000;
  local_30 = 0xc0c00000;
  local_2c = FUN_0040dda0(0xbec90fdb,0x3ec90fdb);
  local_14 = local_2c;
  local_28 = FUN_0040dda0(0xbec90fdb,0x3ec90fdb);
  local_24 = 0;
  local_14 = local_28;
  FUN_0044d7a0(local_6c,&local_2c);
  uVar1 = FUN_0044da40(local_6c,local_20,&local_38);
  puVar2 = (uint *)FUN_0040a200(param_1,local_44,uVar1);
  if (&local_38 != puVar2) {
    local_38 = *puVar2;
    local_34 = puVar2[1];
    local_30 = puVar2[2];
  }
  uVar1 = FUN_004543b0("shell.kfm");
  FUN_0048c6b0(0x01C08D04,param_1 + 0x20,param_1 + 0x30,&local_38,uVar1);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"sh-cock.wav");
  return;
}
