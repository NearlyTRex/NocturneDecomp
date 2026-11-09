// Name: core_menu.cpp_staticInit_FUN_00509bd0
// Address: 00509bd0
// Address Range: [[00509bd0, 00509c73]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_staticInit_FUN_00509bd0(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_staticInit_FUN_00509bd0(void)

{
  __arrinit(g_MenuBitmaps,8,&g_CAlphaBitmapTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0061f450);
  core_moon_cpp_CMoon_ctor_FUN_00521bc0(&g_CMoonInstance);
  _atexit();
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&g_MenuBlurLeft);
  _atexit();
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&g_MenuBlurMiddle);
  _atexit();
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&g_MenuBlurRight);
  _atexit();
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&g_CalibrationBitmap);
  _atexit();
  return;
}
