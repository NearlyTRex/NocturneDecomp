// Name: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004c7490
// Address: 004c7490
// Address Range: [[004c7490, 004c7572]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004c7490(CBloodParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004c7490(CBloodParticle *this_ptr)

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
  _DAT_01cb828c = 4;
  _DAT_01cb8290 = 0;
  _DAT_01cb8294 = 0;
  _DAT_01cb8298 = 0;
  _DAT_01cb829c = 0;
  _DAT_01cb82a0 = 0;
  _DAT_01cb82a4 = 1;
  _DAT_01cb82a8 = 2;
  _DAT_01cb82ac = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650(DAT_0060b280,&local_18);
  _DAT_01cb82b0 = local_18.x;
  *(uint *)(&DAT_01cb82b4 + (uint)bVar4 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + 4);
  *(uint *)(&DAT_01cb82b8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  _DAT_01cb82b4 = 0;
  puVar2 = (uint *)(DAT_007bda74 + 0x10);
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
  dVar6 = (double)local_54 * _DAT_005d9432;
  dVar7 = (double)local_48 * _DAT_005d9432;
  dVar5 = round((double)local_60 * _DAT_005d9432);
  dVar6 = round(dVar6);
  dVar7 = round(dVar7);
  _DAT_01cb82bc = (int)ROUND(dVar5);
  _DAT_01cb82c0 = (int)ROUND(dVar6);
  _DAT_01cb82c4 = (int)ROUND(dVar7);
  return;
}
