// Name: engine_winfont.cpp_CWinFont_drawText_FUN_00558060
// Address: 00558060
// Address Range: [[00558060, 005580a8]]
// Convention: unknown
// Signature: undefined4 engine_winfont_cpp_CWinFont_drawText_FUN_00558060(CWinFont *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

uint engine_winfont_cpp_CWinFont_drawText_FUN_00558060(CWinFont *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  iVar1 = engine_winfont_cpp_CWinFont_createTextBackground_FUN_005584d0(param_1,-1,-1);
  if (iVar1 == 0) {
    return 0;
  }
  engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005580b0
            (param_1,param_1->device_context_handle,param_2,param_3,param_4,param_5,param_6);
  return 0;
}
