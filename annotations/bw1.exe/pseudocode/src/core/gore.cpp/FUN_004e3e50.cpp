// Name: core_gore.cpp_FUN_004e3e50
// Address: 004e3e50
// Address Range: [[004e3e50, 004e3f32]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004e3e50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004e3e50(void)

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
  uint local_18;
  
  bVar4 = 0;
  _DAT_01cd0e44 = 4;
  _DAT_01cd0e48 = 0;
  _DAT_01cd0e4c = 0;
  _DAT_01cd0e50 = 0;
  _DAT_01cd0e54 = 0;
  _DAT_01cd0e58 = 0;
  _DAT_01cd0e5c = 1;
  _DAT_01cd0e60 = 2;
  _DAT_01cd0e64 = 3;
  engine_matrix_c_FUN_00483b50(DAT_00612560);
  _DAT_01cd0e68 = local_18;
  *(uint *)(&DAT_01cd0e6c + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar4 * -8);
  *(uint *)(&DAT_01cd0e70 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  _DAT_01cd0e6c = 0;
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
  fVar5 = (float10)_DAT_005e4015;
  fVar6 = (float10)local_60 * fVar5;
  fVar7 = (float10)local_54 * fVar5;
  fVar5 = (float10)local_48 * fVar5;
  round();
  round();
  round();
  _DAT_01cd0e74 = (int)ROUND(fVar6);
  _DAT_01cd0e78 = (int)ROUND(fVar7);
  _DAT_01cd0e7c = (int)ROUND(fVar5);
  return;
}
