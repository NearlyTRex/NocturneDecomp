// Name: engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_00490e80
// Address: 00490e80
// Address Range: [[00490e80, 00490eec]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_00490e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_00490e80(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8)

{
  byte local_1010 [4096];
  
  _vsprintf(local_1010,param_7,param_8);
  engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
            (param_1,param_2,param_3,param_4,param_5,param_6,local_1010);
  return;
}
