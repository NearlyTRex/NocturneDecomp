// Name: FUN_004f3340
// Address: 004f3340
// Address Range: [[004f3340, 004f3422]]
// Convention: unknown
// Signature: bool FUN_004f3340(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool FUN_004f3340(void)

{
  float in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  if (in_stack_00000008 < in_stack_00000004 + (float)_DAT_0058d020) {
    in_stack_00000008 = in_stack_00000008 + 1.0;
  }
  if (in_stack_00000004 + (float)_DAT_0058d028 < in_stack_00000008) {
    in_stack_00000008 = in_stack_00000008 + _DAT_0058d030;
  }
  if (in_stack_00000008 <= in_stack_00000004) {
    if (in_stack_0000000c < in_stack_00000008) {
      in_stack_0000000c = in_stack_0000000c + 1.0;
    }
    if (in_stack_0000000c < in_stack_00000008) {
      in_stack_0000000c = in_stack_0000000c + 1.0;
    }
    if (in_stack_00000008 + 1.0 < in_stack_0000000c) {
      in_stack_0000000c = in_stack_0000000c + _DAT_0058d030;
    }
    if (in_stack_00000008 + 1.0 < in_stack_0000000c) {
      in_stack_0000000c = in_stack_0000000c + _DAT_0058d030;
    }
    return in_stack_00000004 < in_stack_0000000c;
  }
  return false;
}
