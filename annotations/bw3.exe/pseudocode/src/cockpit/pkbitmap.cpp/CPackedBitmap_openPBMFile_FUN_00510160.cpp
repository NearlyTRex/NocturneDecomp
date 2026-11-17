// Name: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00510160
// Address: 00510160
// Address Range: [[00510160, 00510201]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00510160(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00510160(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)

{
  _FILE *file_handle;
  int in_stack_00000024;
  char acStack_60 [4];
  uint uStack_5c;
  
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0050f230(this_ptr);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0050f2a0(this_ptr,(char *)apply_palette_flag);
  file_handle = engine_dosio_cpp_getFile_FUN_004659c0
                          ("art",this_ptr->filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    _sprintf(acStack_60,"Unable to open PBM file %s");
    g_INT_01d71de4 = 0x51c;
    g_CHAR_PTR_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_displayErrorAndQuit_FUN_004e4330(acStack_60);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0050ff60(this_ptr,file_handle,0);
  uStack_5c = 0x5101e3;
  _fclose(file_handle);
  if (in_stack_00000024 == 0) {
    return;
  }
  uStack_5c = 0x5101f9;
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0050fd90(this_ptr);
  return;
}
