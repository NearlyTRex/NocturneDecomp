// Name: engine_font.cpp_FUN_004c1dd0
// Address: 004c1dd0
// Address Range: [[004c1dd0, 004c2052]]
// Convention: unknown
// Signature: int engine_font_cpp_FUN_004c1dd0(CBitFont *param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_font_cpp_FUN_004c1dd0(CBitFont *param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint extraout_ECX;
  byte *pbVar4;
  uint character_code;
  float10 fVar5;
  
  if ((param_1->use_3d_rendering != 0) && (_DAT_01c50948 != 0)) {
    if (param_1->win_font_enabled == 0) {
      iVar1 = unkafter_font_cpp_FUN_004c47f0(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      iVar1 = unkafter_palette_cpp_FUN_00531ee0
                        (param_1->win_font_helper,param_2,param_3,param_4,param_5,param_6);
    }
    return iVar1;
  }
  pbVar3 = param_2;
  if (param_1->win_font_enabled == 0) {
    iVar1 = param_3;
    if (param_1->use_3d_rendering != 0) {
      fVar5 = (float10)_DAT_01d224c0 * (float10)_DAT_005e0a56;
      round();
      param_1->accel_color = extraout_ECX | (int)ROUND(fVar5) << 0x18;
    }
    while (character_code = (uint)*param_2, character_code != 0) {
      if (character_code == 0xd) {
        param_2 = param_2 + 1;
      }
      else if (character_code == 10) {
        param_4 = param_4 + param_1->current_line_height + param_1->line_spacing;
        param_2 = param_2 + 1;
        iVar1 = param_3;
      }
      else {
        iVar2 = engine_font_cpp_FUN_004c2810(param_1,character_code,iVar1,param_4,param_5,param_6);
        param_2 = param_2 + 1;
        iVar1 = iVar1 + iVar2;
      }
    }
    return iVar1 - param_3;
  }
  do {
    pbVar4 = param_2;
    if (*param_2 == 10) goto LAB_004c1e74;
    if (*param_2 == 0) goto LAB_004c1e72;
    pbVar4 = param_2 + 1;
    if (*pbVar4 == 10) goto LAB_004c1e74;
    param_2 = param_2 + 2;
    if (*pbVar4 == 0) {
LAB_004c1e72:
      pbVar4 = (byte *)0x0;
LAB_004c1e74:
      if (pbVar4 != (byte *)0x0) {
        *pbVar4 = 0;
      }
      unkafter_palette_cpp_FUN_00531ee0
                (param_1->win_font_helper,pbVar3,param_3,param_4,param_5,param_6);
      unkafter_palette_cpp_FUN_005320b0(param_1->win_font_helper);
      if (pbVar4 == (byte *)0x0) {
        return 0;
      }
      *pbVar4 = 10;
      param_2 = pbVar4 + 1;
      param_4 = param_4 + param_1->current_line_height + param_1->line_spacing;
      pbVar3 = param_2;
    }
  } while( true );
}
