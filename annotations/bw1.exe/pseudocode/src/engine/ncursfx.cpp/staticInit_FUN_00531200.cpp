// Name: engine_ncursfx.cpp_staticInit_FUN_00531200
// Address: 00531200
// Address Range: [[00531200, 0053121a]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_staticInit_FUN_00531200(void)

#include "nocturne.h"

void __cdecl engine_ncursfx_cpp_staticInit_FUN_00531200(void)

{
  engine_ncursfx_cpp_CMouse_ctor_FUN_00531220(&g_CMouseInstance);
  _atexit(&g_CMouseDestructorNode);
  return;
}
