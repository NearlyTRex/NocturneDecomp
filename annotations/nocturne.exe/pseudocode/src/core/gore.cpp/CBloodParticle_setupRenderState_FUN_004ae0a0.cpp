// Name: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004ae0a0
// Address: 004ae0a0
// Address Range: [[004ae0a0, 004ae185]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004ae0a0(CBloodParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004ae0a0(CBloodParticle *this_ptr)

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
  _DAT_01c78c84 = 4;
  _DAT_01c78c88 = 0;
  _DAT_01c78c8c = 0;
  _DAT_01c78c90 = 0;
  _DAT_01c78c94 = 0;
  _DAT_01c78c98 = 0;
  _DAT_01c78c9c = 1;
  _DAT_01c78ca0 = 2;
  _DAT_01c78ca4 = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_00460d90
            (g_CDemonRenderer_PTR_005ae704,&local_18);
  _DAT_01c78ca8 = local_18.x;
  *(uint *)(&DAT_01c78cac + (uint)bVar4 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + 4);
  *(uint *)(&DAT_01c78cb0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  _DAT_01c78cac = 0;
  puVar2 = (uint *)(_DAT_007f7370 + 0x110);
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
  dVar6 = (double)local_54 * -65536;
  dVar7 = (double)local_48 * -65536;
  dVar5 = round((double)local_60 * -65536);
  dVar6 = round(dVar6);
  dVar7 = round(dVar7);
  _DAT_01c78cb4 = (int)ROUND(dVar5);
  _DAT_01c78cb8 = (int)ROUND(dVar6);
  _DAT_01c78cbc = (int)ROUND(dVar7);
  return;
}
