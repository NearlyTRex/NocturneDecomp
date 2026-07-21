// Name: engine_font.cpp_CBitFont_drawTextRight_FUN_00490be0
// Address: 00490be0
// Address Range: [[00490be0, 00490c19]]
// Convention: unknown
// Signature: void engine_font_cpp_CBitFont_drawTextRight_FUN_00490be0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void engine_font_cpp_CBitFont_drawTextRight_FUN_00490be0(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                    (param_1,param_6,param_3,param_4,param_5,param_6);
  engine_font_cpp_CBitFont_drawTextWrapper_FUN_00490af0(param_1,(param_2 - iVar1) + 1);
  return;
}
