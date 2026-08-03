// Name: engine_drender.cpp_FUN_0045ed40
// Address: 0045ed40
// Address Range: [[0045ed40, 0045ed74]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0045ed40(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_drender_cpp_FUN_0045ed40(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  *(int *)(in_stack_00000004 + 8) = in_stack_00000008;
  if (in_stack_00000008 != 1) {
    return;
  }
  g_CHAR_PTR_01cc4800 = "..\\engine\\drender.cpp";
  g_INT_01cc4804 = 0x9b;
  core_main_c_FUN_004c8440("Ortho isn't supported any more");
  return;
}
