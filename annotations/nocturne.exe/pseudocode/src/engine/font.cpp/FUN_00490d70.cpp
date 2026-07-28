// Name: engine_font.cpp_FUN_00490d70
// Address: 00490d70
// Address Range: [[00490d70, 00490dd4]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_00490d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,char *param_6,va_list_t param_7)

#include "nocturne.h"

void engine_font_cpp_FUN_00490d70(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,char *param_6,va_list_t param_7)

{
  char acStack_1010 [4096];
  
  _vsprintf(acStack_1010,param_6,param_7);
  engine_font_cpp_CBitFont_drawTextCenter_FUN_00490ce0
            (param_1,param_2,param_3,param_4,param_5,acStack_1010);
  return;
}
