// Name: engine_special.cpp_kill_FUN_0055f4d0
// Address: 0055f4d0
// Address Range: [[0055f4d0, 0055f4ef]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_kill_FUN_0055f4d0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_kill_FUN_0055f4d0(void)

{
  if (g_INT_0264bcdc == 0) {
    return 1;
  }
  (*(code *)g_PTR_0264bbbc)();
  engine_special_cpp_shutdownExternalRenderer_FUN_0055dcf0();
  return 1;
}
