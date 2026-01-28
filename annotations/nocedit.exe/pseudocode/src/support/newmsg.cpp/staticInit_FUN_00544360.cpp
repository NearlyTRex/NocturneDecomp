// Name: support_newmsg.cpp_staticInit_FUN_00544360
// Address: 00544360
// Address Range: [[00544360, 0054437a]]
// Convention: __cdecl
// Signature: void __cdecl support_newmsg_cpp_staticInit_FUN_00544360(void)

#include "nocturne.h"

void __cdecl support_newmsg_cpp_staticInit_FUN_00544360(void)

{
  support_newmsg_cpp_CMouse_ctor_FUN_00544380(&g_CMouseInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CMouseDestructorNode);
  return;
}
