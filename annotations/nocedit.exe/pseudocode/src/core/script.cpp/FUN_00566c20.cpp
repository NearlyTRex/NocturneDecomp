// Name: core_script.cpp_FUN_00566c20
// Address: 00566c20
// Address Range: [[00566c20, 00566cb3]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566c20()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00566c20(byte param_1, uint param_2,
   uint param_3, uint param_4, uint param_5) */

uint core_script_cpp_FUN_00566c20(void)

{
  int iVar1;
  int in_stack_00000008;
  int in_stack_0000000c;
  int *in_stack_00000010;
  int *in_stack_00000014;
  
  iVar1 = DAT_031141e4;
  if ((((DAT_031141e0 <= in_stack_00000008) && (DAT_031141e4 <= in_stack_0000000c)) &&
      (in_stack_00000008 < DAT_031141e8)) && (in_stack_0000000c < DAT_031141ec)) {
    *in_stack_00000010 =
         ((in_stack_00000008 - DAT_031141e0) + DAT_03114204 / 2) / DAT_03114204 +
         CEdScrollBar_0310fd0c.scroll_position;
    *in_stack_00000014 =
         (in_stack_0000000c - iVar1) / DAT_03114208 + CEdScrollBar_0310fcd8.scroll_position;
    return 1;
  }
  return 0;
}
