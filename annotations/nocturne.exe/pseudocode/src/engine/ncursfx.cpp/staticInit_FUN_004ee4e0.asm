; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_staticInit_FUN_004ee4e0(void)
;
;
; Called Functions:
;   crt_unknown.c__atexit_FUN_00564bb0
;   engine_ncursfx.cpp_CMouse_ctor_FUN_004ee500
;
; *****************************************************************************

section .text

    PUSH 0x1d465c0                      ; 004ee4e0
        ;   Label: engine_ncursfx.cpp_staticInit_FUN_004ee4e0
    CALL engine_ncursfx.cpp_CMouse_ctor_FUN_004ee500 ; 004ee4e5
        ;   XREF to: 004ee500 (UNCONDITIONAL_CALL)  ; CMouse * engine_ncursfx.cpp_CMouse_ctor_FUN_004ee500(CMouse * this_ptr)
    ADD ESP,0x4                         ; 004ee4ea
    PUSH 0x5be050                       ; 004ee4ed
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004ee4f2
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004ee4f7
    RET                                 ; 004ee4fa

