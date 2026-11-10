// Name: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130
// Address: 00517130
// Address Range: [[00517130, 005171d1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00517130(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00517130(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)

{
  _FILE *file_handle;
  int in_stack_00000020;
  char acStack_64 [4];
  uint uStack_60;
  
  cockpit_pkbitmap_cpp_FUN_00516200(this_ptr);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_00516270(this_ptr,filename);
  file_handle = engine_dosio_cpp_FUN_00460c70((char *)0x5e1d63,this_ptr->filename,(char *)0x5e1d60);
  if (file_handle == (_FILE *)0x0) {
    _sprintf(acStack_64,"Unable to open PBM file %s");
    _DAT_01d046a4 = 0x51a;
    _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_FUN_004e4500(acStack_64);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_00516f30(this_ptr,file_handle,0);
  uStack_60 = 0x5171b3;
  _fclose();
  if (in_stack_00000020 == 0) {
    return;
  }
  uStack_60 = 0x5171c9;
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_00516d60(this_ptr);
  return;
}
