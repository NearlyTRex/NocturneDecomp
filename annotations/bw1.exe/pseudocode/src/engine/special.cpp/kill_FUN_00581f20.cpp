// Name: engine_special.cpp_kill_FUN_00581f20
// Address: 00581f20
// Address Range: [[00581f20, 00581f3f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_kill_FUN_00581f20(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_kill_FUN_00581f20(void)

{
  if (g_LoadedExternalDLLRenderer == 0) {
    return 1;
  }
  (*(code *)g_APIDLL_kill)();
  engine_special_cpp_shutdownExternalRenderer_FUN_00580740();
  return 1;
}
