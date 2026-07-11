// Name: FUN_00410cc0
// Address: 00410cc0
// Address Range: [[00410cc0, 0041100b]]
// Convention: unknown
// Signature: void FUN_00410cc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410cc0(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte local_148 [120];
  byte local_d0 [4];
  uint local_cc;
  uint local_a0;
  int local_9c;
  int local_98;
  byte auStack_94 [12];
  byte auStack_88 [12];
  byte local_7c [12];
  byte auStack_70 [12];
  byte auStack_64 [12];
  byte auStack_58 [12];
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  float local_3c;
  uint local_38;
  byte auStack_34 [12];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  byte local_1c [4];
  int iStack_18;
  float local_14;
  
  iVar1 = FUN_004b5d00(param_1,local_1c);
  if (iVar1 == 0) {
    return;
  }
  FUN_0040a290(param_1,&local_40,iVar1 + 0x20);
  puVar2 = (uint *)FUN_0054e4a0(local_7c,&local_40);
  if (&local_40 != puVar2) {
    local_40 = *puVar2;
    local_3c = (float)puVar2[1];
    local_38 = puVar2[2];
  }
  local_3c = (float)FUN_0040df00(local_3c);
  local_14 = local_3c;
  if ((local_3c < (float)_DAT_00578688) || (_DAT_00578690 < (double)local_3c)) {
    FUN_0048c420(0x01C08D04,iVar1 + 0x20,0x41800000,1,0);
    FUN_0048c370(0x01C08D04,iVar1 + 0x20,0x40800000);
  }
  else {
    FUN_005644a7(local_148,10,&DAT_005993b0);
    iVar3 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x4c))(iVar1,local_148);
    iStack_18 = iVar3;
    iVar4 = FUN_0056488c();
    puVar2 = (uint *)FUN_0040a240(iVar1,auStack_94,local_148 + (iVar4 % iVar3) * 0xc);
    if (&uStack_28 != puVar2) {
      uStack_28 = *puVar2;
      uStack_24 = puVar2[1];
      uStack_20 = puVar2[2];
    }
    iVar3 = FUN_0056488c();
    puVar2 = (uint *)FUN_0040a240(iVar1,auStack_58,local_148 + (iVar3 % iStack_18) * 0xc);
    if (&uStack_4c != puVar2) {
      uStack_4c = *puVar2;
      uStack_48 = puVar2[1];
      uStack_44 = puVar2[2];
    }
    uVar5 = FUN_0055a8b0(auStack_64,&DAT_02dd1184,DAT_0076431c * 0x30 + param_1 + 0xfd0);
    FUN_0040a240(param_1,auStack_70,uVar5);
    uVar5 = FUN_0055a8b0(auStack_88,&DAT_02dd1184,param_1 + 0xfd0 + DAT_00764320 * 0x30);
    FUN_0040a240(param_1,auStack_34,uVar5);
    FUN_0048c4a0(0x01C08D04,auStack_70,&uStack_28,1,0x3f000000,0x40800000);
    FUN_0048c4a0(0x01C08D04,auStack_34,&uStack_28,1,0x3f000000,0x40800000);
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"@@baron-attack.wav" + 2);
  }
  FUN_00423ed0(local_d0);
  local_a0 = 6;
  local_cc = 0x42c80000;
  local_9c = param_1;
  local_98 = *(int *)(param_1 + 0x1fb14);
  if (local_98 == 0) {
    local_98 = param_1;
  }
  (**(code **)(*(int *)(iVar1 + 0x14c) + 0x100))(iVar1,local_d0);
  FUN_004286d0(iVar1,0x40400000);
  return;
}
