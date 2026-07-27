// Name: engine_font.cpp_FUN_00494080
// Address: 00494080
// Address Range: [[00494080, 004940cc]]
// Convention: unknown
// Signature: uint engine_font_cpp_FUN_00494080(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_font_cpp_FUN_00494080(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  
  if (DAT_005b7624 == 0x20) {
    return in_stack_0000000c << (DAT_01c0063c & 0x1f) |
           in_stack_00000004 << (DAT_01c00624 & 0x1f) | in_stack_00000008 << (DAT_01c00630 & 0x1f);
  }
  return in_stack_00000004 << 0x10 | in_stack_00000008 << 8 | in_stack_0000000c;
}
