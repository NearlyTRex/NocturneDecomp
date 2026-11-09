// Name: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480
// Address: 00538480
// Address Range: [[00538480, 00538521]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00538480(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00538480(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)

{
  _FILE *file_handle;
  int in_stack_00000020;
  byte auStack_64 [4];
  uint uStack_60;
  
  cockpit_pkbitmap_cpp_FUN_00537550(this_ptr);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_005375c0(this_ptr,filename);
  file_handle = engine_dosio_cpp_FUN_00479180((char *)0x5ecfbe,(char *)this_ptr,(char *)0x5ecfbb);
  if (file_handle == (_FILE *)0x0) {
    FUN_005bfb40(auStack_64,"Unable to open PBM file %s",this_ptr);
    _DAT_01d1d404 = 0x51c;
    _DAT_01d1d400 = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_FUN_005030e0(auStack_64);
  }
  cockpit_pkbitmap_cpp_FUN_00538280(this_ptr,file_handle,0);
  uStack_60 = 0x538503;
  _fclose();
  if (in_stack_00000020 == 0) {
    return;
  }
  uStack_60 = 0x538519;
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_005380b0(this_ptr);
  return;
}
