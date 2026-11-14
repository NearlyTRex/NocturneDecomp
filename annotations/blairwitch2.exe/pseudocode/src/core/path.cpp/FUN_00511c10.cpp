// Name: core_path.cpp_FUN_00511c10
// Address: 00511c10
// Address Range: [[00511c10, 00511c8e]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_00511c10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_path_cpp_FUN_00511c10(void)

{
  int iVar1;
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  
  if (_DAT_01e5ec6c == _DAT_01e5ec70) {
    _DAT_01d046a0 = "..\\core\\path.cpp";
    _DAT_01d046a4 = 0xdf;
    core_main_c_FUN_004e4500("queuePop - empty queue?!");
  }
  *in_stack_00000004 = *(uint *)(&DAT_01e5020c + _DAT_01e5ec6c * 0xc);
  *in_stack_00000008 = *(uint *)(&DAT_01e50210 + _DAT_01e5ec6c * 0xc);
  iVar1 = _DAT_01e5ec6c + 1;
  *in_stack_0000000c = *(uint *)(&DAT_01e50214 + _DAT_01e5ec6c * 0xc);
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01e5ec6c = iVar1;
  return;
}
