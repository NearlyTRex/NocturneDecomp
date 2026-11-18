// Name: engine_special.cpp_kill_FUN_005657f0
// Address: 005657f0
// Address Range: [[005657f0, 0056580f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_kill_FUN_005657f0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_kill_FUN_005657f0(void)

{
  if (g_INT_02cf6108 == 0) {
    return 1;
  }
  (*(code *)g_APIDLL_kill)();
  engine_special_cpp_shutdownExternalRenderer_FUN_00564010();
  return 1;
}
