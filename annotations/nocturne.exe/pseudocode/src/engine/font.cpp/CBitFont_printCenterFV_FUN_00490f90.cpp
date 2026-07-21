// Name: engine_font.cpp_CBitFont_printCenterFV_FUN_00490f90
// Address: 00490f90
// Address Range: [[00490f90, 00490fec]]
// Convention: unknown
// Signature: void engine_font_cpp_CBitFont_printCenterFV_FUN_00490f90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void engine_font_cpp_CBitFont_printCenterFV_FUN_00490f90(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  byte auStack_1010 [4096];
  
  _vsprintf(auStack_1010,param_5,param_6);
  engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0
            (param_1,param_2,param_3,param_4,auStack_1010);
  return;
}
