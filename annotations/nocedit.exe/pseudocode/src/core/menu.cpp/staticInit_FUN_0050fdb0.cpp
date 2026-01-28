// Name: core_menu.cpp_staticInit_FUN_0050fdb0
// Address: 0050fdb0
// Address Range: [[0050fdb0, 0050fe53]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_staticInit_FUN_0050fdb0(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_staticInit_FUN_0050fdb0(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_MenuBitmaps,8,&g_CAlphaBitmapTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067d224);
  core_moon_cpp_CMoon_ctor_FUN_00529a80(&g_CMoonInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067d234);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_MenuBlurLeft);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067d244);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_MenuBlurMiddle);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067d254);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_MenuBlurRight);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067d264);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_CalibrationBitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067d274);
  return;
}
