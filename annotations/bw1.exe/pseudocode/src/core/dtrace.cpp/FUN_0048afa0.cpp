// Name: core_dtrace.cpp_FUN_0048afa0
// Address: 0048afa0
// Address Range: [[0048afa0, 0048afdd]]
// Convention: unknown
// Signature: undefined4 core_dtrace_cpp_FUN_0048afa0(undefined4 param_1,char *param_2)

#include "nocturne.h"

uint core_dtrace_cpp_FUN_0048afa0(uint param_1,char *param_2)

{
  _FILE *p_Var1;
  
  p_Var1 = engine_dosio_cpp_FUN_00479180(&DAT_005db947,param_2,&DAT_005db944);
  if (p_Var1 == (_FILE *)0x0) {
    return 0;
  }
  core_dtrace_cpp_FUN_0048adc0(param_1,p_Var1);
  _fclose(p_Var1);
  return 1;
}
