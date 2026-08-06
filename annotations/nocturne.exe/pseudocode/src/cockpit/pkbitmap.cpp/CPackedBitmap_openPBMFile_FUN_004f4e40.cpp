// Name: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40
// Address: 004f4e40
// Address Range: [[004f4e40, 004f4ee1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_004f4e40(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_004f4e40(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)

{
  _FILE *file_handle;
  int in_stack_00000020;
  char acStack_64 [4];
  uint uStack_60;
  
  cockpit_pkbitmap_cpp_CPackedBitmap_FUN_004f3f50(this_ptr);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(this_ptr,filename);
  file_handle = engine_dosio_cpp_getFile_FUN_00456a60
                          ("art",this_ptr->filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    _sprintf(acStack_64,"Unable to open PBM file %s",this_ptr);
    g_CurrentLineNumber = 1279;
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_displayErrorAndQuit_FUN_004c8440(acStack_64);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(this_ptr,file_handle,0);
  uStack_60 = 0x4f4ec3;
  _fclose(file_handle);
  if (in_stack_00000020 == 0) {
    return;
  }
  uStack_60 = 0x4f4ed9;
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(this_ptr);
  return;
}
