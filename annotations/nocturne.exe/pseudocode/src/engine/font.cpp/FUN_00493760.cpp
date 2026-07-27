// Name: engine_font.cpp_FUN_00493760
// Address: 00493760
// Address Range: [[00493760, 0049401f]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_00493760(int param_1,uint param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_font_cpp_FUN_00493760(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = *(int *)(param_1 + 0x316c) + *(int *)(param_1 + 0x3178);
  iVar5 = iVar4 + (param_3 * 0xc) / 0x1e0;
  iVar7 = 10;
  iVar6 = 10;
  engine_2d_c_fillRectColor_FUN_00403e60(_DAT_01c00c58,_DAT_01c00c5c,_DAT_01c00c60,_DAT_01c00c64,0);
  local_14 = 0;
  iVar2 = param_2 - 1;
  do {
    iVar1 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
                      (param_1,local_14,iVar7,iVar6,6,0xffffffff,iVar4,iVar5,iVar2);
    iVar7 = iVar7 + iVar1 + 1;
    iVar1 = iVar2;
    if (param_2 < *(int *)(param_1 + 0x3174) + iVar7 + *(int *)(param_1 + 0x3168) + 1U) {
      if ((uint)(*(int *)(param_1 + 0x316c) + iVar6) < param_3) {
        _DAT_01c00c70 = 4;
        engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar2,iVar6 + -1);
        _DAT_01c00c70 = 4;
        iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5);
        iVar1 = iVar2;
        iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0
                          (param_1,0xc5,iVar2,iVar7 + iVar6);
        engine_2d_c_drawLine_FUN_004015a0(3,iVar7 + iVar6);
        _DAT_01c00c70 = 4;
        iVar7 = *(int *)(param_1 + 0x316c) + iVar6;
        engine_2d_c_drawLine_FUN_004015a0(3,iVar7,iVar2,iVar7);
      }
      iVar7 = 10;
      iVar6 = iVar6 + iVar5;
    }
    local_14 = local_14 + 1;
    iVar2 = iVar1;
  } while (local_14 < 0x7f);
  if ((uint)(*(int *)(param_1 + 0x316c) + iVar6) < param_3) {
    _DAT_01c00c70 = 4;
    iVar4 = param_2 - 1;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar4,iVar6 + -1);
    _DAT_01c00c70 = 4;
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5);
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5,iVar4,iVar2 + iVar6);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2 + iVar6);
    iVar2 = *(int *)(param_1 + 0x316c) + iVar6;
    _DAT_01c00c70 = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2,iVar4,iVar2);
  }
  iVar6 = iVar6 + iVar5;
  if ((uint)(*(int *)(param_1 + 0x316c) + iVar6) < param_3) {
    _DAT_01c00c70 = 4;
    iVar4 = param_2 - 1;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar4,iVar6 + -1);
    _DAT_01c00c70 = 4;
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5);
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5,iVar4,iVar2 + iVar6);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2 + iVar6);
    iVar2 = *(int *)(param_1 + 0x316c) + iVar6;
    _DAT_01c00c70 = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2,iVar4,iVar2);
  }
  iVar2 = 0x7f;
  local_1c = 10;
  do {
    iVar4 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
                      (param_1,iVar2,local_1c,iVar6,6,0xffffffff);
    iVar2 = iVar2 + 1;
    local_1c = local_1c + iVar4 + 1;
  } while (iVar2 < 0x90);
  iVar6 = iVar6 + iVar5;
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (param_1,&DAT_00581aa2,param_2 >> 1,iVar6 - iVar5,6,0xffffffff);
  if ((uint)(*(int *)(param_1 + 0x316c) + iVar6) < param_3) {
    _DAT_01c00c70 = 4;
    iVar4 = param_2 - 1;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar4,iVar6 + -1);
    _DAT_01c00c70 = 4;
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5);
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5,iVar4,iVar2 + iVar6);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2 + iVar6);
    iVar2 = *(int *)(param_1 + 0x316c) + iVar6;
    _DAT_01c00c70 = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2,iVar4,iVar2);
  }
  iVar2 = 0x90;
  local_20 = 10;
  do {
    iVar4 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
                      (param_1,iVar2,local_20,iVar6,6,0xffffffff);
    iVar2 = iVar2 + 1;
    local_20 = local_20 + iVar4 + 1;
  } while (iVar2 < 0xa0);
  iVar6 = iVar6 + iVar5;
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (param_1,&DAT_00581ab0,param_2 >> 1,iVar6 - iVar5,6,0xffffffff);
  if ((uint)(*(int *)(param_1 + 0x316c) + iVar6) < param_3) {
    iVar4 = param_2 - 1;
    _DAT_01c00c70 = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar4,iVar6 + -1);
    _DAT_01c00c70 = 4;
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5);
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5,iVar4,iVar2 + iVar6);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2 + iVar6);
    iVar2 = *(int *)(param_1 + 0x316c) + iVar6;
    _DAT_01c00c70 = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2,iVar4,iVar2);
  }
  iVar2 = 0xa0;
  local_24 = 10;
  do {
    iVar4 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
                      (param_1,iVar2,local_24,iVar6,6,0xffffffff);
    iVar2 = iVar2 + 1;
    local_24 = local_24 + iVar4 + 1;
  } while (iVar2 < 0xb0);
  iVar6 = iVar6 + iVar5;
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (param_1,&DAT_00581ac5,param_2 >> 1,iVar6 - iVar5,6,0xffffffff);
  if ((uint)(*(int *)(param_1 + 0x316c) + iVar6) < param_3) {
    iVar4 = param_2 - 1;
    _DAT_01c00c70 = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar4,iVar6 + -1);
    _DAT_01c00c70 = 4;
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5);
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5,iVar4,iVar2 + iVar6);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2 + iVar6);
    iVar2 = *(int *)(param_1 + 0x316c) + iVar6;
    _DAT_01c00c70 = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2,iVar4,iVar2);
  }
  iVar2 = 0xb0;
  local_28 = 10;
  do {
    iVar4 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
                      (param_1,iVar2,local_28,iVar6,6,0xffffffff);
    iVar2 = iVar2 + 1;
    local_28 = local_28 + iVar4 + 1;
  } while (iVar2 < 0xc0);
  iVar6 = iVar6 + iVar5;
  engine_font_cpp_FUN_00490b20
            (param_1,param_2 >> 1,iVar6 - iVar5,1,6,"maxCharHght: %d",
             *(uint *)(param_1 + 0x316c));
  if ((uint)(*(int *)(param_1 + 0x316c) + iVar6) < param_3) {
    iVar4 = param_2 - 1;
    _DAT_01c00c70 = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar4,iVar6 + -1);
    _DAT_01c00c70 = 4;
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5);
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5,iVar4,iVar2 + iVar6);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2 + iVar6);
    iVar2 = *(int *)(param_1 + 0x316c) + iVar6;
    _DAT_01c00c70 = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2,iVar4,iVar2);
  }
  iVar2 = 0xc0;
  local_2c = 10;
  do {
    iVar4 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
                      (param_1,iVar2,local_2c,iVar6,6,0xffffffff);
    iVar2 = iVar2 + 1;
    local_2c = local_2c + iVar4 + 1;
  } while (iVar2 < 0xd0);
  iVar6 = iVar6 + iVar5;
  if ((uint)(*(int *)(param_1 + 0x316c) + iVar6) < param_3) {
    _DAT_01c00c70 = 4;
    iVar4 = param_2 - 1;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar4,iVar6 + -1);
    _DAT_01c00c70 = 4;
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5);
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5,iVar4,iVar2 + iVar6);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2 + iVar6);
    iVar2 = *(int *)(param_1 + 0x316c) + iVar6;
    _DAT_01c00c70 = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2,iVar4,iVar2);
  }
  iVar2 = 0xd0;
  local_30 = 10;
  do {
    iVar4 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
                      (param_1,iVar2,local_30,iVar6,6,0xffffffff);
    iVar2 = iVar2 + 1;
    local_30 = local_30 + iVar4 + 1;
  } while (iVar2 < 0xe0);
  iVar6 = iVar6 + iVar5;
  if ((uint)(*(int *)(param_1 + 0x316c) + iVar6) < param_3) {
    iVar4 = param_2 - 1;
    _DAT_01c00c70 = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar4,iVar6 + -1);
    _DAT_01c00c70 = 4;
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5);
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5,iVar4,iVar2 + iVar6);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2 + iVar6);
    iVar2 = *(int *)(param_1 + 0x316c) + iVar6;
    _DAT_01c00c70 = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2,iVar4,iVar2);
  }
  iVar2 = 0xe0;
  local_34 = 10;
  do {
    iVar4 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
                      (param_1,iVar2,local_34,iVar6,6,0xffffffff);
    iVar2 = iVar2 + 1;
    local_34 = local_34 + iVar4 + 1;
  } while (iVar2 < 0xf0);
  iVar6 = iVar6 + iVar5;
  if ((uint)(*(int *)(param_1 + 0x316c) + iVar6) < param_3) {
    _DAT_01c00c70 = 4;
    iVar4 = param_2 - 1;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar4,iVar6 + -1);
    _DAT_01c00c70 = 4;
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5);
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xc5,iVar4,iVar2 + iVar6);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2 + iVar6);
    iVar2 = *(int *)(param_1 + 0x316c) + iVar6;
    _DAT_01c00c70 = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar2,iVar4,iVar2);
  }
  iVar2 = 0xf0;
  local_18 = 10;
  do {
    iVar4 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
                      (param_1,iVar2,local_18,iVar6,6,0xffffffff);
    iVar2 = iVar2 + 1;
    local_18 = local_18 + iVar4 + 1;
  } while (iVar2 < 0x100);
  uVar3 = engine_font_cpp_FUN_00493110(param_1,0xff);
  uVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,0xff,uVar3);
  uVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004930b0(param_1,0xff,uVar3);
  engine_font_cpp_FUN_00490b20(param_1,param_2 >> 1,iVar6,1,6,&DAT_00581ae0,uVar3);
  return;
}
