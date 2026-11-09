; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ncursfx_cpp_staticInit_FUN_00531200(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005c1093
;   engine_ncursfx.cpp_CMouse_ctor_FUN_00531220
;
; *****************************************************************************

section .text

    PUSH 0x1d81104                      ; 00531200
        ;   Label: engine_ncursfx.cpp_staticInit_FUN_00531200
    CALL engine_ncursfx.cpp_CMouse_ctor_FUN_00531220 ; 00531205
        ;   XREF to: 00531220 (UNCONDITIONAL_CALL)  ; CMouse * engine_ncursfx.cpp_CMouse_ctor_FUN_00531220(CMouse * this_ptr)
    ADD ESP,0x4                         ; 0053120a
    PUSH 0x6226f0                       ; 0053120d
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 00531212
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 00531217
    RET                                 ; 0053121a

