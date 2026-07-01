// Name: cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520
// Address: 0054b520
// Address Range: [[0054b520, 0054b5b2]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520(CPackedBitmap *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520(CPackedBitmap *this_ptr,char *filename)

{
  _FILE *file_handle;
  char local_6c [100];
  
  file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          (filename,(char *)0x0,"wb","..\\cockpit\\pkbitmap.cpp",1132)
  ;
  if (file_handle == (_FILE *)0x0) {
    _sprintf(local_6c,"Unable to create PBM file %s",filename);
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    g_CurrentLineNumber = 1136;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_6c);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\cockpit\\pkbitmap.cpp",1140);
  return;
}
