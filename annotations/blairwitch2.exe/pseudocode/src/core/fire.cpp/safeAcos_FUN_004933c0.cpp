// Name: core_fire.cpp_safeAcos_FUN_004933c0
// Address: 004933c0
// Address Range: [[004933c0, 0049340f]]
// Convention: unknown
// Signature: float core_fire_cpp_safeAcos_FUN_004933c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float core_fire_cpp_safeAcos_FUN_004933c0(void)

{
  float10 fVar1;
  float in_stack_00000004;
  uint uStack_8;
  
  if (in_stack_00000004 <= (float)_DAT_005d5332) {
    uStack_8 = 3.1415927;
  }
  else {
    if (in_stack_00000004 < 1.0) {
      fVar1 = (float10)in_stack_00000004;
      acos();
      return (float)fVar1;
    }
    uStack_8 = 0.0;
  }
  return uStack_8;
}
