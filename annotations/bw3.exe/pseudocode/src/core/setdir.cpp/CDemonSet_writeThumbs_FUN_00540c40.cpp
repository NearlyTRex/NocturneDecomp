// Name: core_setdir.cpp_CDemonSet_writeThumbs_FUN_00540c40
// Address: 00540c40
// Address Range: [[00540c40, 00540ce5]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_writeThumbs_FUN_00540c40(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_writeThumbs_FUN_00540c40(CDemonSet *this_ptr,char *filename)

{
  _FILE *file;
  
  file = engine_dosio_cpp_getFile_FUN_004659c0("data",filename,"wb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 693;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Can't create %s");
  }
  _fwrite(g_CHAR_ARRAY_0212551c,0x3000,this_ptr->camera_count,file);
  if ((file->_flag & 0x20) == 0) {
    _fclose(file);
    return;
  }
  g_CurrentFilename = "..\\core\\setdir.cpp";
  g_CurrentLineNumber = 695;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Error writing %s");
  _fclose(file);
  return;
}
