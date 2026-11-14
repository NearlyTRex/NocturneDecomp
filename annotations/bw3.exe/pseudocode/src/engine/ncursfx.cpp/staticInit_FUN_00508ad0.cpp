// Name: engine_ncursfx.cpp_staticInit_FUN_00508ad0
// Address: 00508ad0
// Address Range: [[00508ad0, 00508aea]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_staticInit_FUN_00508ad0(void)

#include "nocturne.h"

void __cdecl engine_ncursfx_cpp_staticInit_FUN_00508ad0(void)

{
  engine_ncursfx_cpp_CMouse_ctor_FUN_00508af0(&g_CMouseInstance);
  _atexit(&g_CMouseDestructorNode);
  return;
}
