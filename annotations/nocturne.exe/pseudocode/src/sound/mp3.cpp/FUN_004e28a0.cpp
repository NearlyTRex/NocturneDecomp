// Name: sound_mp3.cpp_FUN_004e28a0
// Address: 004e28a0
// Address Range: [[004e28a0, 004e2977]]
// Convention: unknown
// Signature: void sound_mp3_cpp_FUN_004e28a0(undefined4 *param_1,_FILE *param_2,ulong param_3,undefined4 param_4)

#include "nocturne.h"

void sound_mp3_cpp_FUN_004e28a0(uint *param_1,_FILE *param_2,ulong param_3,uint param_4)

{
  long lVar1;
  void *pvVar2;
  
  if ((_FILE *)*param_1 != (_FILE *)0x0) {
    _fclose((_FILE *)*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_005638d0(param_1[1]);
    param_1[1] = 0;
  }
  *param_1 = param_2;
  lVar1 = _ftell(param_2);
  param_1[8] = lVar1;
  param_1[9] = param_4;
  param_1[2] = param_3;
  pvVar2 = malloc(param_3);
  param_1[1] = pvVar2;
  if (pvVar2 == (void *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
    g_INT_01cc4804 = 0x1ff;
    core_main_c_FUN_004c8440("Out of memory.  File: %s",&DAT_01cd8b28);
  }
  _fseek((_FILE *)*param_1,param_1[8],0);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = param_1[9];
  return;
}
