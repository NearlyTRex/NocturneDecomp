// Name: engine_winfont.cpp_FUN_0058e0c0
// Address: 0058e0c0
// Address Range: [[0058e0c0, 0058e10b]]
// Convention: unknown
// Signature: undefined4 engine_winfont_cpp_FUN_0058e0c0(CWinFont *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

uint engine_winfont_cpp_FUN_0058e0c0(CWinFont *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  iVar1 = engine_winfont_cpp_FUN_0058e450(param_1,-1,-1);
  if (iVar1 == 0) {
    return 0;
  }
  engine_winfont_cpp_FUN_0058e110
            (param_1,*(HDC *)&param_1->field_0x6a48,param_2,param_3,param_4,param_5,param_6);
  return 0;
}
