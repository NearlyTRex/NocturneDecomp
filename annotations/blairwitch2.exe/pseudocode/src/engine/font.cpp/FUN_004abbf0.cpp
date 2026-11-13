// Name: engine_font.cpp_FUN_004abbf0
// Address: 004abbf0
// Address Range: [[004abbf0, 004abc3c]]
// Convention: unknown
// Signature: uint engine_font_cpp_FUN_004abbf0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_font_cpp_FUN_004abbf0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  
  if (DAT_006141c0 == 0x20) {
    return in_stack_0000000c << (DAT_01c3582c & 0x1f) |
           in_stack_00000004 << (DAT_01c35814 & 0x1f) | in_stack_00000008 << (DAT_01c35820 & 0x1f);
  }
  return in_stack_00000004 << 0x10 | in_stack_00000008 << 8 | in_stack_0000000c;
}
