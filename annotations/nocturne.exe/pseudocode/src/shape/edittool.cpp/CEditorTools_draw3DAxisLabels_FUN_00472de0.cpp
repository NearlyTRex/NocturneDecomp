// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0
// Address: 00472de0
// Address Range: [[00472de0, 00472fcd]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0(CEditorTools *this_ptr,float scale_factor,int text_color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0(CEditorTools *this_ptr,float scale_factor,int text_color)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  double dVar8;
  uint uStackY_88;
  uint uStackY_84;
  uint uStackY_80;
  uint uStackY_7c;
  uint auStackY_78 [8];
  uint auStackY_58 [2];
  uint auStackY_50 [2];
  uint uStackY_48;
  uint uStackY_44;
  CVector3i *inputPoint;
  int local_18 [2];
  
  bVar7 = 0;
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x8b;
    core_main_c_FUN_004c8440();
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  _DAT_01c00c70 = text_color;
  local_18[0] = 0;
  inputPoint = (CVector3i *)0x472e40;
  dVar8 = round((double)(scale_factor * (float)256));
  local_18[0] = (int)ROUND(dVar8);
  uStackY_44 = 0x472e4a;
  engine_matrix_c_transformToCache_FUN_004cd210(0,inputPoint);
  local_18[0] = 0;
  local_18[1] = 0;
  engine_matrix_c_transformToCache_FUN_004cd210(1,(CVector3i *)&stack0xffffffe4);
  puVar5 = &DAT_005c5044;
  puVar6 = auStackY_58;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  puVar5 = &DAT_005c5014;
  puVar6 = &uStackY_88;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00409290();
  local_18[1] = 0;
  engine_matrix_c_transformToCache_FUN_004cd210(2,(CVector3i *)(local_18 + 1));
  puVar5 = &DAT_005c5074;
  puVar6 = auStackY_50;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  puVar5 = &DAT_005c5014;
  puVar6 = &uStackY_80;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  uStackY_84 = 0x472ede;
  engine_3d_c_clipAndDrawLine2D_FUN_00409290();
  engine_matrix_c_transformToCache_FUN_004cd210(3,(CVector3i *)&stack0xfffffff4);
  puVar5 = &DAT_005c50a4;
  puVar6 = &uStackY_48;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  puVar4 = &DAT_005c5044;
  puVar5 = &DAT_005c5014;
  puVar6 = auStackY_78;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  uStackY_7c = 0x472f33;
  engine_3d_c_clipAndDrawLine2D_FUN_00409290();
  iVar3 = 0;
  do {
    if ((*(byte *)((int)puVar4 + 0x13) & 0x80) == 0) {
      iVar1 = puVar4[4];
      iVar2 = puVar4[5];
      _sprintf();
      engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
      engine_font_cpp_CBitFont_drawText_FUN_00490980
                (_DAT_01bcd070,(char *)local_18,iVar1 >> 0x10,iVar2 >> 0x10,_DAT_01bcde04,-1);
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 0xc;
  } while (iVar3 < 3);
  return;
}
