// Name: engine_ini.cpp_getProfileInteger_FUN_004fb9a0
// Address: 004fb9a0
// Address Range: [[004fb9a0, 004fba3c]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_getProfileInteger_FUN_004fb9a0(char *section,char *key,int default_value,char *filename)

#include "nocturne.h"

int __cdecl engine_ini_cpp_getProfileInteger_FUN_004fb9a0(char *section,char *key,int default_value,char *filename)

{
  int iVar1;
  int iVar2;
  char local_20c [256];
  char local_10c [256];
  
  _sprintf(local_10c,"%d",default_value);
  iVar1 = engine_ini_cpp_CIni_getProfileString_FUN_004fb250
                    (&g_CIniInstance,section,key,local_10c,local_20c,0xff,filename);
  if (iVar1 == 0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x235;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad ini read!");
  }
  iVar2 = atoi(local_20c);
  return iVar2;
}
