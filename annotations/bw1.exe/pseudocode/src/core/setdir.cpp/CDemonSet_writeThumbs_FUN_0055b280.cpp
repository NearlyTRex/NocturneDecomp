// Name: core_setdir.cpp_CDemonSet_writeThumbs_FUN_0055b280
// Address: 0055b280
// Address Range: [[0055b280, 0055b325]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_writeThumbs_FUN_0055b280(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_writeThumbs_FUN_0055b280(CDemonSet *this_ptr,char *filename)

{
  _FILE *file;
  
  file = engine_dosio_cpp_getFile_FUN_00479180("data",filename,"wb");
  if (file == (_FILE *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\setdir.cpp";
    g_INT_01d1d404 = 0x2b5;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Can't create %s");
  }
  _fwrite(g_CHAR_ARRAY_020b28f4,0x3000,this_ptr->camera_count,file);
  if ((file->_flag & 0x20) == 0) {
    _fclose(file);
    return;
  }
  g_CHAR_PTR_01d1d400 = "..\\core\\setdir.cpp";
  g_INT_01d1d404 = 0x2b7;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Error writing %s");
  _fclose(file);
  return;
}
