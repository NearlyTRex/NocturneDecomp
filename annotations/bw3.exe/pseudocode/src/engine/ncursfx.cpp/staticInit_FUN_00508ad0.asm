; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ncursfx_cpp_staticInit_FUN_00508ad0(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005a3e13
;   engine_ncursfx.cpp_CMouse_ctor_FUN_00508af0
;
; *****************************************************************************

section .text

    PUSH 0x1dd67dc                      ; 00508ad0
        ;   Label: engine_ncursfx.cpp_staticInit_FUN_00508ad0
    CALL engine_ncursfx.cpp_CMouse_ctor_FUN_00508af0 ; 00508ad5
        ;   XREF to: 00508af0 (UNCONDITIONAL_CALL)  ; CMouse * engine_ncursfx.cpp_CMouse_ctor_FUN_00508af0(CMouse * this_ptr)
    ADD ESP,0x4                         ; 00508ada
    PUSH 0x6035c0                       ; 00508add
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 00508ae2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00508ae7
    RET                                 ; 00508aea

