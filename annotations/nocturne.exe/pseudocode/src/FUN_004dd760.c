// Name: FUN_004dd760
// Address: 004dd760
// Address Range: [[004dd760, 004dd78b]]
// Convention: unknown
// Signature: void FUN_004dd760(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_004dd760(void)

{
  int *in_stack_00000004;
  
  if (*in_stack_00000004 == 0x20) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004c3aa0();
    FUN_004dd690(in_stack_00000004[5]);
    return;
  }
  FUN_004dd690();
  return;
}
