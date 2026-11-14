// Name: core_path.cpp_queuePop_FUN_0050ac40
// Address: 0050ac40
// Address Range: [[0050ac40, 0050acbe]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePop_FUN_0050ac40(int *out_x,int *out_cost,int *out_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_queuePop_FUN_0050ac40(int *out_x,int *out_cost,int *out_z)

{
  int iVar1;
  
  if (_DAT_01ed02ac == _DAT_01ed02b0) {
    _DAT_01d71de0 = "..\\core\\path.cpp";
    _DAT_01d71de4 = 0xdf;
    core_main_c_FUN_004e4330("queuePop - empty queue?!");
  }
  *out_x = *(int *)(&DAT_01ec184c + _DAT_01ed02ac * 0xc);
  *out_cost = *(int *)(&DAT_01ec1850 + _DAT_01ed02ac * 0xc);
  iVar1 = _DAT_01ed02ac + 1;
  *out_z = *(int *)(&DAT_01ec1854 + _DAT_01ed02ac * 0xc);
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01ed02ac = iVar1;
  return;
}
