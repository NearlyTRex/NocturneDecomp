// Name: sound_mp3.cpp_FUN_00525ab0
// Address: 00525ab0
// Address Range: [[00525ab0, 00525b87]]
// Convention: unknown
// Signature: void sound_mp3_cpp_FUN_00525ab0(int *param_1,_FILE *param_2,ulong param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_mp3_cpp_FUN_00525ab0(int *param_1,_FILE *param_2,ulong param_3,int param_4)

{
  long lVar1;
  void *pvVar2;
  
  if (*param_1 != 0) {
    _fclose(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_005c09f0(param_1[1]);
    param_1[1] = 0;
  }
  *param_1 = (int)param_2;
  lVar1 = _ftell(param_2);
  param_1[8] = lVar1;
  param_1[9] = param_4;
  param_1[2] = param_3;
  pvVar2 = malloc(param_3);
  param_1[1] = (int)pvVar2;
  if (pvVar2 == (void *)0x0) {
    _DAT_01d1d400 = "..\\sound\\mp3.cpp";
    _DAT_01d1d404 = 0x23d;
    core_main_c_FUN_005030e0("Out of memory.  File: %s",&DAT_01d404c8);
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
