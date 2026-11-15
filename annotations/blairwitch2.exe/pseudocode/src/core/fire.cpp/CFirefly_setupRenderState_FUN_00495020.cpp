// Name: core_fire.cpp_CFirefly_setupRenderState_FUN_00495020
// Address: 00495020
// Address Range: [[00495020, 0049513c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFirefly_setupRenderState_FUN_00495020(CFirefly *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFirefly_setupRenderState_FUN_00495020(CFirefly *this_ptr)

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
  _DAT_01c3ded4 = 4;
  _DAT_01c3ded8 = 0;
  _DAT_01c3dedc = 0;
  _DAT_01c3dee0 = 0;
  _DAT_01c3dee4 = 0;
  _DAT_01c3dee8 = 0;
  _DAT_01c3deec = 1;
  DAT_0062202c = 0x80000;
  _DAT_00622030 = 0xf80000;
  _DAT_0062205c = 0xf80000;
  _DAT_00622060 = 0xf80000;
  _DAT_0062208c = 0xf80000;
  DAT_00622090 = 0x80000;
  _DAT_006220bc = 0x80000;
  _DAT_006220c0 = 0x80000;
  _DAT_01c3def0 = 2;
  _DAT_01c3def4 = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650(DAT_0060b280,&local_18);
  _DAT_01c3deb8 = local_18.x;
  *(uint *)(&DAT_01c3debc + (uint)bVar4 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + 4);
  *(uint *)(&DAT_01c3dec0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  _DAT_01c3debc = 0;
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
  dVar6 = (double)local_54 * _DAT_005d53c2;
  dVar7 = (double)local_48 * _DAT_005d53c2;
  dVar5 = round((double)local_60 * _DAT_005d53c2);
  dVar6 = round(dVar6);
  dVar7 = round(dVar7);
  _DAT_01c3dec4 = (int)ROUND(dVar5);
  _DAT_01c3dec8 = (int)ROUND(dVar6);
  _DAT_01c3decc = (int)ROUND(dVar7);
  return;
}
