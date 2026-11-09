// Name: cockpit_pkbitmap.cpp_FUN_00516de0
// Address: 00516de0
// Address Range: [[00516de0, 00516e59]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_00516de0(CPackedBitmap *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_pkbitmap_cpp_FUN_00516de0(CPackedBitmap *param_1,uint param_2)

{
  _FILE *file_handle;
  uint uStack_6c;
  _FILE *p_Stack_68;
  
  file_handle = (_FILE *)_fopen(param_2,0x5e1c4b);
  if (file_handle == (_FILE *)0x0) {
    FUN_005b7790(&uStack_6c,"Unable to create PBM file %s",param_2);
    _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d046a4 = 0x472;
    core_main_c_FUN_004e4500(&uStack_6c);
  }
  cockpit_pkbitmap_cpp_FUN_00516e60(param_1,file_handle);
  uStack_6c = 0x516e11;
  p_Stack_68 = file_handle;
  _fclose();
  return;
}
