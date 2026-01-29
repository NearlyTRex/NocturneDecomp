// Name: shape_memdbg.cpp_staticInit_FUN_0050ee40
// Address: 0050ee40
// Address Range: [[0050ee40, 0050ee5a]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_staticInit_FUN_0050ee40(void)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_staticInit_FUN_0050ee40(void)

{
  shape_memdbg_cpp_CLeakChecker_ctor_FUN_0050fba0(&g_CLeakCheckerInstance);
  _atexit(&g_CLeakCheckerDestructorNode);
  return;
}
