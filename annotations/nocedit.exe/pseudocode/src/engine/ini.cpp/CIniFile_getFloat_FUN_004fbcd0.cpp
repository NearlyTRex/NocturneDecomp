// Name: engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0
// Address: 004fbcd0
// Address Range: [[004fbcd0, 004fbd26]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004fbcd0(CIniFile *this_ptr,char *key,float *output)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004fbcd0(CIniFile *this_ptr,char *key,float *output)

{
  char *in_stack_ffffff98;
  
  _sprintf(&stack0xffffff98,"%g",(double)*output);
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20
            (this_ptr,key,&stack0xffffff98,100,in_stack_ffffff98);
  sscanf(&stack0xffffff98,"%f");
  return;
}
