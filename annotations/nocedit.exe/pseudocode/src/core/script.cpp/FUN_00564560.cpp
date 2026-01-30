// Name: core_script.cpp_FUN_00564560
// Address: 00564560
// Address Range: [[00564560, 005645c0]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_00564560(void)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_00564560(void)

{
  int iVar1;
  int in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  
  iVar1 = DAT_031141c4;
  if ((DAT_031141c4 <= in_stack_00000004) && (in_stack_00000004 <= DAT_031141cc)) {
    *in_stack_00000008 = 0;
    *in_stack_0000000c = 9999;
    if (in_stack_00000004 == iVar1) {
      *in_stack_00000008 = DAT_031141c0;
      if (in_stack_00000004 != DAT_031141cc) {
        return;
      }
    }
    else if (in_stack_00000004 != DAT_031141cc) {
      return;
    }
    *in_stack_0000000c = DAT_031141c8;
    return;
  }
  *in_stack_0000000c = 0xffffffff;
  *in_stack_00000008 = *in_stack_0000000c;
  return;
}
