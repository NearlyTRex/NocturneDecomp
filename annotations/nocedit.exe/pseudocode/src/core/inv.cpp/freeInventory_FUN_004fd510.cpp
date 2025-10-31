// Name: core_inv.cpp_freeInventory_FUN_004fd510
// Address: 004fd510
// Address Range: [[004fd510, 004fd5c6]]
// Convention: __cdecl
// Signature: void core_inv.cpp_freeInventory_FUN_004fd510(void)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db586 [UNCONDITIONAL_CALL]
// Globals:
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
//   engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560

#include "nocturne.h"

void __cdecl core_inv_cpp_freeInventory_FUN_004fd510(void)

{
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_InvBackgroundBitmap);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_InvBackground2Bitmap);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_WeapBackgroundBitmap);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_WeapBackground2Bitmap);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_BatteryIconBitmap);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_HealthBar1Bitmap);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_HealthBar2Bitmap);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_TommyClipIconBitmap);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_BulletIconBitmap);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_LithiumIconBitmap);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_MercuryBulletIconBitmap);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_ShotShellIconBitmap);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_SilverBulletIconBitmap);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_HolyBulletIconBitmap);
  return;
}


// Assembly code:
// 004fd510: PUSH 0x2dbaa70
//   Label: core_inv.cpp_freeInventory_FUN_004fd510
//   XREF to: 02dbaa70 (DATA)
// 004fd515: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004fd51a: ADD ESP,0x4
// 004fd51d: PUSH 0x2dbaa84
//   XREF to: 02dbaa84 (DATA)
// 004fd522: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004fd527: ADD ESP,0x4
// 004fd52a: PUSH 0x2dbaa98
//   XREF to: 02dbaa98 (DATA)
// 004fd52f: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004fd534: ADD ESP,0x4
// 004fd537: PUSH 0x2dbaaac
//   XREF to: 02dbaaac (DATA)
// 004fd53c: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004fd541: ADD ESP,0x4
// 004fd544: PUSH 0x2dcd6c8
//   XREF to: 02dcd6c8 (DATA)
// 004fd549: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004fd54e: ADD ESP,0x4
// 004fd551: PUSH 0x2dcd6dc
//   XREF to: 02dcd6dc (DATA)
// 004fd556: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004fd55b: ADD ESP,0x4
// 004fd55e: PUSH 0x2dcd6f0
//   XREF to: 02dcd6f0 (DATA)
// 004fd563: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004fd568: ADD ESP,0x4
// 004fd56b: PUSH 0x2dcd704
//   XREF to: 02dcd704 (DATA)
// 004fd570: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004fd575: ADD ESP,0x4
// 004fd578: PUSH 0x2dcd718
//   XREF to: 02dcd718 (DATA)
// 004fd57d: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004fd582: ADD ESP,0x4
// 004fd585: PUSH 0x2dcd72c
//   XREF to: 02dcd72c (DATA)
// 004fd58a: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004fd58f: ADD ESP,0x4
// 004fd592: PUSH 0x2dcd740
//   XREF to: 02dcd740 (DATA)
// 004fd597: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004fd59c: ADD ESP,0x4
// 004fd59f: PUSH 0x2dcd754
//   XREF to: 02dcd754 (DATA)
// 004fd5a4: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004fd5a9: ADD ESP,0x4
// 004fd5ac: PUSH 0x2dcd768
//   XREF to: 02dcd768 (DATA)
// 004fd5b1: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004fd5b6: ADD ESP,0x4
// 004fd5b9: PUSH 0x2dcd77c
//   XREF to: 02dcd77c (DATA)
// 004fd5be: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004fd5c3: ADD ESP,0x4
// 004fd5c6: RET
