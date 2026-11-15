// Name: engine_font.cpp_FUN_004a8df0
// Address: 004a8df0
// Address Range: [[004a8df0, 004a90a3]]
// Convention: unknown
// Signature: int engine_font_cpp_FUN_004a8df0(CBitFont *param_1,byte *param_2,int param_3,int param_4,int param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_font_cpp_FUN_004a8df0(CBitFont *param_1,byte *param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int y;
  double dVar6;
  byte *local_14;
  
  if ((param_1->use_3d_rendering != 0) && (_DAT_01c37788 != 0)) {
    if (param_1->win_font_enabled == 0) {
      iVar1 = engine_font_cpp_FUN_004ab840(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      iVar1 = engine_palette_cpp_FUN_00510cd0
                        (param_1->win_font_helper,param_2,param_3,param_4,param_5,param_6);
    }
    return iVar1;
  }
  if (param_1->win_font_enabled != 0) {
    local_14 = param_2;
    do {
      pbVar5 = param_2;
      if (*param_2 == 10) goto LAB_004a8e88;
      if (*param_2 == 0) goto LAB_004a8e86;
      pbVar5 = param_2 + 1;
      if (*pbVar5 == 10) goto LAB_004a8e88;
      param_2 = param_2 + 2;
      if (*pbVar5 == 0) {
LAB_004a8e86:
        pbVar5 = (byte *)0x0;
LAB_004a8e88:
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = 0;
        }
        iVar1 = (*((param_1->win_font_helper->base).vtable)->drawText)
                          (param_1->win_font_helper,local_14,param_3,param_4,param_5,param_6);
        if (iVar1 == -1) {
          param_1->win_font_enabled = 0;
          iVar1 = engine_font_cpp_FUN_004a8df0(param_1,local_14,param_3,param_4,param_5,param_6);
          param_1->win_font_enabled = 1;
        }
        if (pbVar5 == (byte *)0x0) {
          return iVar1;
        }
        param_2 = pbVar5 + 1;
        *pbVar5 = 10;
        param_4 = param_4 + param_1->current_line_height + param_1->line_spacing;
        local_14 = param_2;
      }
    } while( true );
  }
  iVar1 = param_3;
  y = param_4;
  if (param_1->use_3d_rendering == 0) goto LAB_004a8f2c;
  if (param_5 == -2) {
    if (DAT_006141c0 == 0x20) {
      uVar2 = _DAT_01cb024c << (DAT_01c35820 & 0x1f) | _DAT_01cb0248 << (DAT_01c35814 & 0x1f);
      uVar4 = _DAT_01cb0250;
LAB_004a8f94:
      uVar2 = uVar4 << (DAT_01c3582c & 0x1f) | uVar2;
    }
    else {
      uVar2 = _DAT_01cb0248 << 0x10 | _DAT_01cb024c << 8 | _DAT_01cb0250;
    }
  }
  else if (param_5 < 0) {
    uVar2 = 0xffffff;
  }
  else {
    iVar3 = param_5 * 3;
    uVar4 = (uint)(byte)(&DAT_01c3583a)[iVar3];
    if (DAT_006141c0 == 0x20) {
      uVar2 = (uint)(byte)(&DAT_01c35839)[iVar3] << (DAT_01c35820 & 0x1f) |
              (uint)(byte)(&DAT_01c35838)[iVar3] << (DAT_01c35814 & 0x1f);
      goto LAB_004a8f94;
    }
    uVar2 = (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10 | (uint)(byte)(&DAT_01c35839)[iVar3] << 8 |
            uVar4;
  }
  dVar6 = round((double)(_DAT_01d09860 * (float)_DAT_005d69dd));
  param_1->accel_color = uVar2 | (int)ROUND(dVar6) << 0x18;
LAB_004a8f2c:
  while (uVar2 = (uint)*param_2, uVar2 != 0) {
    if (uVar2 == 0xd) {
      param_2 = param_2 + 1;
    }
    else if (uVar2 == 10) {
      param_2 = param_2 + 1;
      iVar1 = param_3;
      y = y + param_1->current_line_height + param_1->line_spacing;
    }
    else {
      iVar3 = engine_font_cpp_FUN_004a9870(param_1,uVar2,iVar1,y,param_4,param_5);
      param_2 = param_2 + 1;
      iVar1 = iVar1 + iVar3;
    }
  }
  return iVar1 - param_3;
}
