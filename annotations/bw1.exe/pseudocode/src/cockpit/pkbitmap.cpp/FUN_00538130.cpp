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
  uint uStack_6c;
  _FILE *p_Stack_68;
  
  file_handle = (_FILE *)_fopen(param_2,"wb");
  if (file_handle == (_FILE *)0x0) {
    FUN_005bfb40(&uStack_6c,"Unable to create PBM file %s",param_2);
    _DAT_01d1d400 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d1d404 = 0x474;
    core_main_c_FUN_005030e0(&uStack_6c);
  }
  cockpit_pkbitmap_cpp_FUN_005381b0(param_1,file_handle);
  uStack_6c = 0x538161;
  p_Stack_68 = file_handle;
  _fclose();
  return;
}
