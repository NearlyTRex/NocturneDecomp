; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_inv.cpp_freeInventory_FUN_004fd510(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db586
;
; Referenced Globals:
;   CAlphaBitmap g_InvBackgroundBitmap
;   CAlphaBitmap g_InvBackground2Bitmap
;   CAlphaBitmap g_WeapBackgroundBitmap
;   CAlphaBitmap g_WeapBackground2Bitmap
;   CAlphaBitmap g_BatteryIconBitmap
;   CAlphaBitmap g_HealthBar1Bitmap
;   CAlphaBitmap g_HealthBar2Bitmap
;   CAlphaBitmap g_TommyClipIconBitmap
;   CAlphaBitmap g_BulletIconBitmap
;   CAlphaBitmap g_LithiumIconBitmap
;   CAlphaBitmap g_MercuryBulletIconBitmap
;   CAlphaBitmap g_ShotShellIconBitmap
;   CAlphaBitmap g_SilverBulletIconBitmap
;   CAlphaBitmap g_HolyBulletIconBitmap
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
;
; *****************************************************************************

section .text

    PUSH 0x2dbaa70                      ; 004fd510 | CAlphaBitmap g_InvBackgroundBitmap
        ;   Label: core_inv.cpp_freeInventory_FUN_004fd510
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd515 | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fd51a
    PUSH 0x2dbaa84                      ; 004fd51d | CAlphaBitmap g_InvBackground2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd522 | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fd527
    PUSH 0x2dbaa98                      ; 004fd52a | CAlphaBitmap g_WeapBackgroundBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd52f | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fd534
    PUSH 0x2dbaaac                      ; 004fd537 | CAlphaBitmap g_WeapBackground2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd53c | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fd541
    PUSH 0x2dcd6c8                      ; 004fd544 | CAlphaBitmap g_BatteryIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd549 | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fd54e
    PUSH 0x2dcd6dc                      ; 004fd551 | CAlphaBitmap g_HealthBar1Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd556 | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fd55b
    PUSH 0x2dcd6f0                      ; 004fd55e | CAlphaBitmap g_HealthBar2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd563 | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fd568
    PUSH 0x2dcd704                      ; 004fd56b | CAlphaBitmap g_TommyClipIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd570 | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fd575
    PUSH 0x2dcd718                      ; 004fd578 | CAlphaBitmap g_BulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd57d | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fd582
    PUSH 0x2dcd72c                      ; 004fd585 | CAlphaBitmap g_LithiumIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd58a | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fd58f
    PUSH 0x2dcd740                      ; 004fd592 | CAlphaBitmap g_MercuryBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd597 | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fd59c
    PUSH 0x2dcd754                      ; 004fd59f | CAlphaBitmap g_ShotShellIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd5a4 | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fd5a9
    PUSH 0x2dcd768                      ; 004fd5ac | CAlphaBitmap g_SilverBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd5b1 | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fd5b6
    PUSH 0x2dcd77c                      ; 004fd5b9 | CAlphaBitmap g_HolyBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd5be | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fd5c3
    RET                                 ; 004fd5c6

