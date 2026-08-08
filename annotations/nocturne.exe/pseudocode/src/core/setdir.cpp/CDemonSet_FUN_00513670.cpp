// Name: core_setdir.cpp_CDemonSet_FUN_00513670
// Address: 00513670
// Address Range: [[00513670, 00513715]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_FUN_00513670(CDemonSet *this_ptr,char *param_2)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_FUN_00513670(CDemonSet *this_ptr,char *param_2)

{
  _FILE *file;
  
  file = engine_dosio_cpp_getFile_FUN_00456a60("data",param_2,"wb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 674;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Can't create %s");
  }
  _fwrite(&DAT_020875f8,0x3000,this_ptr->camera_count,file);
  if ((file->_flag & 0x20) == 0) {
    _fclose(file);
    return;
  }
  g_CurrentFilename = "..\\core\\setdir.cpp";
  g_CurrentLineNumber = 676;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Error writing %s");
  _fclose(file);
  return;
}
