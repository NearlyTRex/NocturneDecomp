// Name: core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00513610
// Address: 00513610
// Address Range: [[00513610, 0051366e]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00513610(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00513610(uint *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60("data",param_2,"rb");
  if (iVar1 == 0) {
    core_setdir_cpp_FUN_00513720(param_1);
    core_setdir_cpp_FUN_00513670(param_1,param_2);
    return;
  }
  _fread(&DAT_020875f8,0x3000,*param_1,iVar1);
  _fclose(iVar1);
  return;
}
