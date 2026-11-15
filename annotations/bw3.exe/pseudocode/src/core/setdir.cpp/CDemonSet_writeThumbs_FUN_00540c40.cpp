// Name: core_setdir.cpp_CDemonSet_writeThumbs_FUN_00540c40
// Address: 00540c40
// Address Range: [[00540c40, 00540ce5]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_writeThumbs_FUN_00540c40(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setdir_cpp_CDemonSet_writeThumbs_FUN_00540c40(CDemonSet *this_ptr,char *filename)

{
  _FILE *file;
  
  file = engine_dosio_cpp_getFile_FUN_004659c0(&DAT_005d0cc9,filename,&DAT_005d0cc6);
  if (file == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\setdir.cpp";
    _DAT_01d71de4 = 0x2b5;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Can't create %s");
  }
  _fwrite(&DAT_0212551c,0x3000,this_ptr->camera_count,file);
  if ((file->_flag & 0x20) == 0) {
    _fclose(file);
    return;
  }
  _DAT_01d71de0 = "..\\core\\setdir.cpp";
  _DAT_01d71de4 = 0x2b7;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Error writing %s");
  _fclose(file);
  return;
}
