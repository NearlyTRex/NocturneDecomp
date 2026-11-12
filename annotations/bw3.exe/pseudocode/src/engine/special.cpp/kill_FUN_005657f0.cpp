// Name: engine_special.cpp_kill_FUN_005657f0
// Address: 005657f0
// Address Range: [[005657f0, 0056580f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_kill_FUN_005657f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_kill_FUN_005657f0(void)

{
  if (_DAT_02cf6108 == 0) {
    return 1;
  }
  (*_DAT_02cf5fe8)();
  engine_special_cpp_shutdownExternalRenderer_FUN_00564010();
  return 1;
}
