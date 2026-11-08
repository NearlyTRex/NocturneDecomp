// Name: FUN_00571500
// Address: 00571500
// Address Range: [[00571500, 005716eb]]
// Convention: unknown
// Signature: void FUN_00571500(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00571500(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1060 [998];
  uint *puVar6;
  char *pcVar7;
  byte local_b4 [4];
  uint local_b0;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_78;
  uint auStack_74 [5];
  uint local_60;
  uint local_54 [3];
  uint local_48 [3];
  uint local_3c [3];
  uint local_30 [3];
  uint local_24;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  iVar3 = 0;
  iVar1 = FUN_00547890(param_1 + 0x2b4);
  local_18 = -1;
  iVar2 = iVar1;
  iVar4 = local_18;
  if (0 < *(int *)(iVar1 + 0x1d1f8)) {
    do {
      iVar4 = iVar3;
      if (param_2 == *(int *)(iVar2 + 0x1d21c)) break;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x24;
      iVar4 = local_18;
    } while (iVar3 < *(int *)(iVar1 + 0x1d1f8));
  }
  local_18 = iVar4;
  if (local_18 == -1) {
    _DAT_01d046a0 = "..\\core\\svetlana.cpp";
    _DAT_01d046a4 = 0x2ef;
    FUN_004e4500("Can't find svetlana's parent bone");
  }
  FUN_00546a90(param_1 + 0x2b4,param_2);
  puVar6 = auStack_74 + 0x11;
  local_30[0] = auStack_74[2];
  auStack_74[(uint)bVar5 * -2 + 0x12] = auStack_74[(uint)bVar5 * -2 + 3];
  auStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
       auStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  FUN_00408d70(param_1,puVar6);
  local_48[0] = local_24;
  auStack_74[(uint)bVar5 * -2 + 0xc] = auStack_74[(uint)bVar5 * -2 + 0x15];
  auStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
       auStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
  FUN_00546a90(param_1 + 0x2b4,local_18);
  puVar6 = auStack_74 + 0xe;
  local_3c[0] = local_78;
  auStack_74[(uint)bVar5 * -2 + 0xf] = auStack_74[(uint)bVar5 * -2];
  auStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
       auStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  FUN_00408d70(param_1,puVar6);
  local_54[0] = local_60;
  auStack_74[(uint)bVar5 * -2 + 9] = auStack_74[(uint)bVar5 * -2 + 6];
  auStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
       auStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  iVar4 = 0;
  iVar2 = 0;
  local_14 = 0;
  do {
    while( true ) {
      if (*(int *)(0x01E661B8 + 0x14f0a8) <= iVar2) {
        if (local_14 == 0) {
          pcVar7 = "svetlana-miss?.wav";
        }
        else {
          pcVar7 = "svetlana-attack?.wav";
        }
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,pcVar7);
        return;
      }
      iVar1 = *(int *)(iVar4 + 0x14f0ac + 0x01E661B8);
      if (iVar1 != param_1) break;
LAB_00571618:
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    }
    FUN_004222d0(local_b4);
    local_b0 = 0x41700000;
    local_8c = 3;
    local_88 = 0x3f333333;
    local_84 = 0x67;
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x10c))
                      (iVar1,auStack_74 + 0xb,auStack_74 + 8,local_b4,0);
    if (iVar1 == 0) goto LAB_00571618;
    local_14 = 1;
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 4;
  } while( true );
}
