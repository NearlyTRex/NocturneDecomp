// Name: core_fire.cpp_safeAcos_FUN_00496c10
// Address: 00496c10
// Address Range: [[00496c10, 00496c5f]]
// Convention: unknown
// Signature: float core_fire_cpp_safeAcos_FUN_00496c10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float core_fire_cpp_safeAcos_FUN_00496c10(void)

{
  float10 fVar1;
  float in_stack_00000004;
  uint uStack_8;
  
  if (in_stack_00000004 <= (float)_DAT_005c04b0) {
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
