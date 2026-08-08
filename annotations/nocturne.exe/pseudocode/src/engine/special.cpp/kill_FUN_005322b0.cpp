// Name: engine_special.cpp_kill_FUN_005322b0
// Address: 005322b0
// Address Range: [[005322b0, 005322cf]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_kill_FUN_005322b0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_kill_FUN_005322b0(void)

{
  if (g_LoadedExternalDLLRenderer == 0) {
    return 1;
  }
  (*g_APIDLL_kill)();
  engine_special_cpp_shutdownExternalRenderer_FUN_00530d40();
  return 1;
}
