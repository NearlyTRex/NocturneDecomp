// Name: sound_mp3.cpp_FUN_004e28a0
// Address: 004e28a0
// Address Range: [[004e28a0, 004e2977]]
// Convention: unknown
// Signature: void sound_mp3_cpp_FUN_004e28a0(int *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void sound_mp3_cpp_FUN_004e28a0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (*param_1 != 0) {
    _fclose(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_005638d0(param_1[1]);
    param_1[1] = 0;
  }
  *param_1 = param_2;
  iVar1 = _ftell(param_2);
  param_1[8] = iVar1;
  param_1[9] = param_4;
  param_1[2] = param_3;
  iVar1 = malloc(param_3);
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    PTR_01cc4800 = "..\\sound\\mp3.cpp";
    INT_01cc4804 = 0x1ff;
    core_main_c_FUN_004c8440("Out of memory.  File: %s",&DAT_01cd8b28);
  }
  _fseek(*param_1,param_1[8],0);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = param_1[9];
  return;
}
