// Name: core_path.cpp_FUN_0050ac40
// Address: 0050ac40
// Address Range: [[0050ac40, 0050acbe]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_0050ac40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_path_cpp_FUN_0050ac40(void)

{
  int iVar1;
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  
  if (_DAT_01ed02ac == _DAT_01ed02b0) {
    _DAT_01d71de0 = "..\\core\\path.cpp";
    _DAT_01d71de4 = 0xdf;
    core_main_c_FUN_004e4330("queuePop - empty queue?!");
  }
  *in_stack_00000004 = *(uint *)(&DAT_01ec184c + _DAT_01ed02ac * 0xc);
  *in_stack_00000008 = *(uint *)(&DAT_01ec1850 + _DAT_01ed02ac * 0xc);
  iVar1 = _DAT_01ed02ac + 1;
  *in_stack_0000000c = *(uint *)(&DAT_01ec1854 + _DAT_01ed02ac * 0xc);
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01ed02ac = iVar1;
  return;
}
