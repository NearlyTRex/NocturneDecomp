// Name: support_trstream.cpp_FUN_005a1a20
// Address: 005a1a20
// Address Range: [[005a1a20, 005a1a62]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_005a1a20(int *param_1,char *param_2,char *param_3,char *param_4)

#include "nocturne.h"

uint support_trstream_cpp_FUN_005a1a20(int *param_1,char *param_2,char *param_3,char *param_4)

{
  _FILE *p_Var1;
  
  (**(code **)(*param_1 + 0x18))(param_1);
  p_Var1 = engine_dosio_cpp_FUN_00479180(param_2,param_3,param_4);
  param_1[1] = (int)p_Var1;
  if (p_Var1 != (_FILE *)0x0) {
    return 1;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return 0;
}
