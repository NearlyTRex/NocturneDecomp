// Name: core_skeleton.cpp_CSkeleton_load_FUN_00599b10
// Address: 00599b10
// MANUAL RECONSTRUCTION
// Address Range: [[00599b10, 00599ba0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00599b10(CSkeleton *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00599b10(CSkeleton *this_ptr,char *filename)

{
  _FILE *file_handle;

  strcpy(this_ptr->loaded_filename,filename);
  file_handle = engine_dosio_cpp_getFile_FUN_00481a50("data",filename,"rt");
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0xf6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSkeleton::load - Can't open %s",filename);
  }
  core_skeleton_cpp_CSkeleton_loadStream_FUN_00599bb0(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\skeleton.cpp",0xf8);
  return;
}
