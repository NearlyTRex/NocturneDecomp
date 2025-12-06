// Name: engine_ini.cpp_getProfileInteger_FUN_004fb9a0
// Address: 004fb9a0
// Address Range: [[004fb9a0, 004fba3c]]
// Convention: __cdecl
// Signature: int engine_ini.cpp_getProfileInteger_FUN_004fb9a0(char * section, char * key, char * default_value, char * filename)

#include "nocturne.h"

int __cdecl
engine_ini_cpp_getProfileInteger_FUN_004fb9a0
          (char *section,char *key,char *default_value,char *filename)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000014;
  char acStack_200 [244];
  char local_10c [4];
  char acStack_108 [252];
  
  crt_stdio_c_sprintf_FUN_005fdbd0(local_10c,"%d",default_value);
  iVar1 = engine_ini_cpp_CIni_getProfileString_FUN_004fb250
                    (&g_CIniInstance,key,default_value,acStack_108,&stack0xfffffdf8,0xff,
                     in_stack_00000014);
  if (iVar1 == 0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x235;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad ini read!");
  }
  iVar1 = crt_stdlib_c_atoi_FUN_005ffef0(acStack_200);
  return iVar1;
}
