// Name: FUN_004da000
// Address: 004da000
// Address Range: [[004da000, 004da06d]]
// Convention: unknown
// Signature: float * FUN_004da000(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float * FUN_004da000(void)

{
  float fVar1;
  float *in_stack_00000004;
  int in_stack_00000008;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  (**(code **)(*(int *)(in_stack_00000008 + 0x14c) + 0x14))();
  fVar1 = _DAT_0058a161;
  *in_stack_00000004 = (fStack_30 + fStack_24) * _DAT_0058a161;
  in_stack_00000004[1] = fVar1 * (fStack_2c + fStack_20);
  in_stack_00000004[2] = fStack_28 + (float)_DAT_0058a169;
  return in_stack_00000004;
}
