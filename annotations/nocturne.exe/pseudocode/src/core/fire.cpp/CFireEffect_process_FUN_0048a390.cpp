// Name: core_fire.cpp_CFireEffect_process_FUN_0048a390
// Address: 0048a390
// Address Range: [[0048a390, 0048a64d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_process_FUN_0048a390(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_process_FUN_0048a390(void)

{
  bool bVar1;
  int *piVar2;
  byte *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  piVar2 = (int *)&DAT_01c0a140;
  _DAT_01c5c700 = 0;
  core_fire_cpp_updateTextureAnimCounts_FUN_00486d40();
  do {
    if (*piVar2 != 0) {
      core_fire_cpp_CSmokeParticle_process_FUN_00482820(piVar2);
    }
    piVar2 = piVar2 + 0xb;
  } while (piVar2 != (int *)&DAT_01c20140);
  puVar3 = (byte *)0x1c49d54;
  do {
    if (0.0 < *(float *)(puVar3 + 0x18)) {
      (**(code **)(*(int *)(puVar3 + 0x34) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x4c;
  } while (puVar3 != &DAT_01c4e954);
  piVar2 = (int *)&DAT_01c4e958;
  do {
    if (*piVar2 != 0) {
      core_fire_cpp_CMuzzleFlash_process_FUN_00484ed0(piVar2);
    }
    piVar2 = piVar2 + 0x17;
  } while (piVar2 != (int *)&DAT_01c4f088);
  iVar6 = 0;
  if (0 < _DAT_01c23d48) {
    iVar4 = 0x1c23d50;
    do {
      if (*(int *)(iVar4 + 600) != 0) {
        core_fire_cpp_CStake_process_FUN_004836b0(iVar4);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x260;
    } while (iVar6 < _DAT_01c23d48);
  }
  iVar6 = 0x1c4f08c;
  do {
    if (0.0 < *(float *)(iVar6 + 0x18)) {
      (**(code **)(*(int *)(iVar6 + 0x34) + 4))(iVar6);
    }
    iVar6 = iVar6 + 0x9c;
  } while (iVar6 != 0x1c58c8c);
  puVar3 = (byte *)0x1c58c90;
  do {
    if (*(int *)(puVar3 + 0x20) != 0) {
      core_fire_cpp_CBulletTrail_process_FUN_004856a0(puVar3);
    }
    puVar3 = puVar3 + 0x24;
  } while (puVar3 != &DAT_01c58df8);
  puVar3 = (byte *)0x1c58dfc;
  do {
    if (0.0 < *(float *)(puVar3 + 0x18)) {
      (**(code **)(*(int *)(puVar3 + 0x34) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x9c;
  } while (puVar3 != &DAT_01c5b4fc);
  puVar3 = (byte *)0x1c5b500;
  do {
    if (0.0 < *(float *)(puVar3 + 0x18)) {
      (**(code **)(*(int *)(puVar3 + 0x34) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x48;
  } while (puVar3 != &DAT_01c5c700);
  iVar6 = 0;
  if (0 < _DAT_01c20140) {
    puVar3 = &DAT_01c20148;
    do {
      core_fire_cpp_CBulletHole_process_FUN_00482e90(puVar3);
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 0x3c;
    } while (iVar6 < _DAT_01c20140);
  }
  puVar3 = (byte *)0x1c5d708;
  do {
    core_fire_cpp_CExplosion_process_FUN_00486f90(puVar3);
    puVar3 = puVar3 + 0x1c;
  } while (puVar3 != &DAT_01c5d820);
  puVar3 = (byte *)0x1c5d824;
  do {
    core_fire_cpp_CToss_process_FUN_004874d0(puVar3);
    puVar3 = puVar3 + 0x3e4;
  } while (puVar3 != &DAT_01c625f4);
  puVar3 = (byte *)0x1c625f8;
  do {
    core_fire_cpp_CCrater_process_FUN_00487a20(puVar3);
    puVar3 = puVar3 + 0x70;
  } while (puVar3 != &DAT_01c62eb8);
  puVar5 = (uint *)&DAT_01c62ebc;
  bVar1 = false;
  do {
    if ((*puVar5 & 0x7fffffff) != 0) {
      if (!bVar1) {
        core_fire_cpp_initProcess_FUN_00487fd0();
        bVar1 = true;
      }
      core_fire_cpp_CGunFlame_process_FUN_00488430(puVar5);
    }
    puVar5 = puVar5 + 9;
  } while (puVar5 != (uint *)&DAT_01c6750c);
  puVar3 = (byte *)0x1c67510;
  do {
    core_fire_cpp_CLightningBolt_process_FUN_00488bb0(puVar3);
    puVar3 = puVar3 + 0x2c;
  } while (puVar3 != &DAT_01c676c8);
  puVar3 = (byte *)0x1c676cc;
  do {
    core_fire_cpp_CTrail_process_FUN_00489310(puVar3);
    puVar3 = puVar3 + 0x24;
  } while (puVar3 != &DAT_01c684dc);
  puVar3 = (byte *)0x1c684e0;
  do {
    (**(code **)(*(int *)(puVar3 + 0x34) + 4))(puVar3);
    puVar3 = puVar3 + 0x58;
  } while (puVar3 != &DAT_01c69610);
  puVar3 = (byte *)0x1c69614;
  do {
    if (0.0 < *(float *)(puVar3 + 0x18)) {
      (**(code **)(*(int *)(puVar3 + 0x34) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x38;
  } while (puVar3 != &DAT_01c6ce14);
  iVar6 = 0x1c6ce18;
  do {
    if (0.0 < *(float *)(iVar6 + 0x18)) {
      (**(code **)(*(int *)(iVar6 + 0x34) + 4))(iVar6);
    }
    iVar6 = iVar6 + 0x38;
  } while ((CDemonActorType *)iVar6 != &g_CFlameActorType_01c70618);
  return;
}
