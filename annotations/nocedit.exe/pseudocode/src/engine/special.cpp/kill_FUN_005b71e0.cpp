// Name: engine_special.cpp_kill_FUN_005b71e0
// Address: 005b71e0
// Address Range: [[005b71e0, 005b71ff]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_kill_FUN_005b71e0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_kill_FUN_005b71e0(void)

{
  if (g_LoadedExternalDLLRenderer == 0) {
    return 1;
  }
  (*g_APIDLL_kill)();
  engine_special_cpp_shutdownExternalRenderer_FUN_005b5d20();
  return 1;
}
