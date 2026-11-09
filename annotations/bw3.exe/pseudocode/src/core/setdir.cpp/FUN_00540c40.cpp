// Name: core_setdir.cpp_FUN_00540c40
// Address: 00540c40
// Address Range: [[00540c40, 00540ce5]]
// Convention: unknown
// Signature: void core_setdir_cpp_FUN_00540c40(undefined4 *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_setdir_cpp_FUN_00540c40(uint *param_1,char *param_2)

{
  _FILE *p_Var1;
  
  p_Var1 = engine_dosio_cpp_FUN_004659c0(&DAT_005d0cc9,param_2,&DAT_005d0cc6);
  if (p_Var1 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\setdir.cpp";
    _DAT_01d71de4 = 0x2b5;
    core_main_c_FUN_004e4330("Can't create %s",param_2);
  }
  _fwrite(&DAT_0212551c,0x3000,*param_1,p_Var1);
  if (((byte)p_Var1[0xc] & 0x20) == 0) {
    _fclose(p_Var1);
    return;
  }
  _DAT_01d71de0 = "..\\core\\setdir.cpp";
  _DAT_01d71de4 = 0x2b7;
  core_main_c_FUN_004e4330("Error writing %s",param_2);
  _fclose(p_Var1);
  return;
}
