; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ee4e0(void)
;
;
; Called Functions:
;   engine_ncursfx.cpp_CMouse_ctor_FUN_004ee500
;   FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x1d465c0                      ; 004ee4e0
        ;   Label: FUN_004ee4e0
    CALL engine_ncursfx.cpp_CMouse_ctor_FUN_004ee500 ; 004ee4e5
        ;   XREF to: 004ee500 (UNCONDITIONAL_CALL)  ; undefined engine_ncursfx.cpp_CMouse_ctor_FUN_004ee500()
    ADD ESP,0x4                         ; 004ee4ea
    PUSH 0x5be050                       ; 004ee4ed
    CALL FUN_00564bb0                   ; 004ee4f2
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 004ee4f7
    RET                                 ; 004ee4fa

