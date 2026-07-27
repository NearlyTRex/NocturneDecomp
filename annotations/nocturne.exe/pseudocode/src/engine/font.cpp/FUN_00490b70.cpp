// Name: engine_font.cpp_FUN_00490b70
// Address: 00490b70
// Address Range: [[00490b70, 00490bd4]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_00490b70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

void engine_font_cpp_FUN_00490b70(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  byte auStack_1010 [4096];
  
  _vsprintf(auStack_1010,param_6,param_7);
  engine_font_cpp_CBitFont_drawTextWrapper_FUN_00490af0
            (param_1,param_2,param_3,param_4,param_5,auStack_1010);
  return;
}
