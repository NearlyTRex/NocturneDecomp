; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_inv_cpp_freeInventory_FUN_004fd510(void)
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

    PUSH 0x2dbaa70                      ; 004fd510 | g_InvBackgroundBitmap
        ;   Label: core_inv.cpp_freeInventory_FUN_004fd510
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd515
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fd51a
    PUSH 0x2dbaa84                      ; 004fd51d | g_InvBackground2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd522
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fd527
    PUSH 0x2dbaa98                      ; 004fd52a | g_WeapBackgroundBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd52f
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fd534
    PUSH 0x2dbaaac                      ; 004fd537 | g_WeapBackground2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd53c
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fd541
    PUSH 0x2dcd6c8                      ; 004fd544 | g_BatteryIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd549
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fd54e
    PUSH 0x2dcd6dc                      ; 004fd551 | g_HealthBar1Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd556
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fd55b
    PUSH 0x2dcd6f0                      ; 004fd55e | g_HealthBar2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd563
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fd568
    PUSH 0x2dcd704                      ; 004fd56b | g_TommyClipIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd570
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fd575
    PUSH 0x2dcd718                      ; 004fd578 | g_BulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd57d
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fd582
    PUSH 0x2dcd72c                      ; 004fd585 | g_LithiumIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd58a
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fd58f
    PUSH 0x2dcd740                      ; 004fd592 | g_MercuryBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd597
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fd59c
    PUSH 0x2dcd754                      ; 004fd59f | g_ShotShellIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd5a4
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fd5a9
    PUSH 0x2dcd768                      ; 004fd5ac | g_SilverBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd5b1
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fd5b6
    PUSH 0x2dcd77c                      ; 004fd5b9 | g_HolyBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004fd5be
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fd5c3
    RET                                 ; 004fd5c6

