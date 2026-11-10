// Name: cockpit_pkbitmap.cpp_FUN_00538130
// Address: 00538130
// Address Range: [[00538130, 005381a9]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_00538130(CPackedBitmap *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_pkbitmap_cpp_FUN_00538130(CPackedBitmap *param_1,uint param_2)

{
  _FILE *file_handle;
  char acStack_6c [4];
  _FILE *p_Stack_68;
  
  file_handle = (_FILE *)_fopen(param_2,"wb");
  if (file_handle == (_FILE *)0x0) {
    _sprintf(acStack_6c,"Unable to create PBM file %s");
    _DAT_01d1d400 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d1d404 = 0x474;
    core_main_c_FUN_005030e0(acStack_6c);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_005381b0(param_1,file_handle);
  acStack_6c[0] = 'a';
  acStack_6c[1] = -0x7f;
  acStack_6c[2] = 'S';
  acStack_6c[3] = '\0';
  p_Stack_68 = file_handle;
  _fclose();
  return;
}
