// Name: core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00540be0
// Address: 00540be0
// Address Range: [[00540be0, 00540c3e]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00540be0(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00540be0(CDemonSet *this_ptr,char *filename)

{
  _FILE *file;
  
  file = engine_dosio_cpp_FUN_004659c0(&DAT_005d0cc1,filename,&DAT_005d0cbe);
  if (file == (_FILE *)0x0) {
    core_setdir_cpp_FUN_00540cf0(this_ptr);
    core_setdir_cpp_FUN_00540c40(this_ptr,filename);
    return;
  }
  _fread(&DAT_0212551c,0x3000,this_ptr->camera_count,file);
  _fclose(file);
  return;
}
