// Name: cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_00538130
// Address: 00538130
// Address Range: [[00538130, 005381a9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_saveToPBMFile_FUN_00538130(CPackedBitmap *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_saveToPBMFile_FUN_00538130(CPackedBitmap *this_ptr,char *filename)

{
  _FILE *file_handle;
  char acStack_6c [4];
  
  file_handle = _fopen(filename,"wb");
  if (file_handle == (_FILE *)0x0) {
    _sprintf(acStack_6c,"Unable to create PBM file %s");
    g_CHAR_PTR_01d1d400 = "..\\cockpit\\pkbitmap.cpp";
    g_INT_01d1d404 = 0x474;
    core_main_c_displayErrorAndQuit_FUN_005030e0(acStack_6c);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_005381b0(this_ptr,file_handle);
  acStack_6c[0] = 'a';
  acStack_6c[1] = -0x7f;
  acStack_6c[2] = 'S';
  acStack_6c[3] = '\0';
  _fclose(file_handle);
  return;
}
