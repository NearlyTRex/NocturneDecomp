// Name: engine_dosio.cpp_FUN_004794b0
// Address: 004794b0
// Address Range: [[004794b0, 0047957c]]
// Convention: unknown
// Signature: void engine_dosio_cpp_FUN_004794b0(char *param_1,byte *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_dosio_cpp_FUN_004794b0(char *param_1,byte *param_2)

{
  int iVar1;
  
  memset(param_1,0,0x100);
  _strncpy(param_1,(char *)(param_2 + 0x2c),0xff);
  param_1[0x100] = '\0';
  param_1[0x101] = '\0';
  param_1[0x102] = '\0';
  param_1[0x103] = '\0';
  if ((*param_2 & 0x20) != 0) {
    param_1[0x100] = param_1[0x100] | 1;
  }
  if ((*param_2 & 2) != 0) {
    param_1[0x100] = param_1[0x100] | 2;
  }
  if ((*param_2 & 0x10) != 0) {
    param_1[0x100] = param_1[0x100] | 4;
  }
  if ((*param_2 & 1) != 0) {
    param_1[0x100] = param_1[0x100] | 8;
  }
  if ((*(int *)(param_2 + 0x1c) != 0) || (0x7fffffff < *(uint *)(param_2 + 0x20))) {
    _DAT_01d1d400 = "..\\engine\\dosio.c";
    _DAT_01d1d404 = 0x2ff;
    core_main_c_FUN_005030e0("CFileFinder::convertStruct - file too big!");
  }
  *(uint *)(param_1 + 0x104) = *(uint *)(param_2 + 0x20);
  iVar1 = FUN_005c2106();
  *(int *)(param_1 + 0x108) = iVar1 + 0x49ef7d10;
  return;
}
