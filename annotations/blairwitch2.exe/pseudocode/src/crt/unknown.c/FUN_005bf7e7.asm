; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf7e7(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FXCH ST5                            ; 005bf7e7
        ;   Label: crt_unknown.c_FUN_005bf7e7
    FSTP extended double ptr [ESP + 0xc] ; 005bf7e9
    FXCH ST4                            ; 005bf7ed
    FLD ST0                             ; 005bf7ef
    FSTP extended double ptr [ESP]      ; 005bf7f1
    FSTP extended double ptr [ESP + 0x20] ; 005bf7f4
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf7f8
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST4                            ; 005bf7fd
    FLD extended double ptr [ESP + 0x20] ; 005bf7ff
    ADD ESP,0x2c                        ; 005bf803
    RET                                 ; 005bf806

