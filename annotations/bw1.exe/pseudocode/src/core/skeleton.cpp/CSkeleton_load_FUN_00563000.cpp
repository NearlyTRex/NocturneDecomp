// Name: core_skeleton.cpp_CSkeleton_load_FUN_00563000
// Address: 00563000
// Address Range: [[00563000, 00563080]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00563000(CSkeleton *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00563000(CSkeleton *this_ptr,char *filename)

{
  char cVar1;
  _FILE *file_handle;
  char *pcVar2;
  
  file_handle = engine_dosio_cpp_FUN_00479180(&DAT_005f1b44,filename,&DAT_005f1b41);
  if (file_handle == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x101;
    core_main_c_FUN_005030e0("CSkeleton::load - Can't open %s",filename);
  }
  core_skeleton_cpp_CSkeleton_loadStream_FUN_00563090(this_ptr,file_handle);
  pcVar2 = this_ptr->loaded_filename;
  do {
    cVar1 = *filename;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  _fclose(file_handle);
  return;
}
