// Name: engine_font.cpp_FUN_00490b70
// Address: 00490b70
// Address Range: [[00490b70, 00490bd4]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_00490b70(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6,va_list_t param_7)

#include "nocturne.h"

void engine_font_cpp_FUN_00490b70(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6,va_list_t param_7)

{
  char acStack_1010 [4096];
  
  _vsprintf(acStack_1010,param_6,param_7);
  engine_font_cpp_CBitFont_drawTextWrapper_FUN_00490af0
            (param_1,param_2,param_3,param_4,param_5,acStack_1010);
  return;
}
