// Name: core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00539860
// Address: 00539860
// Address Range: [[00539860, 005398b2]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00539860(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00539860(CDemonSet *this_ptr,char *filename)

{
  _FILE *file_handle;
  
  file_handle = engine_dosio_cpp_getFile_FUN_00460c70(&DAT_005e6020,filename,&DAT_005e601d);
  if (file_handle == (_FILE *)0x0) {
    core_setdir_cpp_CDemonSet_saveThumbsNoFile_FUN_00539d50(this_ptr);
    core_setdir_cpp_CDemonSet_writeThumbs_FUN_00539c30(this_ptr,filename);
    return;
  }
  core_setdir_cpp_CDemonSet_saveThumbs_FUN_005398d0(this_ptr,file_handle);
  _fclose(file_handle);
  return;
}
