// Name: core_script.cpp_CScript_FreeSomething1_FUN_00559870
// Address: 00559870
// Address Range: [[00559870, 005598ee]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_FreeSomething1_FUN_00559870()

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_FreeSomething1(CScript* param_1) */

void core_script_cpp_CScript_FreeSomething1_FUN_00559870(void)

{
  int in_stack_00000004;
  
  shape_edittool_cpp_CStrList_clear_FUN_004a2b10((CStrList *)(in_stack_00000004 + 0x38));
  core_script_cpp_CScript_FreeSomething2_FUN_005598f0();
  if (*(void **)(in_stack_00000004 + 0x20) != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(in_stack_00000004 + 0x20),"..\\core\\script.cpp",0x1b5);
    *(uint *)(in_stack_00000004 + 0x20) = 0;
  }
  *(uint *)(in_stack_00000004 + 0x1c) = 0;
  if (*(void **)(in_stack_00000004 + 0x2c) != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(in_stack_00000004 + 0x2c),"..\\core\\script.cpp",0x1bc);
    *(uint *)(in_stack_00000004 + 0x2c) = 0;
  }
  *(uint *)(in_stack_00000004 + 0x28) = 0;
  shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)&DAT_0310f4b0);
  return;
}
