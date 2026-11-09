// Name: support_trstream.cpp_FUN_0057d450
// Address: 0057d450
// Address Range: [[0057d450, 0057d4e0]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_0057d450(int *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint support_trstream_cpp_FUN_0057d450(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  _DAT_01d046a0 = "..\\support\\trstream.cpp";
  _DAT_01d046a4 = 0x6e5;
  core_main_c_FUN_004e4500("Hey, we're using windows handles for low-level file I/O!");
  (**(code **)(*param_1 + 0x24))(param_1);
  param_1[4] = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  _fseek(param_1[1],param_4 + param_1[4],0);
  iVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
  if (iVar1 != 0) {
    support_trstream_cpp_FUN_0057d1d0(param_1);
    return 1;
  }
  (**(code **)(*param_1 + 0x24))(param_1);
  return 0;
}
