// Name: cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0050fe10
// Address: 0050fe10
// Address Range: [[0050fe10, 0050fe89]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_saveToPBMFile_FUN_0050fe10(CPackedBitmap *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_saveToPBMFile_FUN_0050fe10(CPackedBitmap *this_ptr,char *filename)

{
  _FILE *file_handle;
  char acStack_6c [4];
  
  file_handle = _fopen(filename,"wb");
  if (file_handle == (_FILE *)0x0) {
    _sprintf(acStack_6c,"Unable to create PBM file %s");
    g_CHAR_PTR_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
    g_INT_01d71de4 = 0x474;
    core_main_c_displayErrorAndQuit_FUN_004e4330(acStack_6c);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0050fe90(this_ptr,file_handle);
  acStack_6c[0] = 'A';
  acStack_6c[1] = -2;
  acStack_6c[2] = 'P';
  acStack_6c[3] = '\0';
  _fclose(file_handle);
  return;
}
