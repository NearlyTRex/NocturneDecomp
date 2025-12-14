; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_inv.cpp_staticInit_FUN_004fcc30(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode DAT_0067cd60
;   WatcomStaticDestructorNode DAT_0067cd70
;   WatcomStaticDestructorNode DAT_0067cd80
;   WatcomStaticDestructorNode DAT_0067cd90
;   WatcomStaticDestructorNode DAT_0067cda0
;   WatcomStaticDestructorNode DAT_0067cdb0
;   WatcomStaticDestructorNode DAT_0067cdc0
;   WatcomStaticDestructorNode DAT_0067cdd0
;   WatcomStaticDestructorNode DAT_0067cde0
;   WatcomStaticDestructorNode DAT_0067cdf0
;   WatcomStaticDestructorNode DAT_0067ce00
;   WatcomStaticDestructorNode DAT_0067ce10
;   WatcomStaticDestructorNode DAT_0067ce20
;   WatcomStaticDestructorNode DAT_0067ce30
;   CAlphaBitmap g_InvBackgroundBitmap
;   ... and 13 more
;
; Called Functions:
;   crt_stdlib.c_atexit_FUN_005ff060
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
;
; *****************************************************************************

section .text

    PUSH 0x2dbaa70                      ; 004fcc30 | g_InvBackgroundBitmap
        ;   Label: core_inv.cpp_staticInit_FUN_004fcc30
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004fcc35
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fcc3a
    PUSH 0x67cd60                       ; 004fcc3d | DAT_0067cd60
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004fcc42
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fcc47
    PUSH 0x2dbaa84                      ; 004fcc4a | g_InvBackground2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004fcc4f
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fcc54
    PUSH 0x67cd70                       ; 004fcc57 | DAT_0067cd70
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004fcc5c
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fcc61
    PUSH 0x2dbaa98                      ; 004fcc64 | g_WeapBackgroundBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004fcc69
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fcc6e
    PUSH 0x67cd80                       ; 004fcc71 | DAT_0067cd80
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004fcc76
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fcc7b
    PUSH 0x2dbaaac                      ; 004fcc7e | g_WeapBackground2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004fcc83
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fcc88
    PUSH 0x67cd90                       ; 004fcc8b | DAT_0067cd90
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004fcc90
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fcc95
    PUSH 0x2dcd6c8                      ; 004fcc98 | g_BatteryIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004fcc9d
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fcca2
    PUSH 0x67cda0                       ; 004fcca5 | DAT_0067cda0
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004fccaa
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fccaf
    PUSH 0x2dcd6dc                      ; 004fccb2 | g_HealthBar1Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004fccb7
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fccbc
    PUSH 0x67cdb0                       ; 004fccbf | DAT_0067cdb0
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004fccc4
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fccc9
    PUSH 0x2dcd6f0                      ; 004fcccc | g_HealthBar2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004fccd1
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fccd6
    PUSH 0x67cdc0                       ; 004fccd9 | DAT_0067cdc0
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004fccde
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fcce3
    PUSH 0x2dcd704                      ; 004fcce6 | g_TommyClipIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004fcceb
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fccf0
    PUSH 0x67cdd0                       ; 004fccf3 | DAT_0067cdd0
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004fccf8
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fccfd
    PUSH 0x2dcd718                      ; 004fcd00 | g_BulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004fcd05
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fcd0a
    PUSH 0x67cde0                       ; 004fcd0d | DAT_0067cde0
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004fcd12
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fcd17
    PUSH 0x2dcd72c                      ; 004fcd1a | g_LithiumIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004fcd1f
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fcd24
    PUSH 0x67cdf0                       ; 004fcd27 | DAT_0067cdf0
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004fcd2c
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fcd31
    PUSH 0x2dcd740                      ; 004fcd34 | g_MercuryBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004fcd39
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fcd3e
    PUSH 0x67ce00                       ; 004fcd41 | DAT_0067ce00
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004fcd46
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fcd4b
    PUSH 0x2dcd754                      ; 004fcd4e | g_ShotShellIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004fcd53
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fcd58
    PUSH 0x67ce10                       ; 004fcd5b | DAT_0067ce10
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004fcd60
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fcd65
    PUSH 0x2dcd768                      ; 004fcd68 | g_SilverBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004fcd6d
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fcd72
    PUSH 0x67ce20                       ; 004fcd75 | DAT_0067ce20
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004fcd7a
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fcd7f
    PUSH 0x2dcd77c                      ; 004fcd82 | g_HolyBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004fcd87
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fcd8c
    PUSH 0x67ce30                       ; 004fcd8f | DAT_0067ce30
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004fcd94
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fcd99
    RET                                 ; 004fcd9c

