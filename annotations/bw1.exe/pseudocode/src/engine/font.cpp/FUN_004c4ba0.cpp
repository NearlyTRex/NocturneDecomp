// Name: engine_font.cpp_FUN_004c4ba0
// Address: 004c4ba0
// Address Range: [[004c4ba0, 004c4bec]]
// Convention: unknown
// Signature: uint engine_font_cpp_FUN_004c4ba0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_font_cpp_FUN_004c4ba0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  
  if (DAT_0061b4a0 == 0x20) {
    return in_stack_0000000c << (DAT_01c4e9ec & 0x1f) |
           in_stack_00000004 << (DAT_01c4e9d4 & 0x1f) | in_stack_00000008 << (DAT_01c4e9e0 & 0x1f);
  }
  return in_stack_00000004 << 0x10 | in_stack_00000008 << 8 | in_stack_0000000c;
}
