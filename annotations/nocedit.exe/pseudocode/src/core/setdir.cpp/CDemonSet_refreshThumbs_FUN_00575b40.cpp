// Name: core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40
// Address: 00575b40
// Address Range: [[00575b40, 00575b9c]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00575b40(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00575b40(CDemonSet *this_ptr,char *filename)

{
  _FILE *file_handle;
  
  file_handle = engine_dosio_c_getFile_FUN_00481a50("data",filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575f60(this_ptr);
    core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(this_ptr,filename);
    return;
  }
  core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575bc0(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\setdir.cpp",0x363);
  return;
}
