; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_level_cpp_staticInit_FUN_004dfc10(void)
;
;
; Called Functions:
;   core_level.cpp_FUN_004dfc40
;   crt_stdlib.c__atexit_FUN_005a3e13
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0
;
; *****************************************************************************

section .text

    PUSH 0x1d70ab8                      ; 004dfc10
        ;   Label: core_level.cpp_staticInit_FUN_004dfc10
    CALL core_level.cpp_FUN_004dfc40    ; 004dfc15
        ;   XREF to: 004dfc40 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004dfc40()
    ADD ESP,0x4                         ; 004dfc1a
    PUSH 0x1d70be8                      ; 004dfc1d
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004dfc22
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004dfc27
    PUSH 0x60029c                       ; 004dfc2a
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004dfc2f
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004dfc34
    RET                                 ; 004dfc37

