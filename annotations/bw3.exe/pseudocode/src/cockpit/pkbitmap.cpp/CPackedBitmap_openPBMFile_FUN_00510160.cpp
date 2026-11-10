// Name: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00510160
// Address: 00510160
// Address Range: [[00510160, 00510201]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00510160(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00510160(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)

{
  _FILE *file_handle;
  int in_stack_00000020;
  char acStack_64 [4];
  uint uStack_60;
  
  cockpit_pkbitmap_cpp_FUN_0050f230(this_ptr);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0050f2a0(this_ptr,filename);
  file_handle = engine_dosio_cpp_FUN_004659c0((char *)0x5cbe26,this_ptr->filename,(char *)0x5cbe23);
  if (file_handle == (_FILE *)0x0) {
    _sprintf(acStack_64,"Unable to open PBM file %s");
    _DAT_01d71de4 = 0x51c;
    _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_FUN_004e4330(acStack_64);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0050ff60(this_ptr,file_handle,0);
  uStack_60 = 0x5101e3;
  _fclose();
  if (in_stack_00000020 == 0) {
    return;
  }
  uStack_60 = 0x5101f9;
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0050fd90(this_ptr);
  return;
}
