// Name: engine_font.cpp_FUN_004b3780
// Address: 004b3780
// Address Range: [[004b3780, 004b37cc]]
// Convention: unknown
// Signature: uint engine_font_cpp_FUN_004b3780(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_font_cpp_FUN_004b3780(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  
  if (DAT_005fba20 == 0x20) {
    return in_stack_0000000c << (DAT_01c6af8c & 0x1f) |
           in_stack_00000004 << (DAT_01c6af74 & 0x1f) | in_stack_00000008 << (DAT_01c6af80 & 0x1f);
  }
  return in_stack_00000004 << 0x10 | in_stack_00000008 << 8 | in_stack_0000000c;
}
