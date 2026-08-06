// Name: core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00482680
// Address: 00482680
// Address Range: [[00482680, 00482765]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_00482680(CSmokeParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_00482680(CSmokeParticle *this_ptr)

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
  uint local_18;
  
  bVar4 = 0;
  _DAT_01c08d24 = 4;
  _DAT_01c08d28 = 0;
  _DAT_01c08d2c = 0;
  _DAT_01c08d30 = 0;
  _DAT_01c08d34 = 0;
  _DAT_01c08d38 = 0;
  _DAT_01c08d3c = 1;
  _DAT_01c08d40 = 2;
  _DAT_01c08d44 = 3;
  engine_drender_cpp_FUN_00460d90(g_CDemonRenderer_PTR_005ae704);
  _DAT_01c08d08 = local_18;
  *(uint *)(&DAT_01c08d0c + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar4 * -8);
  *(uint *)(&DAT_01c08d10 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  _DAT_01c08d0c = 0;
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
  _DAT_01c08d14 = (int)ROUND(dVar5);
  _DAT_01c08d18 = (int)ROUND(dVar6);
  _DAT_01c08d1c = (int)ROUND(dVar7);
  return;
}
