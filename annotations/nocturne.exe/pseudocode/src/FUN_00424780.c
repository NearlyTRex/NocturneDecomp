// Name: FUN_00424780
// Address: 00424780
// Address Range: [[00424780, 004247e1]]
// Convention: unknown
// Signature: float FUN_00424780(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float FUN_00424780(void)

{
  float fVar1;
  float fVar2;
  float in_stack_00000008;
  
  fVar1 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
  fVar2 = -in_stack_00000008;
  if ((-in_stack_00000008 <= fVar1) && (fVar2 = in_stack_00000008, fVar1 <= in_stack_00000008)) {
    return fVar1;
  }
  return fVar2;
}
