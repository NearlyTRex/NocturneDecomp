// Name: core_setdir.cpp_CDemonSet_refreshThumbs_FUN_0055b220
// Address: 0055b220
// Address Range: [[0055b220, 0055b27e]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_0055b220(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_0055b220(CDemonSet *this_ptr,char *filename)

{
  _FILE *file;
  
  file = engine_dosio_cpp_FUN_00479180(&DAT_005f1018,filename,&DAT_005f1015);
  if (file == (_FILE *)0x0) {
    core_setdir_cpp_FUN_0055b330(this_ptr);
    core_setdir_cpp_FUN_0055b280(this_ptr,filename);
    return;
  }
  _fread(&DAT_020b28f4,0x3000,this_ptr->camera_count,file);
  _fclose(file);
  return;
}
