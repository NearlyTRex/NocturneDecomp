// Name: core_path.cpp_FUN_0050ac3c
// Address: 0050ac3c
// Address Range: [[0050ac3c, 0050acbe]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_0050ac3c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_FUN_0050ac3c(uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  
  if (_DAT_01ed02ac == _DAT_01ed02b0) {
    _DAT_01d71de0 = "..\\core\\path.cpp";
    _DAT_01d71de4 = 0xdf;
    core_main_c_FUN_004e4330("queuePop - empty queue?!");
  }
  *param_1 = *(uint *)(&DAT_01ec184c + _DAT_01ed02ac * 0xc);
  *param_2 = *(uint *)(&DAT_01ec1850 + _DAT_01ed02ac * 0xc);
  iVar1 = _DAT_01ed02ac + 1;
  *param_3 = *(uint *)(&DAT_01ec1854 + _DAT_01ed02ac * 0xc);
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01ed02ac = iVar1;
  return;
}
