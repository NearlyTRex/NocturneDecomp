// Name: engine_ini.cpp_FUN_004f4a30
// Address: 004f4a30
// Address Range: [[004f4a30, 004f4acc]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004f4a30(char *param_1,char *param_2,undefined4 param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_ini_cpp_FUN_004f4a30(char *param_1,char *param_2,uint param_3,char *param_4)

{
  int iVar1;
  char acStack_20c [256];
  char acStack_10c [256];
  
  FUN_005bfb40(acStack_10c,0x5e57df,param_3);
  iVar1 = engine_ini_cpp_FUN_004f4370
                    ((CIni *)0x1d06d64,param_1,param_2,acStack_10c,acStack_20c,0xff,param_4);
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\engine\\ini.cpp";
    _DAT_01d1d404 = 0x23d;
    core_main_c_FUN_005030e0("Bad ini read!");
  }
  atoi(acStack_20c);
  return;
}
