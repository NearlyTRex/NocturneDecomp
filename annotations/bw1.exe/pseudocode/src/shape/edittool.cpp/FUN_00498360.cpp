// Name: shape_edittool.cpp_FUN_00498360
// Address: 00498360
// Address Range: [[00498360, 004985aa]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00498360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00498360(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint uStackY_84;
  uint uStackY_80;
  uint uStackY_7c;
  uint uStackY_78;
  uint auStackY_74 [8];
  uint auStackY_54 [2];
  uint auStackY_4c [2];
  uint uStackY_44;
  uint uStackY_40;
  
  bVar6 = 0;
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0();
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  uStackY_40 = 0x498391;
  _DAT_01c3f53c = engine_font_cpp_FUN_004c4510(_DAT_01c3eb50,0x6a);
  iVar2 = _DAT_01c3f544;
  round();
  uVar1 = param_3;
  if (iVar2 != 0) {
    engine_mini3d_cpp_FUN_00517d50();
    uVar1 = _DAT_01c4f020;
  }
  _DAT_01c4f020 = uVar1;
  uStackY_40 = 0x498414;
  engine_matrix_c_transformToCache_FUN_00507b00(0,(CVector3i *)&stack0xffffffe0);
  engine_matrix_c_transformToCache_FUN_00507b00(1,(CVector3i *)&stack0xffffffe8);
  puVar4 = &DAT_00629044;
  puVar5 = auStackY_54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar4 = &DAT_00629014;
  puVar5 = &uStackY_84;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407af0();
  engine_matrix_c_transformToCache_FUN_00507b00(2,(CVector3i *)&stack0xfffffff0);
  puVar4 = (uint *)&DAT_00629074;
  puVar5 = auStackY_4c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar4 = &DAT_00629014;
  puVar5 = &uStackY_7c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  uStackY_80 = 0x4984a6;
  engine_3d_c_clipAndDrawLine2D_FUN_00407af0();
  engine_matrix_c_transformToCache_FUN_00507b00(3,(CVector3i *)&stack0xfffffff8);
  puVar4 = (uint *)&DAT_006290a4;
  puVar5 = &uStackY_44;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar3 = &DAT_00629044;
  puVar4 = &DAT_00629014;
  puVar5 = auStackY_74;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  uStackY_78 = 0x4984f7;
  engine_3d_c_clipAndDrawLine2D_FUN_00407af0();
  iVar2 = 0;
  do {
    if ((*(byte *)((int)puVar3 + 0x13) & 0x80) == 0) {
      FUN_005bfb40();
      engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
      engine_mini3d_cpp_FUN_00512320();
      engine_font_cpp_FUN_004c1dd0();
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0xc;
  } while (iVar2 < 3);
  return;
}
