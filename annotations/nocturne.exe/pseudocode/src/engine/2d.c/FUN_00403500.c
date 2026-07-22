// Name: engine_2d.c_FUN_00403500
// Address: 00403500
// Address Range: [[00403500, 00403564]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00403500(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_2d_c_FUN_00403500(uint param_1)

{
  int iVar1;
  
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60("fog",param_1,"wb");
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0x738;
    FUN_004c8440("Unable to write light tab");
  }
  _fwrite(0x1bf5620,0x100,0x20,iVar1);
  _fclose(iVar1);
  return;
}
