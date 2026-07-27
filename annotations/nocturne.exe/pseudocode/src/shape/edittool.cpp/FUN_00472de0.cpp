// Name: shape_edittool.cpp_FUN_00472de0
// Address: 00472de0
// Address Range: [[00472de0, 00472fcd]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00472de0(undefined4 param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00472de0(uint param_1,float param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  uint auStack_98 [12];
  uint auStack_68 [5];
  uint uStack_54;
  int iStack_50;
  byte *puStack_4c;
  int iStack_48;
  byte *puStack_44;
  char *pcStack_40;
  int *piStack_3c;
  int *apiStack_38 [5];
  int iStack_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar7 = 0;
  if (_DAT_01bcd070 == 0) {
    apiStack_38[0] = (int *)"gEdFont must be set by the application.";
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x8b;
    piStack_3c = (int *)0x472f6f;
    core_main_c_FUN_004c8440();
  }
  apiStack_38[0] = (int *)0x6a;
  _DAT_01bcd9b8 = *(uint *)(_DAT_01bcd070 + 0x3168);
  piStack_3c = (int *)_DAT_01bcd070;
  pcStack_40 = (char *)0x472e0d;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0();
  local_20 = 0;
  local_1c = 0;
  _DAT_01c00c70 = param_3;
  apiStack_38[0] = &local_20;
  local_18 = 0;
  piStack_3c = (int *)0x472e40;
  fVar8 = (float10)round((float10)param_2 * (float10)256);
  pcStack_40 = (char *)0x0;
  local_18 = (int)ROUND(fVar8);
  puStack_44 = (byte *)0x472e4a;
  engine_matrix_c_transformToCache_FUN_004cd210();
  iStack_24 = local_18;
  piStack_3c = &iStack_24;
  pcStack_40 = (char *)0x1;
  local_20 = 0;
  local_1c = 0;
  puStack_44 = (byte *)0x472e69;
  engine_matrix_c_transformToCache_FUN_004cd210();
  puVar5 = &DAT_005c5044;
  puVar6 = auStack_68;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  puVar5 = &DAT_005c5014;
  puVar6 = auStack_98;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00409290();
  local_20 = local_18;
  piStack_3c = &iStack_24;
  pcStack_40 = (char *)0x2;
  iStack_24 = 0;
  local_1c = 0;
  puStack_44 = (byte *)0x472eb4;
  engine_matrix_c_transformToCache_FUN_004cd210();
  puVar5 = &DAT_005c5074;
  puVar6 = auStack_68;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  puVar5 = &DAT_005c5014;
  puVar6 = auStack_98;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00409290();
  local_1c = local_18;
  piStack_3c = &iStack_24;
  pcStack_40 = (char *)0x3;
  iStack_24 = 0;
  local_20 = 0;
  puStack_44 = (byte *)0x472f01;
  engine_matrix_c_transformToCache_FUN_004cd210();
  puVar5 = &DAT_005c50a4;
  puVar6 = auStack_68;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  puVar4 = &DAT_005c5044;
  puVar5 = &DAT_005c5014;
  puVar6 = auStack_98;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00409290();
  iVar3 = 0;
  do {
    if ((*(byte *)((int)puVar4 + 0x13) & 0x80) == 0) {
      piStack_3c = (int *)(uint)(byte)"XYZ"[iVar3];
      pcStack_40 = "%c";
      iVar1 = puVar4[4];
      iVar2 = puVar4[5];
      iStack_48 = 0x472f95;
      puStack_44 = (byte *)apiStack_38;
      _sprintf();
      piStack_3c = (int *)0xffff;
      pcStack_40 = (char *)0x472fa2;
      engine_3d_c_setRenderAlpha_FUN_00408370();
      piStack_3c = (int *)0xffffffff;
      pcStack_40 = (char *)_DAT_01bcde04;
      puStack_44 = (byte *)(iVar2 >> 0x10);
      iStack_48 = iVar1 >> 0x10;
      iStack_50 = _DAT_01bcd070;
      uStack_54 = 0x472fc6;
      puStack_4c = (byte *)apiStack_38;
      engine_font_cpp_CBitFont_drawText_FUN_00490980();
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 0xc;
  } while (iVar3 < 3);
  return;
}
