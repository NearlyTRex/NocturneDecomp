// Name: engine_ini.cpp_getProfileInteger_FUN_004d8840
// Address: 004d8840
// Address Range: [[004d8840, 004d88dc]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_getProfileInteger_FUN_004d8840(char *section,char *key,int default_value,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_ini_cpp_getProfileInteger_FUN_004d8840(char *section,char *key,int default_value,char *filename)

{
  int iVar1;
  char acStack_20c [256];
  char acStack_10c [256];
  
  _sprintf(acStack_10c,(char *)0x5dac7e);
  iVar1 = engine_ini_cpp_CIni_getProfileString_FUN_004d8180
                    ((CIni *)0x1cee1a4,section,key,acStack_10c,acStack_20c,0xff,filename);
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\engine\\ini.cpp";
    _DAT_01d046a4 = 0x23d;
    core_main_c_FUN_004e4500("Bad ini read!");
  }
  iVar1 = atoi(acStack_20c);
  return iVar1;
}
