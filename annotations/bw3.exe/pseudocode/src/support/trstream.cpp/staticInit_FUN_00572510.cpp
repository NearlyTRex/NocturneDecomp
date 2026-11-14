// Name: support_trstream.cpp_staticInit_FUN_00572510
// Address: 00572510
// Address Range: [[00572510, 0057252a]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_staticInit_FUN_00572510(void)

#include "nocturne.h"

void __cdecl support_trstream_cpp_staticInit_FUN_00572510(void)

{
  support_trstream_cpp_COutStreamDebug_ctor_FUN_00574e00(&g_COutStreamDebugInstance);
  _atexit(&WatcomStaticDestructorNode_00606abc);
  return;
}
