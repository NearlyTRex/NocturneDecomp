// Name: engine_special.cpp_kill_FUN_00581f20
// Address: 00581f20
// Address Range: [[00581f20, 00581f3f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_kill_FUN_00581f20(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_kill_FUN_00581f20(void)

{
  if (g_INT_02c834ac == 0) {
    return 1;
  }
  (*(code *)g_PTR_02c8338c)();
  engine_special_cpp_shutdownExternalRenderer_FUN_00580740();
  return 1;
}
