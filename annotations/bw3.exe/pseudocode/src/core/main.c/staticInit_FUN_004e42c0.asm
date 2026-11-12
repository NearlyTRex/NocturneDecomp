; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_main_c_staticInit_FUN_004e42c0(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005a3e13
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0
;
; *****************************************************************************

section .text

    PUSH 0x1d71dec                      ; 004e42c0
        ;   Label: core_main.c_staticInit_FUN_004e42c0
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004e42c5
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e42ca
    PUSH 0x600302                       ; 004e42cd
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004e42d2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004e42d7
    PUSH 0x1d71e00                      ; 004e42da
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004e42df
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e42e4
    PUSH 0x600312                       ; 004e42e7
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004e42ec
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004e42f1
    PUSH 0x1d71e14                      ; 004e42f4
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004e42f9
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e42fe
    PUSH 0x600322                       ; 004e4301
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004e4306
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004e430b
    PUSH 0x1d71e28                      ; 004e430e
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004e4313
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e4318
    PUSH 0x600332                       ; 004e431b
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004e4320
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004e4325
    RET                                 ; 004e4328

