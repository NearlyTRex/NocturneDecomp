; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_menu.cpp_staticInit_FUN_0050fdb0(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CAlphaBitmapTypeInfo
;   WatcomStaticDestructorNode DAT_0067d224
;   WatcomStaticDestructorNode DAT_0067d234
;   WatcomStaticDestructorNode DAT_0067d244
;   WatcomStaticDestructorNode DAT_0067d254
;   WatcomStaticDestructorNode DAT_0067d264
;   WatcomStaticDestructorNode DAT_0067d274
;   CAlphaBitmap[8] g_MenuBitmaps
;   CMoon g_CMoonInstance
;   CAlphaBitmap g_MenuBlurLeft
;   CAlphaBitmap g_MenuBlurMiddle
;   CAlphaBitmap g_MenuBlurRight
;   CAlphaBitmap g_CalibrationBitmap
;
; Called Functions:
;   core_moon.cpp_CMoon_ctor_FUN_00529a80
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   crt_stdlib.c_atexit_FUN_005ff060
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
;
; *****************************************************************************

section .text

    PUSH 0x65e9f0                       ; 0050fdb0 | WatcomTypeInfo g_CAlphaBitmapTypeInfo
        ;   Label: core_menu.cpp_staticInit_FUN_0050fdb0
    PUSH 0x8                            ; 0050fdb5
    PUSH 0x2f214f0                      ; 0050fdb7 | CAlphaBitmap[8] g_MenuBitmaps
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0050fdbc | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050fdc1
    PUSH 0x67d224                       ; 0050fdc4 | WatcomStaticDestructorNode DAT_0067d224
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 0050fdc9 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050fdce
    PUSH 0x2f21590                      ; 0050fdd1 | CMoon g_CMoonInstance
    CALL core_moon.cpp_CMoon_ctor_FUN_00529a80 ; 0050fdd6 | CMoon * core_moon.cpp_CMoon_ctor_FUN_00529a80(CMoon * this_ptr)
        ;   XREF to: 00529a80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050fddb
    PUSH 0x67d234                       ; 0050fdde | WatcomStaticDestructorNode DAT_0067d234
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 0050fde3 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050fde8
    PUSH 0x2f26c70                      ; 0050fdeb | CAlphaBitmap g_MenuBlurLeft
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 0050fdf0 | void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050fdf5
    PUSH 0x67d244                       ; 0050fdf8 | WatcomStaticDestructorNode DAT_0067d244
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 0050fdfd | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050fe02
    PUSH 0x2f26c84                      ; 0050fe05 | CAlphaBitmap g_MenuBlurMiddle
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 0050fe0a | void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050fe0f
    PUSH 0x67d254                       ; 0050fe12 | WatcomStaticDestructorNode DAT_0067d254
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 0050fe17 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050fe1c
    PUSH 0x2f26c98                      ; 0050fe1f | CAlphaBitmap g_MenuBlurRight
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 0050fe24 | void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050fe29
    PUSH 0x67d264                       ; 0050fe2c | WatcomStaticDestructorNode DAT_0067d264
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 0050fe31 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050fe36
    PUSH 0x2f26cbc                      ; 0050fe39 | CAlphaBitmap g_CalibrationBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 0050fe3e | void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050fe43
    PUSH 0x67d274                       ; 0050fe46 | WatcomStaticDestructorNode DAT_0067d274
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 0050fe4b | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050fe50
    RET                                 ; 0050fe53

