// Name: core_moon.cpp_staticInit_FUN_00521b60
// Address: 00521b60
// Address Range: [[00521b60, 00521bb5]]
// Convention: unknown
// Signature: void core_moon_cpp_staticInit_FUN_00521b60(void)

#include "nocturne.h"

void core_moon_cpp_staticInit_FUN_00521b60(void)

{
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&CAlphaBitmap_01d33ce4);
  _atexit(&WatcomStaticDestructorNode_0061f800);
  __arrinit(g_MoonAnimTextures,0x1e,&g_CAlphaBitmapTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0061f810);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&CAlphaBitmap_01d33f50);
  _atexit(&WatcomStaticDestructorNode_0061f820);
  return;
}
