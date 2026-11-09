// Name: core_path.cpp_FUN_00511c0c
// Address: 00511c0c
// Address Range: [[00511c0c, 00511c8e]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_00511c0c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_FUN_00511c0c(uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  
  if (_DAT_01e5ec6c == _DAT_01e5ec70) {
    _DAT_01d046a0 = "..\\core\\path.cpp";
    _DAT_01d046a4 = 0xdf;
    core_main_c_FUN_004e4500("queuePop - empty queue?!");
  }
  *param_1 = *(uint *)(&DAT_01e5020c + _DAT_01e5ec6c * 0xc);
  *param_2 = *(uint *)(&DAT_01e50210 + _DAT_01e5ec6c * 0xc);
  iVar1 = _DAT_01e5ec6c + 1;
  *param_3 = *(uint *)(&DAT_01e50214 + _DAT_01e5ec6c * 0xc);
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01e5ec6c = iVar1;
  return;
}
