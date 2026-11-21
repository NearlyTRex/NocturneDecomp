// Name: engine_ini.cpp_getProfileInteger_FUN_004d8950
// Address: 004d8950
// Address Range: [[004d8950, 004d89ec]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_getProfileInteger_FUN_004d8950(char *section,char *key,int default_value,char *filename)

#include "nocturne.h"

int __cdecl engine_ini_cpp_getProfileInteger_FUN_004d8950(char *section,char *key,int default_value,char *filename)

{
  int iVar1;
  char acStack_20c [256];
  char acStack_10c [256];
  
  _sprintf(acStack_10c,"%d");
  iVar1 = engine_ini_cpp_CIni_getProfileString_FUN_004d8290
                    (&g_CIniInstance,section,key,acStack_10c,acStack_20c,0xff,filename);
  if (iVar1 == 0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 573;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Bad ini read!");
  }
  iVar1 = atoi(acStack_20c);
  return iVar1;
}
