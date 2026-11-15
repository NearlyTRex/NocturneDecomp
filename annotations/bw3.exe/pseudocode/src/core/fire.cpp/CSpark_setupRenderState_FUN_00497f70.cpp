// Name: core_fire.cpp_CSpark_setupRenderState_FUN_00497f70
// Address: 00497f70
// Address Range: [[00497f70, 0049808c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_00497f70(CSpark *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_00497f70(CSpark *this_ptr)

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
  _DAT_01c73674 = 4;
  _DAT_01c73678 = 0;
  _DAT_01c7367c = 0;
  _DAT_01c73680 = 0;
  _DAT_01c73684 = 0;
  _DAT_01c73688 = 0;
  _DAT_01c7368c = 1;
  DAT_0060b02c = 0x80000;
  _DAT_0060b030 = 0xf80000;
  _DAT_0060b05c = 0xf80000;
  _DAT_0060b060 = 0xf80000;
  _DAT_0060b08c = 0xf80000;
  DAT_0060b090 = 0x80000;
  _DAT_0060b0bc = 0x80000;
  _DAT_0060b0c0 = 0x80000;
  _DAT_01c73690 = 2;
  _DAT_01c73694 = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230(DAT_005f2afc,&local_18);
  _DAT_01c73658 = local_18.x;
  *(uint *)(&DAT_01c7365c + (uint)bVar4 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + 4);
  *(uint *)(&DAT_01c73660 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  _DAT_01c7365c = 0;
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
  dVar6 = (double)local_54 * _DAT_005c0520;
  dVar7 = (double)local_48 * _DAT_005c0520;
  dVar5 = round((double)local_60 * _DAT_005c0520);
  dVar6 = round(dVar6);
  dVar7 = round(dVar7);
  _DAT_01c73664 = (int)ROUND(dVar5);
  _DAT_01c73668 = (int)ROUND(dVar6);
  _DAT_01c7366c = (int)ROUND(dVar7);
  return;
}
