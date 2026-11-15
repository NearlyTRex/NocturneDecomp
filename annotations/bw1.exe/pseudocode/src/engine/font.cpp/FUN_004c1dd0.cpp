// Name: engine_font.cpp_FUN_004c1dd0
// Address: 004c1dd0
// Address Range: [[004c1dd0, 004c2052]]
// Convention: unknown
// Signature: int engine_font_cpp_FUN_004c1dd0(CBitFont *param_1,char *param_2,int param_3,int param_4,int param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_font_cpp_FUN_004c1dd0(CBitFont *param_1,char *param_2,int param_3,int param_4,int param_5,uint param_6)

{
  CBitFont *this_ptr;
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int y;
  double dVar7;
  
  this_ptr = param_1;
  if ((param_1->use_3d_rendering != 0) && (_DAT_01c50948 != 0)) {
    if (param_1->win_font_enabled == 0) {
      iVar1 = engine_font_cpp_FUN_004c47f0(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      iVar1 = engine_palette_cpp_FUN_00531ee0
                        (param_1->win_font_helper,param_2,param_3,param_4,param_5,param_6);
    }
    return iVar1;
  }
  pcVar4 = param_2;
  if (param_1->win_font_enabled != 0) {
    do {
      pcVar5 = param_2;
      if (*param_2 == '\n') goto LAB_004c1e74;
      if (*param_2 == '\0') goto LAB_004c1e72;
      pcVar5 = param_2 + 1;
      if (*pcVar5 == '\n') goto LAB_004c1e74;
      param_2 = param_2 + 2;
      if (*pcVar5 == '\0') {
LAB_004c1e72:
        pcVar5 = (char *)0x0;
LAB_004c1e74:
        if (pcVar5 != (char *)0x0) {
          *pcVar5 = '\0';
        }
        engine_palette_cpp_FUN_00531ee0
                  (param_1->win_font_helper,pcVar4,param_3,param_4,param_5,param_6);
        engine_palette_cpp_FUN_005320b0(param_1->win_font_helper);
        if (pcVar5 == (char *)0x0) {
          return 0;
        }
        *pcVar5 = '\n';
        param_2 = pcVar5 + 1;
        param_4 = param_4 + param_1->current_line_height + param_1->line_spacing;
        pcVar4 = param_2;
      }
    } while( true );
  }
  iVar1 = param_3;
  y = param_4;
  if (param_1->use_3d_rendering == 0) goto LAB_004c1ee1;
  if (param_5 == -2) {
    if (DAT_0061b4a0 == 0x20) {
      uVar6 = _DAT_01cc8cd8 << (DAT_01c4e9d4 & 0x1f) | _DAT_01cc8cdc << (DAT_01c4e9e0 & 0x1f);
      uVar2 = _DAT_01cc8ce0 << (DAT_01c4e9ec & 0x1f);
    }
    else {
      uVar6 = _DAT_01cc8cdc << 8 | _DAT_01cc8cd8 << 0x10;
      uVar2 = _DAT_01cc8ce0;
    }
LAB_004c1f4b:
    uVar6 = uVar6 | uVar2;
  }
  else {
    if (-1 < param_5) {
      iVar3 = param_5 * 3;
      uVar6 = (uint)(byte)(&DAT_01c4e9fa)[iVar3];
      if (DAT_0061b4a0 == 0x20) {
        uVar2 = (uint)(byte)(&DAT_01c4e9f9)[iVar3] << (DAT_01c4e9e0 & 0x1f) |
                (uint)(byte)(&DAT_01c4e9f8)[iVar3] << (DAT_01c4e9d4 & 0x1f);
        uVar6 = uVar6 << (DAT_01c4e9ec & 0x1f);
      }
      else {
        uVar2 = (uint)(byte)(&DAT_01c4e9f8)[iVar3] << 0x10 | (uint)(byte)(&DAT_01c4e9f9)[iVar3] << 8
        ;
      }
      goto LAB_004c1f4b;
    }
    uVar6 = 0xffffff;
  }
  dVar7 = round((double)(_DAT_01d224c0 * (float)_DAT_005e0a56));
  param_1->accel_color = uVar6 | (int)ROUND(dVar7) << 0x18;
LAB_004c1ee1:
  while (uVar6 = (uint)(byte)param_1->bitmap_count, uVar6 != 0) {
    if (uVar6 == 0xd) {
      param_1 = (CBitFont *)((int)&param_1->bitmap_count + 1);
    }
    else if (uVar6 == 10) {
      param_1 = (CBitFont *)((int)&param_1->bitmap_count + 1);
      iVar1 = param_3;
      y = y + this_ptr->current_line_height + this_ptr->line_spacing;
    }
    else {
      iVar3 = engine_font_cpp_FUN_004c2810(this_ptr,uVar6,iVar1,y,param_4,param_5);
      param_1 = (CBitFont *)((int)&param_1->bitmap_count + 1);
      iVar1 = iVar1 + iVar3;
    }
  }
  return iVar1 - param_3;
}
