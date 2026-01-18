// Name: engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
// Address: 004fbc30
// Address Range: [[004fbc30, 004fbc83]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)

#include "nocturne.h"

void __cdecl
engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile *this_ptr,char *key_name,int *value_ptr)

{
  char *in_stack_ffffff94;
  
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff94,"%d",*value_ptr);
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20
            (this_ptr,key_name,&stack0xffffff94,100,in_stack_ffffff94);
  crt_stdio_c_sscanf_FUN_0060013c(&stack0xffffff94,"%d",value_ptr);
  return;
}
