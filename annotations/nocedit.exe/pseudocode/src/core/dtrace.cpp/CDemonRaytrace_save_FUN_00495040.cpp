// Name: core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040
// Address: 00495040
// Address Range: [[00495040, 004950a9]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_save_FUN_00495040(CDemonRaytrace *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_save_FUN_00495040(CDemonRaytrace *this_ptr,char *filename)

{
  _FILE *file_handle;
  
  file_handle = engine_dosio_cpp_getFile_FUN_00481a50("data",filename,"wb");
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x25f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::save - Unable to save file");
  }
  core_dtrace_cpp_CDemonRaytrace_saveBinary_FUN_00494f50(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\dtrace.cpp",0x261);
  return;
}
