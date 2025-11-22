// Name: core_menu.cpp_staticInit_FUN_0050fdb0
// Address: 0050fdb0
// Address Range: [[0050fdb0, 0050fe53]]
// Convention: __cdecl
// Signature: void core_menu.cpp_staticInit_FUN_0050fdb0(void)
// Globals:
//   WatcomTypeInfo g_CAlphaBitmapTypeInfo
//   WatcomStaticDestructorNode DAT_0067d224
//   WatcomStaticDestructorNode DAT_0067d234
//   WatcomStaticDestructorNode DAT_0067d244
//   WatcomStaticDestructorNode DAT_0067d254
//   WatcomStaticDestructorNode DAT_0067d264
//   WatcomStaticDestructorNode DAT_0067d274
//   CAlphaBitmap[8] g_MenuBitmaps
//   CMoon g_CMoonInstance
//   CAlphaBitmap g_MenuBlurLeft
//   CAlphaBitmap g_MenuBlurMiddle
//   CAlphaBitmap g_MenuBlurRight
//   CAlphaBitmap g_CalibrationBitmap
// Function calls:
//   core_moon.cpp_CMoon_ctor_FUN_00529a80
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060
//   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520

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


// Assembly code:
// 0050fdb0: PUSH 0x65e9f0
//   Label: core_menu.cpp_staticInit_FUN_0050fdb0
//   XREF to: 0065e9f0 (DATA)
// 0050fdb5: PUSH 0x8
// 0050fdb7: PUSH 0x2f214f0
//   XREF to: 02f214f0 (DATA)
// 0050fdbc: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0050fdc1: ADD ESP,0xc
// 0050fdc4: PUSH 0x67d224
//   XREF to: 0067d224 (DATA)
// 0050fdc9: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0050fdce: ADD ESP,0x4
// 0050fdd1: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 0050fdd6: CALL core_moon.cpp_CMoon_ctor_FUN_00529a80
//   XREF to: 00529a80 (UNCONDITIONAL_CALL)
// 0050fddb: ADD ESP,0x4
// 0050fdde: PUSH 0x67d234
//   XREF to: 0067d234 (DATA)
// 0050fde3: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0050fde8: ADD ESP,0x4
// 0050fdeb: PUSH 0x2f26c70
//   XREF to: 02f26c70 (DATA)
// 0050fdf0: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 0050fdf5: ADD ESP,0x4
// 0050fdf8: PUSH 0x67d244
//   XREF to: 0067d244 (DATA)
// 0050fdfd: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0050fe02: ADD ESP,0x4
// 0050fe05: PUSH 0x2f26c84
//   XREF to: 02f26c84 (DATA)
// 0050fe0a: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 0050fe0f: ADD ESP,0x4
// 0050fe12: PUSH 0x67d254
//   XREF to: 0067d254 (DATA)
// 0050fe17: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0050fe1c: ADD ESP,0x4
// 0050fe1f: PUSH 0x2f26c98
//   XREF to: 02f26c98 (DATA)
// 0050fe24: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 0050fe29: ADD ESP,0x4
// 0050fe2c: PUSH 0x67d264
//   XREF to: 0067d264 (DATA)
// 0050fe31: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0050fe36: ADD ESP,0x4
// 0050fe39: PUSH 0x2f26cbc
//   XREF to: 02f26cbc (DATA)
// 0050fe3e: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 0050fe43: ADD ESP,0x4
// 0050fe46: PUSH 0x67d274
//   XREF to: 0067d274 (DATA)
// 0050fe4b: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0050fe50: ADD ESP,0x4
// 0050fe53: RET
