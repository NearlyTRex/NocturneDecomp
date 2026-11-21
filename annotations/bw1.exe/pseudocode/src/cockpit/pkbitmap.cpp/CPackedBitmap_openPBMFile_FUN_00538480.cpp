// Name: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480
// Address: 00538480
// Address Range: [[00538480, 00538521]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00538480(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00538480(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)

{
  _FILE *file_handle;
  int in_stack_00000024;
  char acStack_60 [4];
  uint uStack_5c;
  
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_00537550(this_ptr);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_005375c0(this_ptr,(char *)apply_palette_flag);
  file_handle = engine_dosio_cpp_getFile_FUN_00479180
                          ("art",this_ptr->filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    _sprintf(acStack_60,"Unable to open PBM file %s");
    g_CurrentLineNumber = 1308;
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_displayErrorAndQuit_FUN_005030e0(acStack_60);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_00538280(this_ptr,file_handle,0);
  uStack_5c = 0x538503;
  _fclose(file_handle);
  if (in_stack_00000024 == 0) {
    return;
  }
  uStack_5c = 0x538519;
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_005380b0(this_ptr);
  return;
}
