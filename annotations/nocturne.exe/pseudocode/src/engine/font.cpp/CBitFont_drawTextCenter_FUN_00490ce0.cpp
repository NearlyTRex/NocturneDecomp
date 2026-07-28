// Name: engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0
// Address: 00490ce0
// Address Range: [[00490ce0, 00490d1f]]
// Convention: unknown
// Signature: void engine_font_cpp_CBitFont_drawTextCenter_FUN_00490ce0(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6)

#include "nocturne.h"

void engine_font_cpp_CBitFont_drawTextCenter_FUN_00490ce0(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6)

{
  int iVar1;
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(param_1,param_6);
  engine_font_cpp_CBitFont_drawTextWrapper_FUN_00490af0
            (param_1,param_2 - iVar1 / 2,param_3,param_4,param_5,param_6);
  return;
}
