// Name: engine_ini.cpp_FUN_004bd790
// Address: 004bd790
// Address Range: [[004bd790, 004bd82c]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004bd790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void engine_ini_cpp_FUN_004bd790(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte local_20c [256];
  byte local_10c [256];
  
  _sprintf(local_10c,"%d",param_3);
  iVar1 = engine_ini_cpp_CIni_getProfileString_FUN_004bd0a0
                    (0x1cae378,param_1,param_2,local_10c,local_20c,0xff,param_4);
  if (iVar1 == 0) {
    PTR_01cc4800 = "..\\engine\\ini.cpp";
    INT_01cc4804 = 0x22b;
    core_main_c_FUN_004c8440("Bad ini read!");
  }
  atoi(local_20c);
  return;
}
