// Name: engine_ini.cpp_FUN_004d8950
// Address: 004d8950
// Address Range: [[004d8950, 004d89ec]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004d8950(char *param_1,char *param_2,undefined4 param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_ini_cpp_FUN_004d8950(char *param_1,char *param_2,uint param_3,char *param_4)

{
  int iVar1;
  char acStack_20c [256];
  char acStack_10c [256];
  
  FUN_005a28c0(acStack_10c,0x5c57a5,param_3);
  iVar1 = engine_ini_cpp_FUN_004d8290
                    ((CIni *)0x1d5bc78,param_1,param_2,acStack_10c,acStack_20c,0xff,param_4);
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\engine\\ini.cpp";
    _DAT_01d71de4 = 0x23d;
    core_main_c_FUN_004e4330("Bad ini read!");
  }
  atoi(acStack_20c);
  return;
}
