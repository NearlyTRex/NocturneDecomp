// Name: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40
// Address: 004f4e40
// Address Range: [[004f4e40, 004f4ee1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_004f4e40(CPackedBitmap *param_1,char *param_2)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_004f4e40(CPackedBitmap *param_1,char *param_2)

{
  _FILE *file_handle;
  int in_stack_00000020;
  byte auStack_64 [4];
  uint uStack_60;
  
  cockpit_pkbitmap_cpp_FUN_004f3f50(param_1);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(param_1,param_2);
  file_handle = engine_dosio_cpp_getFile_FUN_00456a60
                          ("art",param_1->filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    _sprintf(auStack_64,"Unable to open PBM file %s",param_1);
    g_INT_01cc4804 = 0x4ff;
    g_CHAR_PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_FUN_004c8440(auStack_64);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(param_1,file_handle,0);
  uStack_60 = 0x4f4ec3;
  _fclose(file_handle);
  if (in_stack_00000020 == 0) {
    return;
  }
  uStack_60 = 0x4f4ed9;
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(param_1);
  return;
}
