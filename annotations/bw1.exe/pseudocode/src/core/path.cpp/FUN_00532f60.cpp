// Name: core_path.cpp_FUN_00532f60
// Address: 00532f60
// Address Range: [[00532f60, 00532fde]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_00532f60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_path_cpp_FUN_00532f60(void)

{
  int iVar1;
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  
  if (_DAT_01e7abdc == _DAT_01e7abe0) {
    _DAT_01d1d400 = "..\\core\\path.cpp";
    _DAT_01d1d404 = 0xdf;
    core_main_c_FUN_005030e0("queuePop - empty queue?!");
  }
  *in_stack_00000004 = *(uint *)(&DAT_01e6c17c + _DAT_01e7abdc * 0xc);
  *in_stack_00000008 = *(uint *)(&DAT_01e6c180 + _DAT_01e7abdc * 0xc);
  iVar1 = _DAT_01e7abdc + 1;
  *in_stack_0000000c = *(uint *)(&DAT_01e6c184 + _DAT_01e7abdc * 0xc);
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01e7abdc = iVar1;
  return;
}
