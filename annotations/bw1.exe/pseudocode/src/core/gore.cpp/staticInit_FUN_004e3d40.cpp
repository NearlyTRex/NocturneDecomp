// Name: core_gore.cpp_staticInit_FUN_004e3d40
// Address: 004e3d40
// Address Range: [[004e3d40, 004e3dc0]]
// Convention: unknown
// Signature: void core_gore_cpp_staticInit_FUN_004e3d40(void)

#include "nocturne.h"

void core_gore_cpp_staticInit_FUN_004e3d40(void)

{
  core_gore_cpp_CGore_ctor_FUN_004e5bd0(&g_CGoreInstance);
  _atexit();
  __arrinit(g_BloodParticles,0x100);
  _atexit();
  __arrinit(0x1cd56b4,2000);
  __arrinit(0x1cf69fc,0x20);
  __arrinit(0x1cf6f04,1000);
  return;
}
