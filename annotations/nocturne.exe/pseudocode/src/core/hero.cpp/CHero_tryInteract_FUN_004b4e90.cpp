// Name: core_hero.cpp_CHero_tryInteract_FUN_004b4e90
// Address: 004b4e90
// Address Range: [[004b4e90, 004b4fd3]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_hero_cpp_CHero_tryInteract_FUN_004b4e90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_hero_cpp_CHero_tryInteract_FUN_004b4e90(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_64 [24];
  byte auStack_4c [12];
  uint uStack_40;
  float fStack_3c;
  uint uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  pfVar2 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_64);
  fStack_34 = *pfVar2 + pfVar2[3];
  fStack_30 = pfVar2[1] + pfVar2[4];
  fStack_28 = fStack_34 * _DAT_00585827;
  fStack_2c = pfVar2[2] + pfVar2[5];
  fStack_3c = fStack_30 * _DAT_00585827;
  fStack_20 = fStack_2c * _DAT_00585827;
  uStack_40 = 0;
  uStack_38 = 0x3fc00000;
  iVar3 = 0;
  fStack_24 = fStack_3c;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_4c,&uStack_40);
  fStack_1c = 1e+30;
  iVar5 = 0;
  for (iVar4 = 0; iVar4 < *(int *)(0x01E57284 + 0x14cd6c); iVar4 = iVar4 + 1) {
    iVar1 = *(int *)(iVar3 + 0x14cd70 + 0x01E57284);
    fStack_18 = (float)(**(code **)(*(int *)(iVar1 + 0x14c) + 0x58))(iVar1,param_1,auStack_4c);
    if ((0.0 <= fStack_18) && (fStack_18 < fStack_1c)) {
      iVar5 = *(int *)(iVar3 + 0x14cd70 + 0x01E57284);
      fStack_1c = fStack_18;
    }
    iVar3 = iVar3 + 4;
  }
  if (iVar5 != 0) {
    iVar5 = (**(code **)(*(int *)(iVar5 + 0x14c) + 0x5c))(iVar5);
    if (iVar5 != 0) {
      *(uint *)(param_1 + 0xbca0) = 0;
    }
    return 1;
  }
  return 0;
}
