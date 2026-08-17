// Name: core_fire.cpp_CSpark_setupRenderState_FUN_004837a0
// Address: 004837a0
// Address Range: [[004837a0, 004838bf]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_004837a0(CSpark *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_004837a0(CSpark *this_ptr)

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
  _DAT_01c08d24 = 4;
  _DAT_01c08d28 = 0;
  _DAT_01c08d2c = 0;
  _DAT_01c08d30 = 0;
  _DAT_01c08d34 = 0;
  _DAT_01c08d38 = 0;
  _DAT_01c08d3c = 1;
  DAT_005c502c = 0x80000;
  _DAT_005c5030 = 0xf80000;
  _DAT_005c505c = 0xf80000;
  _DAT_005c5060 = 0xf80000;
  _DAT_005c508c = 0xf80000;
  _DAT_005c5090 = 0x80000;
  _DAT_005c50bc = 0x80000;
  _DAT_005c50c0 = 0x80000;
  _DAT_01c08d40 = 2;
  _DAT_01c08d44 = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_00460d90
            (g_CDemonRenderer_PTR_005ae704,&local_18);
  _DAT_01c08d08 = local_18.x;
  *(uint *)(&DAT_01c08d0c + (uint)bVar4 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + 4);
  *(uint *)(&DAT_01c08d10 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
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
