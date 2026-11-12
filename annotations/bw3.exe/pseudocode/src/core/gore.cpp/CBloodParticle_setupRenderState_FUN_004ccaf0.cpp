// Name: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004ccaf0
// Address: 004ccaf0
// Address Range: [[004ccaf0, 004ccbd2]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004ccaf0(CBloodParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004ccaf0(CBloodParticle *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_1000 [997];
  float local_60;
  float local_54;
  float local_48;
  CVector3i local_18;
  
  bVar4 = 0;
  _DAT_01d22e4c = 4;
  _DAT_01d22e50 = 0;
  _DAT_01d22e54 = 0;
  _DAT_01d22e58 = 0;
  _DAT_01d22e5c = 0;
  _DAT_01d22e60 = 0;
  _DAT_01d22e64 = 1;
  _DAT_01d22e68 = 2;
  _DAT_01d22e6c = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230(DAT_005f2afc,&local_18);
  _DAT_01d22e70 = local_18.x;
  *(uint *)(&DAT_01d22e74 + (uint)bVar4 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + 4);
  *(uint *)(&DAT_01d22e78 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  _DAT_01d22e74 = 0;
  puVar2 = (uint *)(DAT_007e2a54 + 0x10);
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
  fVar5 = (float10)_DAT_005c4629;
  fVar6 = (float10)local_60 * fVar5;
  fVar7 = (float10)local_54 * fVar5;
  fVar5 = (float10)local_48 * fVar5;
  round();
  round();
  round();
  _DAT_01d22e7c = (int)ROUND(fVar6);
  _DAT_01d22e80 = (int)ROUND(fVar7);
  _DAT_01d22e84 = (int)ROUND(fVar5);
  return;
}
