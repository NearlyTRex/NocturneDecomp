// Name: core_menu.cpp_staticInit_FUN_004e7610
// Address: 004e7610
// Address Range: [[004e7610, 004e76b3]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_staticInit_FUN_004e7610(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_staticInit_FUN_004e7610(void)

{
  __arrinit(g_MenuBitmaps,8,&g_CAlphaBitmapTypeInfo);
  _atexit(&WatcomStaticDestructorNode_00600358);
  core_moon_cpp_CMoon_ctor_FUN_004f9410(&g_CMoonInstance);
  _atexit(&WatcomStaticDestructorNode_00600368);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&g_MenuBlurLeft);
  _atexit(&WatcomStaticDestructorNode_00600378);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&g_MenuBlurMiddle);
  _atexit(&WatcomStaticDestructorNode_00600388);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&g_MenuBlurRight);
  _atexit(&WatcomStaticDestructorNode_00600398);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&g_CalibrationBitmap);
  _atexit(&WatcomStaticDestructorNode_006003a8);
  return;
}
