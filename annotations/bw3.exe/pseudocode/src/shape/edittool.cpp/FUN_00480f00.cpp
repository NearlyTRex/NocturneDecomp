// Name: shape_edittool.cpp_FUN_00480f00
// Address: 00480f00
// Address Range: [[00480f00, 0048114a]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00480f00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00480f00(uint param_1,uint param_2,uint param_3)

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
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330();
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  uStackY_40 = 0x480f31;
  _DAT_01c5bae4 = engine_font_cpp_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  iVar2 = _DAT_01c5baec;
  round();
  uVar1 = param_3;
  if (iVar2 != 0) {
    engine_mini3d_cpp_FUN_004f3520();
    uVar1 = _DAT_01c6b5c0;
  }
  _DAT_01c6b5c0 = uVar1;
  uStackY_40 = 0x480fb4;
  engine_matrix_c_transformToCache_FUN_004e5540(0,(CVector3i *)&stack0xffffffe0);
  engine_matrix_c_transformToCache_FUN_004e5540(1,(CVector3i *)&stack0xffffffe8);
  puVar4 = &DAT_0060b044;
  puVar5 = auStackY_54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar4 = &DAT_0060b014;
  puVar5 = &uStackY_84;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_FUN_00407b30();
  engine_matrix_c_transformToCache_FUN_004e5540(2,(CVector3i *)&stack0xfffffff0);
  puVar4 = (uint *)&DAT_0060b074;
  puVar5 = auStackY_4c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar4 = &DAT_0060b014;
  puVar5 = &uStackY_7c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  uStackY_80 = 0x481046;
  engine_3d_c_FUN_00407b30();
  engine_matrix_c_transformToCache_FUN_004e5540(3,(CVector3i *)&stack0xfffffff8);
  puVar4 = (uint *)&DAT_0060b0a4;
  puVar5 = &uStackY_44;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar3 = &DAT_0060b044;
  puVar4 = &DAT_0060b014;
  puVar5 = auStackY_74;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  uStackY_78 = 0x481097;
  engine_3d_c_FUN_00407b30();
  iVar2 = 0;
  do {
    if ((*(byte *)((int)puVar3 + 0x13) & 0x80) == 0) {
      FUN_005a28c0();
      engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
      engine_mini3d_cpp_FUN_004edaf0();
      engine_font_cpp_FUN_004b0a20();
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0xc;
  } while (iVar2 < 3);
  return;
}
