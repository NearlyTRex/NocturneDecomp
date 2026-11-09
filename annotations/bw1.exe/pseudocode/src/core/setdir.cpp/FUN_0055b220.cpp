// Name: core_setdir.cpp_FUN_0055b220
// Address: 0055b220
// Address Range: [[0055b220, 0055b27e]]
// Convention: unknown
// Signature: void core_setdir_cpp_FUN_0055b220(undefined4 *param_1,char *param_2)

#include "nocturne.h"

void core_setdir_cpp_FUN_0055b220(uint *param_1,char *param_2)

{
  _FILE *p_Var1;
  
  p_Var1 = engine_dosio_cpp_FUN_00479180(&DAT_005f1018,param_2,&DAT_005f1015);
  if (p_Var1 == (_FILE *)0x0) {
    core_setdir_cpp_FUN_0055b330(param_1);
    core_setdir_cpp_FUN_0055b280(param_1,param_2);
    return;
  }
  _fread(&DAT_020b28f4,0x3000,*param_1,p_Var1);
  _fclose(p_Var1);
  return;
}
