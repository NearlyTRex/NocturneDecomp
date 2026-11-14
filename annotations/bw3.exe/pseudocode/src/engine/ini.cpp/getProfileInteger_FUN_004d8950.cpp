// Name: engine_ini.cpp_getProfileInteger_FUN_004d8950
// Address: 004d8950
// Address Range: [[004d8950, 004d89ec]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_getProfileInteger_FUN_004d8950(char *section,char *key,int default_value,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_ini_cpp_getProfileInteger_FUN_004d8950(char *section,char *key,int default_value,char *filename)

{
  int iVar1;
  char acStack_20c [256];
  char acStack_10c [256];
  
  _sprintf(acStack_10c,(char *)0x5c57a5);
  iVar1 = engine_ini_cpp_CIni_getProfileString_FUN_004d8290
                    ((CIni *)0x1d5bc78,section,key,acStack_10c,acStack_20c,0xff,filename);
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\engine\\ini.cpp";
    _DAT_01d71de4 = 0x23d;
    core_main_c_FUN_004e4330("Bad ini read!");
  }
  iVar1 = atoi(acStack_20c);
  return iVar1;
}
