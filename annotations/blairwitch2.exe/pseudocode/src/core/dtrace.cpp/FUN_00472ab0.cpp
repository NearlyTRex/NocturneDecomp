// Name: core_dtrace.cpp_FUN_00472ab0
// Address: 00472ab0
// Address Range: [[00472ab0, 00472aed]]
// Convention: unknown
// Signature: undefined4 core_dtrace_cpp_FUN_00472ab0(undefined4 param_1,char *param_2)

#include "nocturne.h"

uint core_dtrace_cpp_FUN_00472ab0(uint param_1,char *param_2)

{
  _FILE *p_Var1;
  
  p_Var1 = engine_dosio_cpp_FUN_00460c70(&DAT_005d1b4e,param_2,&DAT_005d1b4b);
  if (p_Var1 == (_FILE *)0x0) {
    return 0;
  }
  core_dtrace_cpp_FUN_004728d0(param_1,p_Var1);
  _fclose(p_Var1);
  return 1;
}
