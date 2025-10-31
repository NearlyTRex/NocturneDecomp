// Name: core_inv.cpp_staticInit_FUN_004fcc30
// Address: 004fcc30
// Address Range: [[004fcc30, 004fcd9c]]
// Convention: __cdecl
// Signature: void core_inv.cpp_staticInit_FUN_004fcc30(void)
// Globals:
//   WatcomStaticDestructorNode DAT_0067cd60
//   WatcomStaticDestructorNode DAT_0067cd70
//   WatcomStaticDestructorNode DAT_0067cd80
//   WatcomStaticDestructorNode DAT_0067cd90
//   WatcomStaticDestructorNode DAT_0067cda0
//   WatcomStaticDestructorNode DAT_0067cdb0
//   WatcomStaticDestructorNode DAT_0067cdc0
//   WatcomStaticDestructorNode DAT_0067cdd0
//   WatcomStaticDestructorNode DAT_0067cde0
//   WatcomStaticDestructorNode DAT_0067cdf0
//   WatcomStaticDestructorNode DAT_0067ce00
//   WatcomStaticDestructorNode DAT_0067ce10
//   WatcomStaticDestructorNode DAT_0067ce20
//   WatcomStaticDestructorNode DAT_0067ce30
//   CAlphaBitmap g_InvBackgroundBitmap
//   CAlphaBitmap g_InvBackground2Bitmap
//   CAlphaBitmap g_WeapBackgroundBitmap
//   CAlphaBitmap g_WeapBackground2Bitmap
//   CAlphaBitmap g_BatteryIconBitmap
//   CAlphaBitmap g_HealthBar1Bitmap
//   CAlphaBitmap g_HealthBar2Bitmap
//   CAlphaBitmap g_TommyClipIconBitmap
//   CAlphaBitmap g_BulletIconBitmap
//   CAlphaBitmap g_LithiumIconBitmap
//   CAlphaBitmap g_MercuryBulletIconBitmap
//   CAlphaBitmap g_ShotShellIconBitmap
//   CAlphaBitmap g_SilverBulletIconBitmap
//   CAlphaBitmap g_HolyBulletIconBitmap
// Function calls:
//   crt_stdlib.c_atexit_FUN_005ff060
//   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520

#include "nocturne.h"

void __cdecl core_inv_cpp_staticInit_FUN_004fcc30(void)

{
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_InvBackgroundBitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067cd60);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_InvBackground2Bitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067cd70);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_WeapBackgroundBitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067cd80);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_WeapBackground2Bitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067cd90);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_BatteryIconBitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067cda0);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_HealthBar1Bitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067cdb0);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_HealthBar2Bitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067cdc0);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_TommyClipIconBitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067cdd0);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_BulletIconBitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067cde0);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_LithiumIconBitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067cdf0);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_MercuryBulletIconBitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067ce00);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_ShotShellIconBitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067ce10);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_SilverBulletIconBitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067ce20);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_HolyBulletIconBitmap);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067ce30);
  return;
}


