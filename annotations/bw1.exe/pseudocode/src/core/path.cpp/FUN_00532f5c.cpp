// Name: core_path.cpp_FUN_00532f5c
// Address: 00532f5c
// Address Range: [[00532f5c, 00532fde]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_00532f5c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_FUN_00532f5c(uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  
  if (_DAT_01e7abdc == _DAT_01e7abe0) {
    _DAT_01d1d400 = "..\\core\\path.cpp";
    _DAT_01d1d404 = 0xdf;
    core_main_c_FUN_005030e0("queuePop - empty queue?!");
  }
  *param_1 = *(uint *)(&DAT_01e6c17c + _DAT_01e7abdc * 0xc);
  *param_2 = *(uint *)(&DAT_01e6c180 + _DAT_01e7abdc * 0xc);
  iVar1 = _DAT_01e7abdc + 1;
  *param_3 = *(uint *)(&DAT_01e6c184 + _DAT_01e7abdc * 0xc);
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01e7abdc = iVar1;
  return;
}
