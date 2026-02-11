// Name: engine_ncursfx.cpp_staticInit_FUN_00544360
// Address: 00544360
// Address Range: [[00544360, 0054437a]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_staticInit_FUN_00544360(void)

#include "nocturne.h"

void __cdecl engine_ncursfx_cpp_staticInit_FUN_00544360(void)

{
  engine_ncursfx_cpp_CMouse_ctor_FUN_00544380(&g_CMouseInstance);
  _atexit(&g_CMouseDestructorNode);
  return;
}
