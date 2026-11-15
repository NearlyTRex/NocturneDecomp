// Name: cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_00516de0
// Address: 00516de0
// Address Range: [[00516de0, 00516e59]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_saveToPBMFile_FUN_00516de0(CPackedBitmap *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_saveToPBMFile_FUN_00516de0(CPackedBitmap *this_ptr,char *filename)

{
  _FILE *file_handle;
  char acStack_6c [4];
  
  file_handle = _fopen(filename,(char *)0x5e1c4b);
  if (file_handle == (_FILE *)0x0) {
    _sprintf(acStack_6c,"Unable to create PBM file %s");
    _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d046a4 = 0x472;
    core_main_c_displayErrorAndQuit_FUN_004e4500(acStack_6c);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_00516e60(this_ptr,file_handle);
  builtin_strncpy(acStack_6c,"\x11nQ",4);
  _fclose(file_handle);
  return;
}
