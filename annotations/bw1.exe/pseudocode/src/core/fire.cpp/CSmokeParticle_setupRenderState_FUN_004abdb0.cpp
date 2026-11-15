// Name: core_fire.cpp_CSmokeParticle_setupRenderState_FUN_004abdb0
// Address: 004abdb0
// Address Range: [[004abdb0, 004abe92]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_004abdb0(CSmokeParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_004abdb0(CSmokeParticle *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float afStackY_1000 [997];
  float local_60;
  float local_54;
  float local_48;
  CVector3i local_18;
  
  bVar4 = 0;
  _DAT_01c57094 = 4;
  _DAT_01c57098 = 0;
  _DAT_01c5709c = 0;
  _DAT_01c570a0 = 0;
  _DAT_01c570a4 = 0;
  _DAT_01c570a8 = 0;
  _DAT_01c570ac = 1;
  _DAT_01c570b0 = 2;
  _DAT_01c570b4 = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50(DAT_00612560,&local_18);
  _DAT_01c57078 = local_18.x;
  *(uint *)(&DAT_01c5707c + (uint)bVar4 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + 4);
  *(uint *)(&DAT_01c57080 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  _DAT_01c5707c = 0;
  puVar2 = (uint *)(DAT_007c6120 + 0x10);
  puVar3 = (uint *)&stack0xffffffc0;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = (uint *)&stack0xffffffc0;
  puVar3 = (uint *)&stack0xffffff98;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  dVar6 = (double)local_54 * _DAT_005df17c;
  dVar7 = (double)local_48 * _DAT_005df17c;
  dVar5 = round((double)local_60 * _DAT_005df17c);
  dVar6 = round(dVar6);
  dVar7 = round(dVar7);
  _DAT_01c57084 = (int)ROUND(dVar5);
  _DAT_01c57088 = (int)ROUND(dVar6);
  _DAT_01c5708c = (int)ROUND(dVar7);
  return;
}
