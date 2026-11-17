// Name: core_skeleton.cpp_CSkeleton_load_FUN_00540a10
// Address: 00540a10
// Address Range: [[00540a10, 00540a90]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00540a10(CSkeleton *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00540a10(CSkeleton *this_ptr,char *filename)

{
  char cVar1;
  _FILE *file_handle;
  char *pcVar2;
  
  file_handle = engine_dosio_cpp_getFile_FUN_00460c70("data",filename,"rt");
  if (file_handle == (_FILE *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\skeleton.cpp";
    g_INT_01d046a4 = 0x100;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CSkeleton::load - Can't open %s");
  }
  core_skeleton_cpp_CSkeleton_loadStream_FUN_00540aa0(this_ptr,file_handle);
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
