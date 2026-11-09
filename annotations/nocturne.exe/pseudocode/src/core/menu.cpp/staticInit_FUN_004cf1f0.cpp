// Name: core_menu.cpp_staticInit_FUN_004cf1f0
// Address: 004cf1f0
// Address Range: [[004cf1f0, 004cf293]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_staticInit_FUN_004cf1f0(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_staticInit_FUN_004cf1f0(void)

{
  __arrinit(g_MenuBitmaps,8,&g_CAlphaBitmapTypeInfo_0059df00);
  _atexit(&g_WatcomStaticDestructorNode_005badf8);
  core_moon_cpp_CMoon_ctor_FUN_004de800(&g_CMoonInstance);
  _atexit(&g_WatcomStaticDestructorNode_005bae08);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(&g_MenuBlurLeft);
  _atexit(&g_WatcomStaticDestructorNode_005bae18);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(&g_MenuBlurMiddle);
  _atexit(&g_WatcomStaticDestructorNode_005bae28);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(&g_MenuBlurRight);
  _atexit(&g_WatcomStaticDestructorNode_005bae38);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(&g_CalibrationBitmap);
  _atexit(&g_WatcomStaticDestructorNode_005bae48);
  return;
}
