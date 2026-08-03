// Name: cockpit_pkbitmap.cpp_FUN_004f4b30
// Address: 004f4b30
// Address Range: [[004f4b30, 004f4ba9]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_004f4b30(CPackedBitmap *param_1,char *param_2)

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_004f4b30(CPackedBitmap *param_1,char *param_2)

{
  _FILE *file_handle;
  char acStack_6c [4];
  
  file_handle = _fopen(param_2,"wb");
  if (file_handle == (_FILE *)0x0) {
    _sprintf(acStack_6c,"Unable to create PBM file %s");
    g_CHAR_PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
    g_INT_01cc4804 = 0x473;
    core_main_c_FUN_004c8440(acStack_6c);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_004f4bb0(param_1,file_handle);
  builtin_strncpy(acStack_6c,"aKO",4);
  _fclose(file_handle);
  return;
}
