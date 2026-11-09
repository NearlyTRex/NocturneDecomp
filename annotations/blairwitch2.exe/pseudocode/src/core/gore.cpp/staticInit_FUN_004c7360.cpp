// Name: core_gore.cpp_staticInit_FUN_004c7360
// Address: 004c7360
// Address Range: [[004c7360, 004c73e0]]
// Convention: unknown
// Signature: void core_gore_cpp_staticInit_FUN_004c7360(void)

#include "nocturne.h"

void core_gore_cpp_staticInit_FUN_004c7360(void)

{
  core_gore_cpp_CGore_ctor_FUN_004c93c0(&g_CGoreInstance);
  _atexit();
  __arrinit(g_BloodParticles,0x100);
  _atexit();
  __arrinit(0x1cbcafc,2000);
  __arrinit(0x1cdde44,0x20);
  __arrinit(0x1cde34c,1000);
  return;
}
