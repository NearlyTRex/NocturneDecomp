// Name: engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0
// Address: 004fbcd0
// Address Range: [[004fbcd0, 004fbd26]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0(CIniFile * this, char * key, float * output)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004fbcd0(CIniFile *this,char *key,float *output)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_ffffff9c;
  char acStack_60 [92];
  
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff98,"%g",(double)*output);
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20
            ((CIniFile *)key,(char *)output,&stack0xffffff9c,100,in_stack_ffffff9c);
  crt_stdio_c_sscanf_FUN_0060013c(acStack_60,"%f");
  return;
}
