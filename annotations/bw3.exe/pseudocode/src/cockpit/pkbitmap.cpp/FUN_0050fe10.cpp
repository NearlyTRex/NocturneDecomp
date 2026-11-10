// Name: cockpit_pkbitmap.cpp_FUN_0050fe10
// Address: 0050fe10
// Address Range: [[0050fe10, 0050fe89]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_0050fe10(CPackedBitmap *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_pkbitmap_cpp_FUN_0050fe10(CPackedBitmap *param_1,uint param_2)

{
  _FILE *file_handle;
  char acStack_6c [4];
  _FILE *p_Stack_68;
  
  file_handle = (_FILE *)_fopen(param_2,0x5cbd0e);
  if (file_handle == (_FILE *)0x0) {
    _sprintf(acStack_6c,"Unable to create PBM file %s");
    _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d71de4 = 0x474;
    core_main_c_FUN_004e4330(acStack_6c);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0050fe90(param_1,file_handle);
  acStack_6c[0] = 'A';
  acStack_6c[1] = -2;
  acStack_6c[2] = 'P';
  acStack_6c[3] = '\0';
  p_Stack_68 = file_handle;
  _fclose();
  return;
}
