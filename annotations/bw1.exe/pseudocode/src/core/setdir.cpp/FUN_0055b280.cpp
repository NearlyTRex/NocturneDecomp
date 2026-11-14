// Name: core_setdir.cpp_FUN_0055b280
// Address: 0055b280
// Address Range: [[0055b280, 0055b325]]
// Convention: unknown
// Signature: void core_setdir_cpp_FUN_0055b280(SIZE_T *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_setdir_cpp_FUN_0055b280(SIZE_T *param_1,char *param_2)

{
  _FILE *file;
  
  file = engine_dosio_cpp_FUN_00479180(&DAT_005f1020,param_2,&DAT_005f101d);
  if (file == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\setdir.cpp";
    _DAT_01d1d404 = 0x2b5;
    core_main_c_FUN_005030e0("Can't create %s",param_2);
  }
  _fwrite(&DAT_020b28f4,0x3000,*param_1,file);
  if ((file->_flag & 0x20) == 0) {
    _fclose(file);
    return;
  }
  _DAT_01d1d400 = "..\\core\\setdir.cpp";
  _DAT_01d1d404 = 0x2b7;
  core_main_c_FUN_005030e0("Error writing %s",param_2);
  _fclose(file);
  return;
}
