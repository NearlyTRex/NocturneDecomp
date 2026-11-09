// Name: engine_winfont.cpp_FUN_0057fe80
// Address: 0057fe80
// Address Range: [[0057fe80, 0057fecb]]
// Convention: unknown
// Signature: undefined4 engine_winfont_cpp_FUN_0057fe80(CWinFont *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

uint engine_winfont_cpp_FUN_0057fe80(CWinFont *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = engine_winfont_cpp_FUN_00580110(param_1,-1,-1);
  if (iVar1 == 0) {
    return 0;
  }
  engine_winfont_cpp_FUN_0057fed0
            (param_1,*(uint *)&param_1->field_0x6a48,param_2,param_3,param_4,param_5,param_6);
  return 0;
}
