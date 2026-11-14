// Name: engine_ncursfx.cpp_staticInit_FUN_0050fff0
// Address: 0050fff0
// Address Range: [[0050fff0, 0051000a]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_staticInit_FUN_0050fff0(void)

#include "nocturne.h"

void __cdecl engine_ncursfx_cpp_staticInit_FUN_0050fff0(void)

{
  engine_ncursfx_cpp_CMouse_ctor_FUN_00510010(&g_CMouseInstance);
  _atexit(&g_CMouseDestructorNode);
  return;
}
