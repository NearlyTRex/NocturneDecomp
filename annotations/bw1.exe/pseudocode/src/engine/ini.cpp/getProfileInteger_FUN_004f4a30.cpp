// Name: engine_ini.cpp_getProfileInteger_FUN_004f4a30
// Address: 004f4a30
// Address Range: [[004f4a30, 004f4acc]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_getProfileInteger_FUN_004f4a30(char *section,char *key,int default_value,char *filename)

#include "nocturne.h"

int __cdecl engine_ini_cpp_getProfileInteger_FUN_004f4a30(char *section,char *key,int default_value,char *filename)

{
  int iVar1;
  char acStack_20c [256];
  char acStack_10c [256];
  
  _sprintf(acStack_10c,"%d");
  iVar1 = engine_ini_cpp_CIni_getProfileString_FUN_004f4370
                    (&g_CIni_01d06d64,section,key,acStack_10c,acStack_20c,0xff,filename);
  if (iVar1 == 0) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\ini.cpp";
    g_INT_01d1d404 = 0x23d;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Bad ini read!");
  }
  iVar1 = atoi(acStack_20c);
  return iVar1;
}
