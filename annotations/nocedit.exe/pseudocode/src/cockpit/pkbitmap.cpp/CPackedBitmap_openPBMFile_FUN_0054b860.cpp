// Name: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860
// Address: 0054b860
// Address Range: [[0054b860, 0054b90b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_0054b860(CPackedBitmap *this_ptr,char *filename,int post_load_processing)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_0054b860(CPackedBitmap *this_ptr,char *filename,int post_load_processing)

{
  _FILE *file_handle;
  char local_6c [100];
  
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(this_ptr);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0054a990(this_ptr,filename);
  file_handle = engine_dosio_c_getFile_FUN_00481a50("art",this_ptr->filename,"rb")
  ;
  if (file_handle == (_FILE *)0x0) {
    _sprintf(local_6c,"Unable to open PBM file %s",this_ptr);
    g_CurrentLineNumber = 0x4fc;
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_6c);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0054b690(this_ptr,file_handle,0);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\cockpit\\pkbitmap.cpp",0x500);
  if (post_load_processing == 0) {
    return;
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(this_ptr);
  return;
}
