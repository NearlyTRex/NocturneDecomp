// Name: core_moon.cpp_staticInit_FUN_004f93a0
// Address: 004f93a0
// Address Range: [[004f93a0, 004f940f]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_staticInit_FUN_004f93a0(void)

#include "nocturne.h"

void __cdecl core_moon_cpp_staticInit_FUN_004f93a0(void)

{
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&CAlphaBitmap_01d883a8);
  _atexit(&WatcomStaticDestructorNode_006006b8);
  __arrinit(g_MoonAnimTextures,0x1e,&g_CAlphaBitmapTypeInfo);
  _atexit(&WatcomStaticDestructorNode_006006c8);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&CAlphaBitmap_01d88614);
  _atexit(&WatcomStaticDestructorNode_006006d8);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&CAlphaBitmap_01d88628);
  _atexit(&WatcomStaticDestructorNode_006006e8);
  return;
}
