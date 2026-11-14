// Name: core_fire.cpp_safeAcos_FUN_004933c0
// Address: 004933c0
// Address Range: [[004933c0, 0049340f]]
// Convention: __cdecl
// Signature: float __cdecl core_fire_cpp_safeAcos_FUN_004933c0(float value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_fire_cpp_safeAcos_FUN_004933c0(float value)

{
  float10 fVar1;
  uint uStack_8;
  
  if (value <= (float)_DAT_005d5332) {
    uStack_8 = 3.1415927;
  }
  else {
    if (value < 1.0) {
      fVar1 = (float10)value;
      acos();
      return (float)fVar1;
    }
    uStack_8 = 0.0;
  }
  return uStack_8;
}
