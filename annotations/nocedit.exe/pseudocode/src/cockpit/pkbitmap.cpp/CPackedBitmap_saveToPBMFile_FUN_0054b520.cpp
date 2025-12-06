// Name: cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520
// Address: 0054b520
// Address Range: [[0054b520, 0054b5b2]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520(CPackedBitmap * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520
          (CPackedBitmap *this_ptr,char *filename)

{
  FILE *file_handle;
  BADSPACEBASE *in_ESP;
  uint in_stack_0000000c;
  CPackedBitmap *in_stack_00000010;
  
  file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          (filename,(char *)0x0,"wb","..\\cockpit\\pkbitmap.cpp",0x46c)
  ;
  if (file_handle == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffff98,"Unable to create PBM file %s",in_stack_0000000c);
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    g_CurrentLineNumber = 0x470;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffff9c);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0(in_stack_00000010,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\cockpit\\pkbitmap.cpp",0x474);
  return;
}
