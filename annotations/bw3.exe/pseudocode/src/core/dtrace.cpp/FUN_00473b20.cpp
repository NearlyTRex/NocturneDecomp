// Name: core_dtrace.cpp_FUN_00473b20
// Address: 00473b20
// Address Range: [[00473b20, 00473b5d]]
// Convention: unknown
// Signature: undefined4 core_dtrace_cpp_FUN_00473b20(undefined4 param_1,char *param_2)

#include "nocturne.h"

uint core_dtrace_cpp_FUN_00473b20(uint param_1,char *param_2)

{
  _FILE *p_Var1;
  
  p_Var1 = engine_dosio_cpp_FUN_004659c0(&DAT_005bca04,param_2,&DAT_005bca01);
  if (p_Var1 == (_FILE *)0x0) {
    return 0;
  }
  core_dtrace_cpp_FUN_00473940(param_1,p_Var1);
  _fclose(p_Var1);
  return 1;
}
