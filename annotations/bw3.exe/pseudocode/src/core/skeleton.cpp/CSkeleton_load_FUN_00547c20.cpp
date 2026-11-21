// Name: core_skeleton.cpp_CSkeleton_load_FUN_00547c20
// Address: 00547c20
// Address Range: [[00547c20, 00547ca0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00547c20(CSkeleton *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00547c20(CSkeleton *this_ptr,char *filename)

{
  char cVar1;
  _FILE *file_handle;
  char *pcVar2;
  
  file_handle = engine_dosio_cpp_getFile_FUN_004659c0("data",filename,"rt");
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 257;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CSkeleton::load - Can't open %s");
  }
  core_skeleton_cpp_CSkeleton_loadStream_FUN_00547cb0(this_ptr,file_handle);
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
