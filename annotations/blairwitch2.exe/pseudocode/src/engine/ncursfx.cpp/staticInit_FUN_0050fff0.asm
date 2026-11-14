; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_staticInit_FUN_0050fff0(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   engine_ncursfx.cpp_CMouse_ctor_FUN_00510010
;
; *****************************************************************************

section .text

    PUSH 0x1d6519c                      ; 0050fff0
        ;   Label: engine_ncursfx.cpp_staticInit_FUN_0050fff0
    CALL engine_ncursfx.cpp_CMouse_ctor_FUN_00510010 ; 0050fff5
        ;   XREF to: 00510010 (UNCONDITIONAL_CALL)  ; CMouse * engine_ncursfx.cpp_CMouse_ctor_FUN_00510010(CMouse * this_ptr)
    ADD ESP,0x4                         ; 0050fffa
    PUSH 0x61b290                       ; 0050fffd
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00510002
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00510007
    RET                                 ; 0051000a

