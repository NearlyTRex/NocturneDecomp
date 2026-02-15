// Name: core_menu.cpp_staticInit_FUN_0050fdb0
// Address: 0050fdb0
// Address Range: [[0050fdb0, 0050fe53]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_staticInit_FUN_0050fdb0(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_staticInit_FUN_0050fdb0(void)

{
  __arrinit(g_MenuBitmaps,8,&g_CAlphaBitmapTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0067d224);
  core_moon_cpp_CMoon_ctor_FUN_00529a80(&g_CMoonInstance);
  _atexit(&WatcomStaticDestructorNode_0067d234);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_MenuBlurLeft);
  _atexit(&WatcomStaticDestructorNode_0067d244);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_MenuBlurMiddle);
  _atexit(&WatcomStaticDestructorNode_0067d254);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_MenuBlurRight);
  _atexit(&WatcomStaticDestructorNode_0067d264);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_CalibrationBitmap);
  _atexit(&WatcomStaticDestructorNode_0067d274);
  return;
}
