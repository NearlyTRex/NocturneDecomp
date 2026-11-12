// Name: engine_font.cpp_FUN_004b0e30
// Address: 004b0e30
// Address Range: [[004b0e30, 004b0e94]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004b0e30(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6 ,undefined4 param_7)

#include "nocturne.h"

void engine_font_cpp_FUN_004b0e30(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6 ,uint param_7)

{
  char acStack_1010 [4096];
  
  _vsprintf(acStack_1010,param_6,param_7);
  engine_font_cpp_CBitFont_drawTextRight_FUN_004b0da0
            (param_1,param_2,param_3,param_4,param_5,acStack_1010);
  return;
}
