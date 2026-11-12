// Name: core_menu.cpp_staticInit_FUN_004eae70
// Address: 004eae70
// Address Range: [[004eae70, 004eaf13]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_staticInit_FUN_004eae70(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_staticInit_FUN_004eae70(void)

{
  __arrinit(g_MenuBitmaps,8,&g_CAlphaBitmapTypeInfo);
  _atexit(&WatcomStaticDestructorNode_00617f68);
  core_moon_cpp_CMoon_ctor_FUN_00502350(&g_CMoonInstance);
  _atexit(&WatcomStaticDestructorNode_00617f78);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&g_MenuBlurLeft);
  _atexit(&WatcomStaticDestructorNode_00617f88);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&g_MenuBlurMiddle);
  _atexit(&WatcomStaticDestructorNode_00617f98);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&g_MenuBlurRight);
  _atexit(&WatcomStaticDestructorNode_00617fa8);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&g_CalibrationBitmap);
  _atexit(&WatcomStaticDestructorNode_00617fb8);
  return;
}
