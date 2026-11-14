// Name: core_setdir.cpp_FUN_00539860
// Address: 00539860
// Address Range: [[00539860, 005398b2]]
// Convention: unknown
// Signature: void core_setdir_cpp_FUN_00539860(CDemonSet *param_1,char *param_2)

#include "nocturne.h"

void core_setdir_cpp_FUN_00539860(CDemonSet *param_1,char *param_2)

{
  _FILE *p_Var1;
  
  p_Var1 = engine_dosio_cpp_FUN_00460c70(&DAT_005e6020,param_2,&DAT_005e601d);
  if (p_Var1 == (_FILE *)0x0) {
    core_setdir_cpp_CDemonSet_saveThumbsNoFile_FUN_00539d50(param_1);
    core_setdir_cpp_CDemonSet_writeThumbs_FUN_00539c30(param_1,param_2);
    return;
  }
  core_setdir_cpp_FUN_005398d0(param_1,p_Var1);
  _fclose(p_Var1);
  return;
}
