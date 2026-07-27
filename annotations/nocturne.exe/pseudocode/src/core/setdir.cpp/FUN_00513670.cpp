// Name: core_setdir.cpp_FUN_00513670
// Address: 00513670
// Address Range: [[00513670, 00513715]]
// Convention: unknown
// Signature: void core_setdir_cpp_FUN_00513670(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void core_setdir_cpp_FUN_00513670(uint *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60("data",param_2,"wb");
  if (iVar1 == 0) {
    PTR_01cc4800 = "..\\core\\setdir.cpp";
    INT_01cc4804 = 0x2a2;
    core_main_c_FUN_004c8440("Can't create %s",param_2);
  }
  _fwrite(&DAT_020875f8,0x3000,*param_1,iVar1);
  if ((*(byte *)(iVar1 + 0xc) & 0x20) == 0) {
    _fclose(iVar1);
    return;
  }
  PTR_01cc4800 = "..\\core\\setdir.cpp";
  INT_01cc4804 = 0x2a4;
  core_main_c_FUN_004c8440("Error writing %s",param_2);
  _fclose(iVar1);
  return;
}