// Assembly code:
// 004fcc30: PUSH 0x2dbaa70
//   Label: core_inv.cpp_staticInit_FUN_004fcc30
//   XREF to: 02dbaa70 (DATA)
// 004fcc35: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004fcc3a: ADD ESP,0x4
// 004fcc3d: PUSH 0x67cd60
//   XREF to: 0067cd60 (DATA)
// 004fcc42: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004fcc47: ADD ESP,0x4
// 004fcc4a: PUSH 0x2dbaa84
//   XREF to: 02dbaa84 (DATA)
// 004fcc4f: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004fcc54: ADD ESP,0x4
// 004fcc57: PUSH 0x67cd70
//   XREF to: 0067cd70 (DATA)
// 004fcc5c: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004fcc61: ADD ESP,0x4
// 004fcc64: PUSH 0x2dbaa98
//   XREF to: 02dbaa98 (DATA)
// 004fcc69: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004fcc6e: ADD ESP,0x4
// 004fcc71: PUSH 0x67cd80
//   XREF to: 0067cd80 (DATA)
// 004fcc76: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004fcc7b: ADD ESP,0x4
// 004fcc7e: PUSH 0x2dbaaac
//   XREF to: 02dbaaac (DATA)
// 004fcc83: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004fcc88: ADD ESP,0x4
// 004fcc8b: PUSH 0x67cd90
//   XREF to: 0067cd90 (DATA)
// 004fcc90: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004fcc95: ADD ESP,0x4
// 004fcc98: PUSH 0x2dcd6c8
//   XREF to: 02dcd6c8 (DATA)
// 004fcc9d: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004fcca2: ADD ESP,0x4
// 004fcca5: PUSH 0x67cda0
//   XREF to: 0067cda0 (DATA)
// 004fccaa: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004fccaf: ADD ESP,0x4
// 004fccb2: PUSH 0x2dcd6dc
//   XREF to: 02dcd6dc (DATA)
// 004fccb7: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004fccbc: ADD ESP,0x4
// 004fccbf: PUSH 0x67cdb0
//   XREF to: 0067cdb0 (DATA)
// 004fccc4: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004fccc9: ADD ESP,0x4
// 004fcccc: PUSH 0x2dcd6f0
//   XREF to: 02dcd6f0 (DATA)
// 004fccd1: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004fccd6: ADD ESP,0x4
// 004fccd9: PUSH 0x67cdc0
//   XREF to: 0067cdc0 (DATA)
// 004fccde: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004fcce3: ADD ESP,0x4
// 004fcce6: PUSH 0x2dcd704
//   XREF to: 02dcd704 (DATA)
// 004fcceb: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004fccf0: ADD ESP,0x4
// 004fccf3: PUSH 0x67cdd0
//   XREF to: 0067cdd0 (DATA)
// 004fccf8: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004fccfd: ADD ESP,0x4
// 004fcd00: PUSH 0x2dcd718
//   XREF to: 02dcd718 (DATA)
// 004fcd05: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004fcd0a: ADD ESP,0x4
// 004fcd0d: PUSH 0x67cde0
//   XREF to: 0067cde0 (DATA)
// 004fcd12: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004fcd17: ADD ESP,0x4
// 004fcd1a: PUSH 0x2dcd72c
//   XREF to: 02dcd72c (DATA)
// 004fcd1f: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004fcd24: ADD ESP,0x4
// 004fcd27: PUSH 0x67cdf0
//   XREF to: 0067cdf0 (DATA)
// 004fcd2c: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004fcd31: ADD ESP,0x4
// 004fcd34: PUSH 0x2dcd740
//   XREF to: 02dcd740 (DATA)
// 004fcd39: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004fcd3e: ADD ESP,0x4
// 004fcd41: PUSH 0x67ce00
//   XREF to: 0067ce00 (DATA)
// 004fcd46: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004fcd4b: ADD ESP,0x4
// 004fcd4e: PUSH 0x2dcd754
//   XREF to: 02dcd754 (DATA)
// 004fcd53: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004fcd58: ADD ESP,0x4
// 004fcd5b: PUSH 0x67ce10
//   XREF to: 0067ce10 (DATA)
// 004fcd60: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004fcd65: ADD ESP,0x4
// 004fcd68: PUSH 0x2dcd768
//   XREF to: 02dcd768 (DATA)
// 004fcd6d: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004fcd72: ADD ESP,0x4
// 004fcd75: PUSH 0x67ce20
//   XREF to: 0067ce20 (DATA)
// 004fcd7a: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004fcd7f: ADD ESP,0x4
// 004fcd82: PUSH 0x2dcd77c
//   XREF to: 02dcd77c (DATA)
// 004fcd87: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004fcd8c: ADD ESP,0x4
// 004fcd8f: PUSH 0x67ce30
//   XREF to: 0067ce30 (DATA)
// 004fcd94: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004fcd99: ADD ESP,0x4
// 004fcd9c: RET
