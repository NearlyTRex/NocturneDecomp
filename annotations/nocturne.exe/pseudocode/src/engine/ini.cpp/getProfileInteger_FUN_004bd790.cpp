// Name: engine_ini.cpp_getProfileInteger_FUN_004bd790
// Address: 004bd790
// Address Range: [[004bd790, 004bd82c]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_getProfileInteger_FUN_004bd790(char *section,char *key,int default_value,char *filename)

#include "nocturne.h"

int __cdecl engine_ini_cpp_getProfileInteger_FUN_004bd790(char *section,char *key,int default_value,char *filename)

{
  int iVar1;
  char local_20c [256];
  char local_10c [256];
  
  _sprintf(local_10c,"%d");
  iVar1 = engine_ini_cpp_CIni_getProfileString_FUN_004bd0a0
                    ((CIni *)0x1cae378,section,key,local_10c,local_20c,0xff,filename);
  if (iVar1 == 0) {
    g_CHAR_PTR_01cc4800 = "..\\engine\\ini.cpp";
    g_INT_01cc4804 = 0x22b;
    core_main_c_FUN_004c8440("Bad ini read!");
  }
  iVar1 = atoi(local_20c);
  return iVar1;
}
