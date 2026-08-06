// Name: core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00513610
// Address: 00513610
// Address Range: [[00513610, 0051366e]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00513610(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00513610(CDemonSet *this_ptr,char *filename)

{
  _FILE *file;
  
  file = engine_dosio_cpp_getFile_FUN_00456a60("data",filename,"rb");
  if (file == (_FILE *)0x0) {
    core_setdir_cpp_CDemonSet_FUN_00513720(this_ptr);
    core_setdir_cpp_FUN_00513670(this_ptr,filename);
    return;
  }
  _fread(&DAT_020875f8,0x3000,this_ptr->camera_count,file);
  _fclose(file);
  return;
}
