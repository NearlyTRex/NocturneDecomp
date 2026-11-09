// Name: core_setdir.cpp_FUN_00540be0
// Address: 00540be0
// Address Range: [[00540be0, 00540c3e]]
// Convention: unknown
// Signature: void core_setdir_cpp_FUN_00540be0(undefined4 *param_1,char *param_2)

#include "nocturne.h"

void core_setdir_cpp_FUN_00540be0(uint *param_1,char *param_2)

{
  _FILE *p_Var1;
  
  p_Var1 = engine_dosio_cpp_FUN_004659c0(&DAT_005d0cc1,param_2,&DAT_005d0cbe);
  if (p_Var1 == (_FILE *)0x0) {
    core_setdir_cpp_FUN_00540cf0(param_1);
    core_setdir_cpp_FUN_00540c40(param_1,param_2);
    return;
  }
  _fread(&DAT_0212551c,0x3000,*param_1,p_Var1);
  _fclose(p_Var1);
  return;
}
